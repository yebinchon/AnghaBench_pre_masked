
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int root; } ;
typedef TYPE_1__ xcb_screen_t ;
typedef int xcb_randr_get_screen_resources_reply_t ;
typedef int xcb_randr_get_screen_resources_cookie_t ;
typedef int xcb_connection_t ;
struct TYPE_4__ {TYPE_1__* data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 TYPE_2__ FUNC_4 (int ) ;

int FUNC_5(xcb_connection_t *VAR_0)
{
 if (!VAR_0)
  return 0;
 xcb_screen_t *VAR_1;
 VAR_1 = FUNC_4(FUNC_0(VAR_0)).data;

 xcb_randr_get_screen_resources_cookie_t VAR_2;
 xcb_randr_get_screen_resources_reply_t *VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1->root);
 VAR_3 = FUNC_3(VAR_0, VAR_2, 0);
 if (!VAR_3)
  return 0;

 return FUNC_2(VAR_3);
}
