
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWICImagingFactory ;
typedef int IWICBitmapDecoder ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    IWICBitmapDecoder *VAR_7;
    IWICImagingFactory *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
        &VAR_5, (void **)&VAR_8);
    FUNC_4(VAR_9 == VAR_6, "CoCreateInstance error %#x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_8, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_9 == VAR_2, "expected E_INVALIDARG, got %#x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_8, ((void*)0), ((void*)0), &VAR_7);
    FUNC_4(VAR_9 == VAR_2, "expected E_INVALIDARG, got %#x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_8, &VAR_3, ((void*)0), &VAR_7);
    FUNC_4(VAR_9 == VAR_6, "CreateDecoder error %#x\n", VAR_9);
    FUNC_1(VAR_7);

    VAR_9 = FUNC_2(VAR_8, &VAR_3, &VAR_4, &VAR_7);
    FUNC_4(VAR_9 == VAR_6, "CreateDecoder error %#x\n", VAR_9);
    FUNC_1(VAR_7);

    FUNC_3(VAR_8);
}
