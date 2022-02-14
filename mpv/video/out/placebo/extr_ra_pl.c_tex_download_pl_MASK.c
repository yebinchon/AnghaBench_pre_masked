
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_tex_download_params {int stride; int dst; TYPE_1__* tex; } ;
struct ra {int dummy; } ;
struct pl_tex_transfer_params {int stride_w; int ptr; struct pl_tex const* tex; } ;
struct pl_tex {int dummy; } ;
struct TYPE_2__ {struct pl_tex* priv; } ;


 int FUNC_0 (struct ra*) ;
 int FUNC_1 (int ,struct pl_tex_transfer_params*) ;
 int FUNC_2 (int ,struct pl_tex const*) ;

__attribute__((used)) static bool FUNC_3(struct ra *VAR_0, struct ra_tex_download_params *VAR_1)
{
    const struct pl_tex *VAR_2 = VAR_1->tex->priv;
    struct pl_tex_transfer_params VAR_3 = {
        .tex = VAR_2,
        .ptr = VAR_1->dst,
        .stride_w = FUNC_2(VAR_1->stride, VAR_2),
    };

    return FUNC_1(FUNC_0(VAR_0), &VAR_3);
}
