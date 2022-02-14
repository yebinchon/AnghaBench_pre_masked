
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_d3d11 {int ctx; } ;
struct TYPE_2__ {int host_mutable; } ;
struct ra_buf {TYPE_1__ params; struct d3d_buf* priv; } ;
struct ra {struct ra_d3d11* priv; } ;
struct d3d_buf {int dirty; int data; scalar_t__ buf; } ;
typedef int ID3D11Resource ;


 int FUNC_0 (int ,int *,int ,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ra *VAR_0, struct ra_buf *VAR_1)
{
    struct ra_d3d11 *VAR_2 = VAR_0->priv;
    struct d3d_buf *VAR_3 = VAR_1->priv;

    if (!VAR_1->params.host_mutable || !VAR_3->dirty)
        return;


    FUNC_0(VAR_2->ctx, (ID3D11Resource *)VAR_3->buf,
        0, ((void*)0), VAR_3->data, 0, 0);
    VAR_3->dirty = 0;
}
