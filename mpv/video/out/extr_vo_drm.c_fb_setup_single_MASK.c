
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int depth; } ;
struct framebuffer {int size; int map; int handle; int fb; int stride; int height; int width; } ;
struct drm_mode_map_dumb {int offset; int handle; int bpp; int size; int pitch; int height; int width; } ;
struct drm_mode_create_dumb {int offset; int handle; int bpp; int size; int pitch; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vo*,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,int ,struct drm_mode_map_dumb*) ;
 scalar_t__ FUNC_2 (int,int ,int ,int ,int ,int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_3 (int,struct framebuffer*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int,int ,int,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct vo *VAR_8, int VAR_9, struct framebuffer *VAR_10)
{
    struct priv *VAR_11 = VAR_8->priv;

    VAR_10->handle = 0;


    struct drm_mode_create_dumb VAR_12 = {
        .width = VAR_10->width,
        .height = VAR_10->height,
        .bpp = VAR_0,
    };
    if (FUNC_1(VAR_9, VAR_1, &VAR_12) < 0) {
        FUNC_0(VAR_8, "Cannot create dumb buffer: %s\n", FUNC_6(VAR_7));
        goto err;
    }
    VAR_10->stride = VAR_12.pitch;
    VAR_10->size = VAR_12.size;
    VAR_10->handle = VAR_12.handle;


    if (FUNC_2(VAR_9, VAR_10->width, VAR_10->height, VAR_11->depth, VAR_12.bpp, VAR_10->stride,
                     VAR_10->handle, &VAR_10->fb)) {
        FUNC_0(VAR_8, "Cannot create framebuffer: %s\n", FUNC_6(VAR_7));
        goto err;
    }


    struct drm_mode_map_dumb VAR_13 = {
        .handle = VAR_10->handle,
    };
    if (FUNC_1(VAR_9, VAR_2, &VAR_13)) {
        FUNC_0(VAR_8, "Cannot map dumb buffer: %s\n", FUNC_6(VAR_7));
        goto err;
    }


    VAR_10->map = FUNC_5(0, VAR_10->size, VAR_5 | VAR_6, VAR_4,
                    VAR_9, VAR_13.offset);
    if (VAR_10->map == VAR_3) {
        FUNC_0(VAR_8, "Cannot map dumb buffer: %s\n", FUNC_6(VAR_7));
        goto err;
    }

    FUNC_4(VAR_10->map, 0, VAR_10->size);
    return 1;

err:
    FUNC_3(VAR_9, VAR_10);
    return 0;
}
