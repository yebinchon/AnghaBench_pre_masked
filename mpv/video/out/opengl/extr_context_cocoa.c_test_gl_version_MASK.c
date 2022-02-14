
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int ctx; int pix; TYPE_1__* opts; } ;
struct TYPE_2__ {scalar_t__ cocoa_force_dedicated_gpu; } ;
typedef int GLint ;
typedef scalar_t__ CGLPixelFormatAttribute ;
typedef int CGLOpenGLProfile ;
typedef scalar_t__ CGLError ;


 scalar_t__ FUNC_0 (scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ,char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static CGLError FUNC_5(struct ra_ctx *VAR_6, CGLOpenGLProfile VAR_7)
{
    struct priv *VAR_8 = VAR_6->priv;

    CGLPixelFormatAttribute VAR_9[] = {


        VAR_4,
        (CGLPixelFormatAttribute) VAR_7,
        VAR_2,
        VAR_3,

        VAR_5,
        0
    };

    GLint VAR_10;
    CGLError VAR_11;
    int VAR_12 = FUNC_3(VAR_9)-1;

    if (VAR_8->opts->cocoa_force_dedicated_gpu)
        VAR_9[--VAR_12] = 0;

    VAR_11 = FUNC_0(VAR_9, &VAR_8->pix, &VAR_10);
    while (VAR_11 == VAR_0 && VAR_12 > 3) {




        VAR_9[--VAR_12] = 0;
        VAR_11 = FUNC_0(VAR_9, &VAR_8->pix, &VAR_10);
    }

    if (VAR_11 != VAR_1) {
        FUNC_4(VAR_6->vo, "error creating CGL pixel format: %s (%d)\n",
               FUNC_2(VAR_11), VAR_11);
        goto error_out;
    }

    VAR_11 = FUNC_1(VAR_8->pix, 0, &VAR_8->ctx);

error_out:
    return VAR_11;
}
