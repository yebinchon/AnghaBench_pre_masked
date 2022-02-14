
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hw_subfmt; int imgfmt; } ;
struct ra_hwdec_mapper {TYPE_1__ dst_params; TYPE_1__ src_params; struct priv* priv; TYPE_2__* owner; } ;
struct priv_owner {int dev11; int dev9; } ;
struct priv {int ctx11; int dev9; int dev11; } ;
struct TYPE_4__ {struct priv_owner* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct ra_hwdec_mapper *VAR_1)
{
    struct priv_owner *VAR_2 = VAR_1->owner->priv;
    struct priv *VAR_3 = VAR_1->priv;

    FUNC_0(VAR_2->dev11);
    VAR_3->dev11 = VAR_2->dev11;
    FUNC_2(VAR_2->dev9);
    VAR_3->dev9 = VAR_2->dev9;
    FUNC_1(VAR_2->dev11, &VAR_3->ctx11);

    VAR_1->dst_params = VAR_1->src_params;
    VAR_1->dst_params.imgfmt = VAR_0;
    VAR_1->dst_params.hw_subfmt = 0;
    return 0;
}
