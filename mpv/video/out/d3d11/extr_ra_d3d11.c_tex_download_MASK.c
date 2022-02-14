
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_tex_download_params {char* dst; int stride; struct ra_tex* tex; } ;
struct TYPE_4__ {int h; } ;
struct ra_tex {TYPE_1__ params; struct d3d_tex* priv; } ;
struct ra_d3d11 {int ctx; } ;
struct ra {struct ra_d3d11* priv; } ;
struct d3d_tex {scalar_t__ staging; int res; } ;
struct TYPE_5__ {char* pData; int RowPitch; } ;
typedef int ID3D11Resource ;
typedef int HRESULT ;
typedef TYPE_2__ D3D11_MAPPED_SUBRESOURCE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct ra*,char*,int ) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct ra *VAR_1, struct ra_tex_download_params *VAR_2)
{
    struct ra_d3d11 *VAR_3 = VAR_1->priv;
    struct ra_tex *VAR_4 = VAR_2->tex;
    struct d3d_tex *VAR_5 = VAR_4->priv;
    HRESULT VAR_6;

    if (!VAR_5->staging)
        return 0;

    FUNC_1(VAR_3->ctx, (ID3D11Resource*)VAR_5->staging,
        VAR_5->res);

    D3D11_MAPPED_SUBRESOURCE VAR_7;
    VAR_6 = FUNC_2(VAR_3->ctx, (ID3D11Resource*)VAR_5->staging, 0,
                                 VAR_0, 0, &VAR_7);
    if (FUNC_0(VAR_6)) {
        FUNC_5(VAR_1, "Failed to map staging texture: %s\n", FUNC_7(VAR_6));
        return 0;
    }

    char *VAR_8 = VAR_2->dst;
    char *VAR_9 = VAR_7.pData;
    for (int VAR_10 = 0; VAR_10 < VAR_4->params.h; VAR_10++) {
        FUNC_6(VAR_8 + VAR_10 * VAR_2->stride, VAR_9 + VAR_10 * VAR_7.RowPitch,
               FUNC_4(VAR_2->stride, VAR_7.RowPitch));
    }

    FUNC_3(VAR_3->ctx, (ID3D11Resource*)VAR_5->staging, 0);

    return 1;
}
