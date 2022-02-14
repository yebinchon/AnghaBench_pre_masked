
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IDirect3DRMObject ;
typedef int IDirect3DRMMesh ;
typedef int IDirect3DRM ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void)
{
    HRESULT VAR_3;
    IDirect3DRM *VAR_4;
    IDirect3DRMMesh *VAR_5;
    IUnknown *VAR_6;

    VAR_3 = FUNC_0(&VAR_4);
    FUNC_7(VAR_3 == VAR_0, "Cannot get IDirect3DRM interface (hr = %x)\n", VAR_3);

    VAR_3 = FUNC_3(VAR_4, &VAR_5);
    FUNC_7(VAR_3 == VAR_0, "Cannot get IDirect3DRMMesh interface (hr = %x)\n", VAR_3);

    FUNC_8((IDirect3DRMObject *)VAR_5, "Mesh");
    FUNC_9((IDirect3DRMObject *)VAR_5);

    VAR_3 = FUNC_1(VAR_5, &VAR_1, (void **)&VAR_6);
    FUNC_7(FUNC_6(VAR_3), "Failed to get IDirect3DRMObject, %#x.\n", VAR_3);
    FUNC_5(VAR_6);

    VAR_3 = FUNC_1(VAR_5, &VAR_2, (void **)&VAR_6);
    FUNC_7(FUNC_6(VAR_3), "Failed to get IDirect3DRMVisual, %#x.\n", VAR_3);
    FUNC_5(VAR_6);

    FUNC_2(VAR_5);

    FUNC_4(VAR_4);
}
