
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_xfixes_get_cursor_image_reply_t ;
typedef int xcb_xfixes_get_cursor_image_cookie_t ;
typedef int xcb_shm_get_image_reply_t ;
typedef int xcb_shm_get_image_cookie_t ;
struct TYPE_6__ {int width; int cursor; TYPE_2__* xshm; int texture; int xcb; int height; int y_org; int x_org; TYPE_1__* xcb_screen; int source; } ;
struct TYPE_5__ {scalar_t__ data; int seg; } ;
struct TYPE_4__ {int root; } ;


 int FUNC_0 (float) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,void*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int *) ;
 int * FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void *VAR_2, float VAR_3)
{
 FUNC_0(VAR_3);
 FUNC_1(VAR_2);

 if (!VAR_1->texture)
  return;
 if (!FUNC_6(VAR_1->source))
  return;

 xcb_shm_get_image_cookie_t VAR_4;
 xcb_shm_get_image_reply_t *VAR_5;
 xcb_xfixes_get_cursor_image_cookie_t VAR_6;
 xcb_xfixes_get_cursor_image_reply_t *VAR_7;

 VAR_4 = FUNC_8(VAR_1->xcb, VAR_1->xcb_screen->root,
         VAR_1->x_org, VAR_1->y_org,
         VAR_1->width, VAR_1->height, ~0,
         VAR_0,
         VAR_1->xshm->seg, 0);
 VAR_6 = FUNC_11(VAR_1->xcb);

 VAR_5 = FUNC_7(VAR_1->xcb, VAR_4, ((void*)0));
 VAR_7 = FUNC_10(VAR_1->xcb, VAR_6, ((void*)0));

 if (!VAR_5)
  goto exit;

 FUNC_4();

 FUNC_3(VAR_1->texture, (void *)VAR_1->xshm->data,
        VAR_1->width * 4, 0);
 FUNC_9(VAR_1->cursor, VAR_7);

 FUNC_5();

exit:
 FUNC_2(VAR_5);
 FUNC_2(VAR_7);
}
