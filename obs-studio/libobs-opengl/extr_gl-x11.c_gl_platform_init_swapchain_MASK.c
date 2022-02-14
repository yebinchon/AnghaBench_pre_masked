
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* xcb_window_t ;
struct TYPE_14__ {int height; int width; int root; } ;
typedef TYPE_6__ xcb_get_geometry_reply_t ;
typedef int xcb_connection_t ;
typedef int xcb_colormap_t ;
typedef int uint32_t ;
struct TYPE_11__ {void* id; } ;
struct TYPE_12__ {TYPE_3__ window; } ;
struct gs_swap_chain {TYPE_5__* wi; TYPE_4__ info; TYPE_2__* device; } ;
struct TYPE_13__ {void* window; int config; } ;
struct TYPE_10__ {TYPE_1__* plat; } ;
struct TYPE_9__ {int * display; } ;
typedef int GLXFBConfig ;
typedef int Display ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *,int ) ;
 TYPE_6__* FUNC_5 (int *,void*) ;
 int * FUNC_6 (int *,int,int ,int*) ;
 int FUNC_7 (int *,int ,int ,int*) ;
 int FUNC_8 (int *,int ,int,void*,int) ;
 int FUNC_9 (int *,int,void*,void*,int ,int ,int ,int ,int ,int ,int,int,int*) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (int *,void*) ;

extern bool FUNC_12(struct gs_swap_chain *VAR_6)
{
 Display *VAR_7 = VAR_6->device->plat->display;
 xcb_connection_t *VAR_8 = FUNC_1(VAR_7);
 xcb_window_t VAR_9 = FUNC_10(VAR_8);
 xcb_window_t VAR_10 = VAR_6->info.window.id;
 xcb_get_geometry_reply_t *VAR_11 =
  FUNC_5(VAR_8, VAR_10);
 bool VAR_12 = 0;

 int VAR_13;
 int VAR_14;
 GLXFBConfig *VAR_15;

 if (!VAR_11)
  goto fail_geometry_request;

 VAR_13 = FUNC_4(VAR_8, VAR_11->root);
 if (VAR_13 == -1) {
  goto fail_screen;
 }


 {
  int VAR_16;
  VAR_15 = FUNC_6(VAR_7, VAR_13,
           VAR_5, &VAR_16);

  if (!VAR_15 || !VAR_16) {
   FUNC_2(VAR_1, "Failed to find FBConfig!");
   goto fail_fb_config;
  }
 }


 {
  int VAR_17 = FUNC_7(VAR_7, VAR_15[0],
       VAR_0, &VAR_14);

  if (VAR_17) {
   FUNC_2(VAR_1, "Bad call to GetFBConfigAttrib!");
   goto fail_visual_id;
  }
 }

 xcb_colormap_t VAR_18 = FUNC_10(VAR_8);
 uint32_t VAR_19 = VAR_3 | VAR_4;
 uint32_t VAR_20[] = {0, VAR_18, 0};

 FUNC_8(VAR_8, VAR_2, VAR_18, VAR_10,
       VAR_14);

 FUNC_9(VAR_8, 24 , VAR_9, VAR_10, 0, 0,
     VAR_11->width, VAR_11->height, 0, 0, VAR_14, VAR_19,
     VAR_20);

 VAR_6->wi->config = VAR_15[0];
 VAR_6->wi->window = VAR_9;

 FUNC_11(VAR_8, VAR_9);

 FUNC_0(VAR_15);
 VAR_12 = 1;
 goto success;

fail_visual_id:
 FUNC_0(VAR_15);
fail_fb_config:
fail_screen:
fail_geometry_request:
success:
 FUNC_3(VAR_11);
 return VAR_12;
}
