
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct nvenc_data {int session; int cy; int cx; TYPE_6__* device; } ;
struct nv_texture {TYPE_5__* tex; int res; } ;
struct TYPE_16__ {int Count; } ;
struct TYPE_22__ {int MipLevels; int ArraySize; int BindFlags; TYPE_1__ SampleDesc; int Format; int Height; int Width; int member_0; } ;
struct TYPE_21__ {TYPE_2__* lpVtbl; } ;
struct TYPE_20__ {TYPE_3__* lpVtbl; } ;
struct TYPE_19__ {int registeredResource; int bufferFormat; int height; int width; TYPE_5__* resourceToRegister; int resourceType; int member_0; } ;
struct TYPE_18__ {int (* Release ) (TYPE_5__*) ;int (* SetEvictionPriority ) (TYPE_5__*,int ) ;} ;
struct TYPE_17__ {int (* CreateTexture2D ) (TYPE_6__*,TYPE_7__*,int *,TYPE_5__**) ;} ;
struct TYPE_15__ {int (* nvEncRegisterResource ) (int ,TYPE_4__*) ;} ;
typedef TYPE_4__ NV_ENC_REGISTER_RESOURCE ;
typedef TYPE_5__ ID3D11Texture2D ;
typedef TYPE_6__ ID3D11Device ;
typedef int HRESULT ;
typedef TYPE_7__ D3D11_TEXTURE2D_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_14__ VAR_6 ;
 int FUNC_3 (TYPE_6__*,TYPE_7__*,int *,TYPE_5__**) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static bool FUNC_7(struct nvenc_data *VAR_7, struct nv_texture *VAR_8)
{
 ID3D11Device *VAR_9 = VAR_7->device;
 ID3D11Texture2D *VAR_10;
 HRESULT VAR_11;

 D3D11_TEXTURE2D_DESC VAR_12 = {0};
 VAR_12.Width = VAR_7->cx;
 VAR_12.Height = VAR_7->cy;
 VAR_12.MipLevels = 1;
 VAR_12.ArraySize = 1;
 VAR_12.Format = VAR_1;
 VAR_12.SampleDesc.Count = 1;
 VAR_12.BindFlags = VAR_0;

 VAR_11 = VAR_9->lpVtbl->CreateTexture2D(VAR_9, &VAR_12, ((void*)0), &VAR_10);
 if (FUNC_0(VAR_11)) {
  FUNC_2("Failed to create texture");
  return 0;
 }

 VAR_10->lpVtbl->SetEvictionPriority(VAR_10, VAR_2);

 NV_ENC_REGISTER_RESOURCE VAR_13 = {VAR_5};
 VAR_13.resourceType = VAR_4;
 VAR_13.resourceToRegister = VAR_10;
 VAR_13.width = VAR_7->cx;
 VAR_13.height = VAR_7->cy;
 VAR_13.bufferFormat = VAR_3;

 if (FUNC_1(VAR_6.nvEncRegisterResource(VAR_7->session, &VAR_13))) {
  VAR_10->lpVtbl->Release(VAR_10);
  return 0;
 }

 VAR_8->res = VAR_13.registeredResource;
 VAR_8->tex = VAR_10;
 return 1;
}
