
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWICImagingFactory ;
typedef int IWICComponentInfo ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int const*,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_5(const GUID *VAR_4, IWICComponentInfo **VAR_5)
{
    IWICImagingFactory *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
        &VAR_2, (void**)&VAR_6);
    FUNC_4(VAR_7 == VAR_3, "CoCreateInstance failed, hr=%x\n", VAR_7);
    if (FUNC_1(VAR_7)) return VAR_7;

    VAR_7 = FUNC_2(VAR_6, VAR_4, VAR_5);

    FUNC_3(VAR_6);

    return VAR_7;
}
