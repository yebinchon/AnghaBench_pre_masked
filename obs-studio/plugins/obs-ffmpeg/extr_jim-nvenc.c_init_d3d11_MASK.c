
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct nvenc_data {int * context; int * device; } ;
typedef int obs_data_t ;
struct TYPE_14__ {TYPE_1__* lpVtbl; } ;
struct TYPE_13__ {TYPE_2__* lpVtbl; } ;
struct TYPE_12__ {int (* Release ) (TYPE_3__*) ;} ;
struct TYPE_11__ {int (* Release ) (TYPE_4__*) ;int (* EnumAdapters ) (TYPE_4__*,int ,TYPE_3__**) ;} ;
typedef int (* PFN_D3D11_CREATE_DEVICE ) (TYPE_3__*,int ,int *,int ,int *,int ,int ,int **,int *,int **) ;
typedef TYPE_4__ IDXGIFactory1 ;
typedef TYPE_3__ IDXGIAdapter ;
typedef int ID3D11DeviceContext ;
typedef int ID3D11Device ;
typedef int HRESULT ;
typedef int HMODULE ;
typedef int (* CREATEDXGIFACTORY1PROC ) (int *,TYPE_4__**) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct nvenc_data*,char*) ;
 int FUNC_5 (TYPE_4__*,int ,TYPE_3__**) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static bool FUNC_8(struct nvenc_data *VAR_3, obs_data_t *VAR_4)
{
 HMODULE VAR_5 = FUNC_4(VAR_3, "DXGI.dll");
 HMODULE VAR_6 = FUNC_4(VAR_3, "D3D11.dll");
 CREATEDXGIFACTORY1PROC VAR_7;
 PFN_D3D11_CREATE_DEVICE VAR_8;
 IDXGIFactory1 *VAR_9;
 IDXGIAdapter *VAR_10;
 ID3D11Device *VAR_11;
 ID3D11DeviceContext *VAR_12;
 HRESULT VAR_13;

 if (!VAR_5 || !VAR_6) {
  return 0;
 }

 VAR_7 = (CREATEDXGIFACTORY1PROC)FUNC_1(
  VAR_5, "CreateDXGIFactory1");
 VAR_8 = (PFN_D3D11_CREATE_DEVICE)FUNC_1(
  VAR_6, "D3D11CreateDevice");

 if (!VAR_7 || !VAR_8) {
  FUNC_2("Failed to load D3D11/DXGI procedures");
  return 0;
 }

 VAR_13 = VAR_7(&VAR_2, &VAR_9);
 if (FUNC_0(VAR_13)) {
  FUNC_3("CreateDXGIFactory1 failed");
  return 0;
 }

 VAR_13 = VAR_9->lpVtbl->EnumAdapters(VAR_9, 0, &VAR_10);
 VAR_9->lpVtbl->Release(VAR_9);
 if (FUNC_0(VAR_13)) {
  FUNC_3("EnumAdapters failed");
  return 0;
 }

 VAR_13 = VAR_8(VAR_10, VAR_1, ((void*)0), 0, ((void*)0), 0,
      VAR_0, &VAR_11, ((void*)0), &VAR_12);
 VAR_10->lpVtbl->Release(VAR_10);
 if (FUNC_0(VAR_13)) {
  FUNC_3("D3D11CreateDevice failed");
  return 0;
 }

 VAR_3->device = VAR_11;
 VAR_3->context = VAR_12;
 return 1;
}
