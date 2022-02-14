
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpu_priv {int renderer; int events; TYPE_2__* ctx; } ;
typedef int bstr ;
struct TYPE_4__ {TYPE_1__* fns; } ;
struct TYPE_3__ {int (* control ) (TYPE_2__*,int *,int ,int *) ;} ;


 int FUNC_0 (struct gpu_priv*,char*) ;
 int FUNC_1 (struct gpu_priv*,char*) ;
 int FUNC_2 (struct gpu_priv*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int *) ;

__attribute__((used)) static void FUNC_7(struct gpu_priv *VAR_4)
{
    if (FUNC_4(VAR_4->renderer)) {
        FUNC_1(VAR_4, "Querying ICC profile...\n");
        bstr VAR_5 = FUNC_3(((void*)0));
        int VAR_6 = VAR_4->ctx->fns->control(VAR_4->ctx, &VAR_4->events, VAR_0, &VAR_5);

        if (VAR_6 != VAR_2) {
            if (VAR_6 == VAR_1) {
                FUNC_2(VAR_4, "Could not retrieve an ICC profile.\n");
            } else if (VAR_6 == VAR_3) {
                FUNC_0(VAR_4, "icc-profile-auto not implemented on this platform.\n");
            }

            FUNC_5(VAR_4->renderer, VAR_5);
        }
    }
}
