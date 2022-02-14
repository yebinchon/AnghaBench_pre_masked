
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_d3d11 {int ctx; } ;
struct ra {struct ra_d3d11* priv; } ;
struct d3d_timer {scalar_t__ ts_start; scalar_t__ disjoint; int result; } ;
typedef struct d3d_timer ra_timer ;
typedef int ID3D11Asynchronous ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ra*,struct d3d_timer*) ;

__attribute__((used)) static void FUNC_3(struct ra *VAR_0, ra_timer *VAR_1)
{
    struct ra_d3d11 *VAR_2 = VAR_0->priv;
    struct d3d_timer *VAR_3 = VAR_1;


    VAR_3->result = FUNC_2(VAR_0, VAR_1);

    FUNC_0(VAR_2->ctx, (ID3D11Asynchronous *)VAR_3->disjoint);
    FUNC_1(VAR_2->ctx, (ID3D11Asynchronous *)VAR_3->ts_start);
}
