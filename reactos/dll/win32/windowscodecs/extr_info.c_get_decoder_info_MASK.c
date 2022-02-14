
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFCLSID ;
typedef int IWICComponentInfo ;
typedef int IWICBitmapDecoderInfo ;
typedef int HRESULT ;


 int FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(REFCLSID VAR_1, IWICBitmapDecoderInfo **VAR_2)
{
    IWICComponentInfo *VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_0(VAR_1, &VAR_3);
    if (FUNC_1(VAR_4)) return VAR_4;

    VAR_4 = FUNC_2(VAR_3, &VAR_0,
        (void **)VAR_2);

    FUNC_3(VAR_3);

    return VAR_4;
}
