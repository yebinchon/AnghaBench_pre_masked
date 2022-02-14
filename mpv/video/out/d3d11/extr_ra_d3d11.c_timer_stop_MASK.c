
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ra_d3d11 {int ctx; } ;
struct ra {struct ra_d3d11* priv; } ;
struct d3d_timer {int result; scalar_t__ disjoint; scalar_t__ ts_end; } ;
typedef struct d3d_timer ra_timer ;
typedef int ID3D11Asynchronous ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static uint64_t FUNC_1(struct ra *VAR_0, ra_timer *VAR_1)
{
    struct ra_d3d11 *VAR_2 = VAR_0->priv;
    struct d3d_timer *VAR_3 = VAR_1;

    FUNC_0(VAR_2->ctx, (ID3D11Asynchronous *)VAR_3->ts_end);
    FUNC_0(VAR_2->ctx, (ID3D11Asynchronous *)VAR_3->disjoint);

    return VAR_3->result;
}
