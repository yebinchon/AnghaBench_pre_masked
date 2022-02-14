
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_renderpass_run_params {int * compute_groups; struct ra_renderpass* pass; } ;
struct ra_renderpass {struct d3d_rpass* priv; } ;
struct ra_d3d11 {int ctx; } ;
struct ra {struct ra_d3d11* priv; } ;
struct d3d_rpass {int cs; } ;
typedef int ID3D11UnorderedAccessView ;
typedef int ID3D11ShaderResourceView ;
typedef int ID3D11SamplerState ;
typedef int ID3D11Buffer ;


 int FUNC_0 (int ,int ,int,int **) ;
 int FUNC_1 (int ,int ,int,int **) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ,int,int **) ;
 int FUNC_4 (int ,int ,int,int **,int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ra *VAR_0,
                                   const struct ra_renderpass_run_params *VAR_1,
                                   ID3D11Buffer *VAR_2[], int VAR_3,
                                   ID3D11SamplerState *VAR_4[],
                                   ID3D11ShaderResourceView *VAR_5[],
                                   int VAR_6,
                                   ID3D11UnorderedAccessView *VAR_7[],
                                   int VAR_8)
{
    struct ra_d3d11 *VAR_9 = VAR_0->priv;
    struct ra_renderpass *VAR_10 = VAR_1->pass;
    struct d3d_rpass *VAR_11 = VAR_10->priv;

    FUNC_2(VAR_9->ctx, VAR_11->cs, ((void*)0), 0);
    FUNC_0(VAR_9->ctx, 0, VAR_3, VAR_2);
    FUNC_3(VAR_9->ctx, 0, VAR_6, VAR_5);
    FUNC_1(VAR_9->ctx, 0, VAR_6, VAR_4);
    FUNC_4(VAR_9->ctx, 0, VAR_8, VAR_7,
                                                  ((void*)0));

    FUNC_5(VAR_9->ctx, VAR_1->compute_groups[0],
                                         VAR_1->compute_groups[1],
                                         VAR_1->compute_groups[2]);

    for (int VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
        VAR_2[VAR_12] = ((void*)0);
    for (int VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
        VAR_4[VAR_13] = ((void*)0);
        VAR_5[VAR_13] = ((void*)0);
    }
    for (int VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
        VAR_7[VAR_14] = ((void*)0);
    FUNC_0(VAR_9->ctx, 0, VAR_3, VAR_2);
    FUNC_3(VAR_9->ctx, 0, VAR_6, VAR_5);
    FUNC_1(VAR_9->ctx, 0, VAR_6, VAR_4);
    FUNC_4(VAR_9->ctx, 0, VAR_8, VAR_7,
                                                  ((void*)0));
}
