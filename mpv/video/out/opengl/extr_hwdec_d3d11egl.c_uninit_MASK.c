
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec {int devs; struct priv_owner* priv; } ;
struct priv_owner {scalar_t__ d3d11_device; int hwctx; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ra_hwdec *VAR_0)
{
    struct priv_owner *VAR_1 = VAR_0->priv;

    FUNC_1(VAR_0->devs, &VAR_1->hwctx);

    if (VAR_1->d3d11_device)
        FUNC_0(VAR_1->d3d11_device);
}
