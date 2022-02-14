
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct vdpctx* priv; } ;
struct vdpctx {int force_yuv; } ;


 scalar_t__ FUNC_0 (int,int *,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(struct vo *VAR_0, int VAR_1)
{
    struct vdpctx *VAR_2 = VAR_0->priv;

    if (FUNC_0(VAR_1, ((void*)0), ((void*)0)))
        return 1;
    if (!VAR_2->force_yuv && FUNC_1(VAR_1, ((void*)0)))
        return 1;
    return 0;
}
