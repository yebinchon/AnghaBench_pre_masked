
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int handle; int d3d11_tex; int d3d11_device; int cy; int cx; } ;
struct TYPE_5__ {int Count; } ;
struct TYPE_6__ {int MipLevels; int ArraySize; int BindFlags; int MiscFlags; int Usage; TYPE_1__ SampleDesc; int Format; int Height; int Width; int member_0; } ;
typedef int IDXGIResource ;
typedef int HRESULT ;
typedef TYPE_2__ D3D11_TEXTURE2D_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_2 (int ,int *,void**) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__ VAR_6 ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static inline bool FUNC_6(void)
{
 IDXGIResource *VAR_7;
 HRESULT VAR_8;

 D3D11_TEXTURE2D_DESC VAR_9 = {0};
 VAR_9.Width = VAR_6.cx;
 VAR_9.Height = VAR_6.cy;
 VAR_9.MipLevels = 1;
 VAR_9.ArraySize = 1;
 VAR_9.Format = VAR_4;
 VAR_9.SampleDesc.Count = 1;
 VAR_9.Usage = VAR_3;
 VAR_9.MiscFlags = VAR_2;
 VAR_9.BindFlags = VAR_0 | VAR_1;

 VAR_8 = FUNC_1(VAR_6.d3d11_device, &VAR_9, ((void*)0),
       &VAR_6.d3d11_tex);
 if (FUNC_0(VAR_8)) {
  FUNC_5("gl_shtex_init_d3d11_tex: failed to create texture",
   VAR_8);
  return 0;
 }

 VAR_8 = FUNC_2(VAR_6.d3d11_tex, &VAR_5,
      (void **)&VAR_7);
 if (FUNC_0(VAR_8)) {
  FUNC_5("gl_shtex_init_d3d11_tex: failed to get IDXGIResource",
   VAR_8);
  return 0;
 }

 VAR_8 = FUNC_3(VAR_7, &VAR_6.handle);
 FUNC_4(VAR_7);

 if (FUNC_0(VAR_8)) {
  FUNC_5("gl_shtex_init_d3d11_tex: failed to get shared handle",
   VAR_8);
  return 0;
 }

 return 1;
}
