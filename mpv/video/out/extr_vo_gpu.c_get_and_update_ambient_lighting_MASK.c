
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpu_priv {int renderer; int events; TYPE_2__* ctx; } ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* control ) (TYPE_2__*,int *,int ,int*) ;} ;


 int FUNC_0 (struct gpu_priv*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct gpu_priv *VAR_2)
{
    int VAR_3;
    int VAR_4 = VAR_2->ctx->fns->control(VAR_2->ctx, &VAR_2->events, VAR_0, &VAR_3);
    if (VAR_4 == VAR_1) {
        FUNC_2(VAR_2->renderer, VAR_3);
    }
    if (VAR_4 != VAR_1 && FUNC_1(VAR_2->renderer)) {
        FUNC_0(VAR_2, "gamma_auto option provided, but querying for ambient"
                  " lighting is not supported on this platform\n");
    }
}
