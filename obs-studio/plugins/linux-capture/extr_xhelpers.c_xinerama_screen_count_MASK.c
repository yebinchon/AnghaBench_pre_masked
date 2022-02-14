
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int number; } ;
typedef TYPE_1__ xcb_xinerama_query_screens_reply_t ;
typedef int xcb_xinerama_query_screens_cookie_t ;
typedef int xcb_connection_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(xcb_connection_t *VAR_0)
{
 if (!VAR_0)
  return 0;

 int VAR_1 = 0;
 xcb_xinerama_query_screens_cookie_t VAR_2;
 xcb_xinerama_query_screens_reply_t *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_1(VAR_0, VAR_2, ((void*)0));
 if (VAR_3)
  VAR_1 = VAR_3->number;
 FUNC_0(VAR_3);

 return VAR_1;
}
