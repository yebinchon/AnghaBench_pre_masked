
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {float w; float h; } ;
struct szexp_ctx {TYPE_4__ img; struct gl_video* p; } ;
struct TYPE_9__ {float x1; float x0; float y1; float y0; } ;
struct TYPE_8__ {float** m; } ;
struct TYPE_7__ {float x1; float x0; float y1; float y0; } ;
struct gl_video {int num_saved_imgs; TYPE_6__* saved_imgs; TYPE_3__ dst_rect; TYPE_2__ texture_offset; TYPE_1__ src_rect; } ;
struct bstr {int dummy; } ;
struct TYPE_11__ {float w; float h; } ;
struct TYPE_12__ {char* name; TYPE_5__ img; } ;


 scalar_t__ FUNC_0 (struct bstr,char*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, struct bstr VAR_1, float VAR_2[2])
{
    struct szexp_ctx *VAR_3 = VAR_0;
    struct gl_video *VAR_4 = VAR_3->p;

    if (FUNC_0(VAR_1, "NATIVE_CROPPED")) {
        VAR_2[0] = (VAR_4->src_rect.x1 - VAR_4->src_rect.x0) * VAR_4->texture_offset.m[0][0];
        VAR_2[1] = (VAR_4->src_rect.y1 - VAR_4->src_rect.y0) * VAR_4->texture_offset.m[1][1];
        return 1;
    }



    if (FUNC_0(VAR_1, "OUTPUT")) {
        VAR_2[0] = VAR_4->dst_rect.x1 - VAR_4->dst_rect.x0;
        VAR_2[1] = VAR_4->dst_rect.y1 - VAR_4->dst_rect.y0;
        return 1;
    }


    if (FUNC_0(VAR_1, "HOOKED")) {
        VAR_2[0] = VAR_3->img.w;
        VAR_2[1] = VAR_3->img.h;
        return 1;
    }

    for (int VAR_5 = 0; VAR_5 < VAR_4->num_saved_imgs; VAR_5++) {
        if (FUNC_0(VAR_1, VAR_4->saved_imgs[VAR_5].name)) {
            VAR_2[0] = VAR_4->saved_imgs[VAR_5].img.w;
            VAR_2[1] = VAR_4->saved_imgs[VAR_5].img.h;
            return 1;
        }
    }

    return 0;
}
