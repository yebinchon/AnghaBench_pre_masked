
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ imgfmt; scalar_t__ hw_subfmt; } ;
struct ra_hwdec_mapper {TYPE_1__ dst_params; int ra; TYPE_1__ src_params; struct priv* priv; } ;
struct TYPE_9__ {int num_planes; TYPE_2__** planes; } ;
struct priv {TYPE_5__ desc; int gl_planes; } ;
struct TYPE_8__ {int (* GenTextures ) (int ,int ) ;} ;
struct TYPE_7__ {scalar_t__ ctype; } ;
typedef TYPE_3__ GL ;


 int FUNC_0 (struct ra_hwdec_mapper*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__,TYPE_5__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ra_hwdec_mapper *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    GL *VAR_4 = FUNC_2(VAR_2->ra);

    VAR_4->GenTextures(VAR_0, VAR_3->gl_planes);

    VAR_2->dst_params = VAR_2->src_params;
    VAR_2->dst_params.imgfmt = VAR_2->src_params.hw_subfmt;
    VAR_2->dst_params.hw_subfmt = 0;

    if (!VAR_2->dst_params.imgfmt) {
        FUNC_0(VAR_2, "Unsupported CVPixelBuffer format.\n");
        return -1;
    }

    if (!FUNC_1(VAR_2->ra, VAR_2->dst_params.imgfmt, &VAR_3->desc)) {
        FUNC_0(VAR_2, "Unsupported texture format.\n");
        return -1;
    }

    for (int VAR_5 = 0; VAR_5 < VAR_3->desc.num_planes; VAR_5++) {
        if (VAR_3->desc.planes[VAR_5]->ctype != VAR_1) {
            FUNC_0(VAR_2, "Format unsupported.\n");
            return -1;
        }
    }
    return 0;
}
