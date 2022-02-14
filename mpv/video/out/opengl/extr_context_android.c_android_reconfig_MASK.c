
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {int swapchain; TYPE_1__* vo; } ;
struct TYPE_2__ {int dwidth; int dheight; } ;


 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (TYPE_1__*,int*,int*) ;

__attribute__((used)) static bool FUNC_2(struct ra_ctx *VAR_0)
{
    int VAR_1, VAR_2;
    if (!FUNC_1(VAR_0->vo, &VAR_1, &VAR_2))
        return 0;

    VAR_0->vo->dwidth = VAR_1;
    VAR_0->vo->dheight = VAR_2;
    FUNC_0(VAR_0->swapchain, VAR_1, VAR_2, 0);
    return 1;
}
