
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {int dheight; int dwidth; struct priv* priv; } ;
struct priv {TYPE_2__* opts; TYPE_1__* frame; int sheight; int swidth; } ;
struct TYPE_4__ {scalar_t__ algo; int term256; } ;
struct TYPE_3__ {int * stride; int * planes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    if (VAR_3->opts->algo == VAR_0) {
        FUNC_2(
            VAR_2->dwidth, VAR_2->dheight, VAR_3->swidth, VAR_3->sheight,
            VAR_3->frame->planes[0], VAR_3->frame->stride[0],
            VAR_3->opts->term256);
    } else {
        FUNC_1(
            VAR_2->dwidth, VAR_2->dheight, VAR_3->swidth, VAR_3->sheight,
            VAR_3->frame->planes[0], VAR_3->frame->stride[0],
            VAR_3->opts->term256);
    }
    FUNC_0(VAR_1);
}
