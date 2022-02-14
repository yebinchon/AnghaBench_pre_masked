
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* vo; int ra; struct priv* priv; } ;
struct priv {int backbuffer; int swapchain; } ;
struct TYPE_2__ {int dheight; int dwidth; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct ra_ctx*,char*,int ) ;
 int FUNC_3 (struct ra_ctx*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static bool FUNC_6(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    HRESULT VAR_3;

    FUNC_5(VAR_1->ra, &VAR_2->backbuffer);

    VAR_3 = FUNC_1(VAR_2->swapchain, 0, VAR_1->vo->dwidth,
        VAR_1->vo->dheight, VAR_0, 0);
    if (FUNC_0(VAR_3)) {
        FUNC_2(VAR_1, "Couldn't resize swapchain: %s\n", FUNC_4(VAR_3));
        return 0;
    }

    VAR_2->backbuffer = FUNC_3(VAR_1);

    return 1;
}
