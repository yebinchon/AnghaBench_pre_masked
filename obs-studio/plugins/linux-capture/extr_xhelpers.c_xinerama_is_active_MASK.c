
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_1__ xcb_xinerama_is_active_reply_t ;
typedef int xcb_xinerama_is_active_cookie_t ;
typedef int xcb_connection_t ;
struct TYPE_6__ {int present; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (int *,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(xcb_connection_t *VAR_1)
{
 if (!VAR_1 || !FUNC_1(VAR_1, &VAR_0)->present)
  return 0;

 bool VAR_2 = 1;
 xcb_xinerama_is_active_cookie_t VAR_3;
 xcb_xinerama_is_active_reply_t *VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = FUNC_2(VAR_1, VAR_3, ((void*)0));
 if (!VAR_4 || VAR_4->state == 0)
  VAR_2 = 0;
 FUNC_0(VAR_4);

 return VAR_2;
}
