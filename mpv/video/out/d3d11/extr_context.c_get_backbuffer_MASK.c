
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_tex {int dummy; } ;
struct ra_ctx {int ra; struct priv* priv; } ;
struct priv {int swapchain; } ;
typedef int ID3D11Texture2D ;
typedef int ID3D11Resource ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,void**) ;
 int VAR_0 ;
 int FUNC_2 (struct ra_ctx*,char*) ;
 int FUNC_3 (int *) ;
 struct ra_tex* FUNC_4 (int ,int *) ;

__attribute__((used)) static struct ra_tex *FUNC_5(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    ID3D11Texture2D *VAR_3 = ((void*)0);
    struct ra_tex *VAR_4 = ((void*)0);
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_2->swapchain, 0, &VAR_0,
                                  (void**)&VAR_3);
    if (FUNC_0(VAR_5)) {
        FUNC_2(VAR_1, "Couldn't get swapchain image\n");
        goto done;
    }

    VAR_4 = FUNC_4(VAR_1->ra, (ID3D11Resource *)VAR_3);
done:
    FUNC_3(VAR_3);
    return VAR_4;
}
