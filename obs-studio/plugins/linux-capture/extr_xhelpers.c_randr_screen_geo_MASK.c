
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int root; } ;
typedef TYPE_1__ xcb_screen_t ;
typedef int xcb_randr_get_screen_resources_reply_t ;
typedef int xcb_randr_get_screen_resources_cookie_t ;
struct TYPE_7__ {int x; int y; int width; int height; } ;
typedef TYPE_2__ xcb_randr_get_crtc_info_reply_t ;
typedef int xcb_randr_get_crtc_info_cookie_t ;
typedef int xcb_randr_crtc_t ;
typedef int xcb_connection_t ;
typedef int int_fast32_t ;
struct TYPE_8__ {TYPE_1__* data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ,int ) ;
 TYPE_3__ FUNC_7 (int ) ;

int FUNC_8(xcb_connection_t *VAR_0, int_fast32_t VAR_1,
       int_fast32_t *VAR_2, int_fast32_t *VAR_3, int_fast32_t *VAR_4,
       int_fast32_t *VAR_5, xcb_screen_t **VAR_6)
{
 xcb_screen_t *VAR_7;
 VAR_7 = FUNC_7(FUNC_0(VAR_0)).data;

 xcb_randr_get_screen_resources_cookie_t VAR_8;
 xcb_randr_get_screen_resources_reply_t *VAR_9;

 VAR_8 = FUNC_3(VAR_0, VAR_7->root);
 VAR_9 = FUNC_6(VAR_0, VAR_8, 0);
 if (!VAR_9)
  goto fail;

 int VAR_10 = FUNC_5(VAR_9);
 if (VAR_1 < 0 || VAR_1 >= VAR_10)
  goto fail;

 xcb_randr_crtc_t *VAR_11 = FUNC_4(VAR_9);

 xcb_randr_get_crtc_info_cookie_t VAR_12;
 xcb_randr_get_crtc_info_reply_t *VAR_13;

 VAR_12 = FUNC_1(VAR_0, *(VAR_11 + VAR_1), 0);
 VAR_13 = FUNC_2(VAR_0, VAR_12, 0);
 if (!VAR_13)
  goto fail;

 *VAR_2 = VAR_13->x;
 *VAR_3 = VAR_13->y;
 *VAR_4 = VAR_13->width;
 *VAR_5 = VAR_13->height;

 if (VAR_6)
  *VAR_6 = VAR_7;

 return 0;

fail:
 *VAR_2 = *VAR_3 = *VAR_4 = *VAR_5 = 0;
 return -1;
}
