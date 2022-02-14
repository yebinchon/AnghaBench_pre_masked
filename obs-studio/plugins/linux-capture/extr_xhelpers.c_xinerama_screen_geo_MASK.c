
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; scalar_t__ rem; } ;
typedef TYPE_2__ xcb_xinerama_screen_info_iterator_t ;
typedef int xcb_xinerama_query_screens_reply_t ;
typedef int xcb_xinerama_query_screens_cookie_t ;
typedef int xcb_connection_t ;
typedef int int_fast32_t ;
struct TYPE_5__ {int height; int width; int y_org; int x_org; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 TYPE_2__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(xcb_connection_t *VAR_0, int_fast32_t VAR_1,
   int_fast32_t *VAR_2, int_fast32_t *VAR_3, int_fast32_t *VAR_4,
   int_fast32_t *VAR_5)
{
 if (!VAR_0)
  goto fail;

 bool VAR_6 = 0;
 xcb_xinerama_query_screens_cookie_t VAR_7;
 xcb_xinerama_query_screens_reply_t *VAR_8;
 xcb_xinerama_screen_info_iterator_t VAR_9;

 VAR_7 = FUNC_3(VAR_0);
 VAR_8 = FUNC_1(VAR_0, VAR_7, ((void*)0));
 if (!VAR_8)
  goto fail;

 VAR_9 = FUNC_2(VAR_8);
 for (; VAR_9.rem; --VAR_1, FUNC_4(&VAR_9)) {
  if (!VAR_1) {
   *VAR_2 = VAR_9.data->x_org;
   *VAR_3 = VAR_9.data->y_org;
   *VAR_4 = VAR_9.data->width;
   *VAR_5 = VAR_9.data->height;
   VAR_6 = 1;
  }
 }
 FUNC_0(VAR_8);

 if (VAR_6)
  return 0;

fail:
 *VAR_2 = *VAR_3 = *VAR_4 = *VAR_5 = 0;
 return -1;
}
