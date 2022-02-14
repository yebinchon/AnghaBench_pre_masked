
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_tex_params {int dimensions; int d; int render_src; int src_linear; int non_normalized; struct ra_format const* format; int h; int w; } ;
struct ra_hwdec_mapper {int * tex; int ra; TYPE_1__* src; struct priv* priv; } ;
struct ra_format {int dummy; } ;
struct TYPE_6__ {int const num_planes; struct ra_format** planes; } ;
struct priv {int * gl_planes; TYPE_2__ desc; scalar_t__ pbuf; } ;
struct TYPE_7__ {int (* GetError ) () ;int (* BindTexture ) (int ,int ) ;} ;
struct TYPE_5__ {scalar_t__* planes; } ;
typedef int IOSurfaceRef ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_3__ GL ;
typedef scalar_t__ CVPixelBufferRef ;
typedef scalar_t__ CGLError ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct ra_hwdec_mapper*,char*,...) ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_12 (int ,struct ra_tex_params*,int ) ;
 TYPE_3__* FUNC_13 (int ) ;
 int FUNC_14 (struct ra_format const*,int *,int *,int *) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(struct ra_hwdec_mapper *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    GL *VAR_4 = FUNC_13(VAR_2->ra);

    FUNC_6(VAR_3->pbuf);
    VAR_3->pbuf = (CVPixelBufferRef)VAR_2->src->planes[3];
    FUNC_7(VAR_3->pbuf);
    IOSurfaceRef VAR_5 = FUNC_3(VAR_3->pbuf);
    if (!VAR_5) {
        FUNC_10(VAR_2, "CVPixelBuffer has no IOSurface\n");
        return -1;
    }

    const bool VAR_6 = FUNC_5(VAR_3->pbuf);
    const int VAR_7 = FUNC_4(VAR_3->pbuf);
    FUNC_11((VAR_6 && VAR_7 == VAR_3->desc.num_planes) || VAR_3->desc.num_planes == 1);

    GLenum VAR_8 = VAR_0;

    for (int VAR_9 = 0; VAR_9 < VAR_3->desc.num_planes; VAR_9++) {
        const struct ra_format *VAR_10 = VAR_3->desc.planes[VAR_9];

        GLint VAR_11;
        GLenum VAR_12;
        GLenum VAR_13;
        FUNC_14(VAR_10, &VAR_11, &VAR_12, &VAR_13);

        VAR_4->BindTexture(VAR_8, VAR_3->gl_planes[VAR_9]);

        CGLError VAR_14 = FUNC_2(
            FUNC_1(), VAR_8,
            VAR_11,
            FUNC_9(VAR_5, VAR_9),
            FUNC_8(VAR_5, VAR_9),
            VAR_12, VAR_13, VAR_5, VAR_9);

        VAR_4->BindTexture(VAR_8, 0);

        if (VAR_14 != VAR_1) {
            FUNC_10(VAR_2,
                   "error creating IOSurface texture for plane %d: %s (%x)\n",
                   VAR_9, FUNC_0(VAR_14), VAR_4->GetError());
            return -1;
        }

        struct ra_tex_params VAR_15 = {
            .dimensions = 2,
            .w = FUNC_9(VAR_5, VAR_9),
            .h = FUNC_8(VAR_5, VAR_9),
            .d = 1,
            .format = VAR_10,
            .render_src = 1,
            .src_linear = 1,
            .non_normalized = VAR_8 == VAR_0,
        };

        VAR_2->tex[VAR_9] = FUNC_12(VAR_2->ra, &VAR_15,
                                               VAR_3->gl_planes[VAR_9]);
        if (!VAR_2->tex[VAR_9])
            return -1;
    }

    return 0;
}
