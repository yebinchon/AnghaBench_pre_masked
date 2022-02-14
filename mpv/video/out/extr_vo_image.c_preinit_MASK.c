
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int global; struct priv* priv; } ;
struct priv {TYPE_1__* opts; } ;
struct TYPE_2__ {scalar_t__ outdir; } ;


 int FUNC_0 (struct vo*,scalar_t__) ;
 TYPE_1__* FUNC_1 (struct vo*,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    VAR_2->opts = FUNC_1(VAR_1, VAR_1->global, &VAR_0);
    if (VAR_2->opts->outdir && !FUNC_0(VAR_1, VAR_2->opts->outdir))
        return -1;
    return 0;
}
