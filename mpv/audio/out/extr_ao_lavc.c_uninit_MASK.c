
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {double expected_next_pts; TYPE_2__* enc; int shutdown; } ;
struct encode_lavc_context {int lock; scalar_t__ discontinuity_pts_offset; } ;
struct ao {struct encode_lavc_context* encode_lavc_ctx; struct priv* priv; } ;
struct TYPE_4__ {TYPE_1__* options; } ;
struct TYPE_3__ {int rawts; } ;


 int FUNC_0 (struct ao*,double,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    struct encode_lavc_context *VAR_2 = VAR_0->encode_lavc_ctx;

    if (!VAR_1->shutdown) {
        double VAR_3 = VAR_1->expected_next_pts;

        FUNC_2(&VAR_2->lock);
        if (!VAR_1->enc->options->rawts)
            VAR_3 += VAR_2->discontinuity_pts_offset;
        FUNC_3(&VAR_2->lock);

        VAR_3 += FUNC_1(VAR_1->enc);
        FUNC_0(VAR_0, VAR_3, ((void*)0));
    }
}
