
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_d3d11 {size_t vbuf_size; size_t vbuf_used; int * vbuf; int ctx; int dev; } ;
struct ra {struct ra_d3d11* priv; } ;
struct TYPE_6__ {size_t ByteWidth; int CPUAccessFlags; int BindFlags; int Usage; } ;
struct TYPE_5__ {char* pData; int member_0; } ;
typedef int ID3D11Resource ;
typedef int ID3D11Buffer ;
typedef int HRESULT ;
typedef TYPE_1__ D3D11_MAPPED_SUBRESOURCE ;
typedef TYPE_2__ D3D11_BUFFER_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,TYPE_2__*,int *,int **) ;
 int FUNC_4 (struct ra*,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,void*,size_t) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static size_t FUNC_8(struct ra *VAR_5, void *VAR_6, size_t VAR_7)
{
    struct ra_d3d11 *VAR_8 = VAR_5->priv;
    HRESULT VAR_9;


    if (VAR_7 > 1e9) {
        FUNC_4(VAR_5, "Vertex buffer is too large\n");
        return -1;
    }


    if (VAR_7 > VAR_8->vbuf_size) {
        size_t VAR_10 = VAR_8->vbuf_size;

        if (!VAR_10)
            VAR_10 = 64 * 1024;
        while (VAR_10 < VAR_7)
            VAR_10 *= 2;

        ID3D11Buffer *VAR_11;
        D3D11_BUFFER_DESC VAR_12 = {
            .ByteWidth = VAR_10,
            .Usage = VAR_4,
            .BindFlags = VAR_0,
            .CPUAccessFlags = VAR_1,
        };
        VAR_9 = FUNC_3(VAR_8->dev, &VAR_12, ((void*)0), &VAR_11);
        if (FUNC_0(VAR_9)) {
            FUNC_4(VAR_5, "Failed to create vertex buffer: %s\n",
                   FUNC_7(VAR_9));
            return -1;
        }

        FUNC_5(VAR_8->vbuf);
        VAR_8->vbuf = VAR_11;
        VAR_8->vbuf_size = VAR_10;
        VAR_8->vbuf_used = 0;
    }

    bool VAR_13 = 0;
    size_t VAR_14 = VAR_8->vbuf_used;
    if (VAR_14 + VAR_7 > VAR_8->vbuf_size) {

        VAR_13 = 1;
        VAR_14 = 0;
    }

    D3D11_MAPPED_SUBRESOURCE VAR_15 = { 0 };
    VAR_9 = FUNC_1(VAR_8->ctx, (ID3D11Resource *)VAR_8->vbuf, 0,
        VAR_13 ? VAR_2 : VAR_3,
        0, &VAR_15);
    if (FUNC_0(VAR_9)) {
        FUNC_4(VAR_5, "Failed to map vertex buffer: %s\n", FUNC_7(VAR_9));
        return -1;
    }

    char *VAR_16 = VAR_15.pData;
    FUNC_6(VAR_16 + VAR_14, VAR_6, VAR_7);

    FUNC_2(VAR_8->ctx, (ID3D11Resource *)VAR_8->vbuf, 0);

    VAR_8->vbuf_used = VAR_14 + VAR_7;
    return VAR_14;
}
