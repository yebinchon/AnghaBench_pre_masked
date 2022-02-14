
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {size_t num; struct handle_tex* array; } ;
struct nvenc_data {TYPE_11__ input_textures; TYPE_4__* device; } ;
struct handle_tex {scalar_t__ handle; scalar_t__ member_0; int * member_2; TYPE_3__* member_1; TYPE_3__* tex; int * km; } ;
struct TYPE_16__ {TYPE_1__* lpVtbl; } ;
struct TYPE_15__ {TYPE_2__* lpVtbl; } ;
struct TYPE_14__ {int (* SetEvictionPriority ) (TYPE_3__*,int ) ;int (* Release ) (TYPE_3__*) ;int (* QueryInterface ) (TYPE_3__*,int *,int **) ;} ;
struct TYPE_13__ {int (* OpenSharedResource ) (TYPE_4__*,int ,int *,TYPE_3__**) ;} ;
typedef int IDXGIKeyedMutex ;
typedef TYPE_3__ ID3D11Texture2D ;
typedef TYPE_4__ ID3D11Device ;
typedef int HRESULT ;
typedef int HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_11__,struct handle_tex*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*,int ,int *,TYPE_3__**) ;
 int FUNC_4 (TYPE_3__*,int *,int **) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static ID3D11Texture2D *FUNC_7(struct nvenc_data *VAR_3,
         uint32_t VAR_4,
         IDXGIKeyedMutex **VAR_5)
{
 ID3D11Device *VAR_6 = VAR_3->device;
 IDXGIKeyedMutex *VAR_7;
 ID3D11Texture2D *VAR_8;
 HRESULT VAR_9;

 for (size_t VAR_10 = 0; VAR_10 < VAR_3->input_textures.num; VAR_10++) {
  struct handle_tex *VAR_11 = &VAR_3->input_textures.array[VAR_10];
  if (VAR_11->handle == VAR_4) {
   *VAR_5 = VAR_11->km;
   return VAR_11->tex;
  }
 }

 VAR_9 = VAR_6->lpVtbl->OpenSharedResource(VAR_6,
      (HANDLE)(uintptr_t)VAR_4,
      &VAR_1,
      &VAR_8);
 if (FUNC_0(VAR_9)) {
  FUNC_2("OpenSharedResource failed");
  return ((void*)0);
 }

 VAR_9 = VAR_8->lpVtbl->QueryInterface(VAR_8, &VAR_2,
            &VAR_7);
 if (FUNC_0(VAR_9)) {
  FUNC_2("QueryInterface(IDXGIKeyedMutex) failed");
  VAR_8->lpVtbl->Release(VAR_8);
  return ((void*)0);
 }

 VAR_8->lpVtbl->SetEvictionPriority(VAR_8,
            VAR_0);

 *VAR_5 = VAR_7;

 struct handle_tex VAR_12 = {VAR_4, VAR_8, VAR_7};
 FUNC_1(VAR_3->input_textures, &VAR_12);
 return VAR_8;
}
