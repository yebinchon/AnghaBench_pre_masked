
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IUri ;
typedef int HRESULT ;


 int FUNC_0 (int *,int const*,int,int **,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(IUri *VAR_3, const WCHAR *VAR_4, IUri **VAR_5)
{
    IUri *VAR_6;
    HRESULT VAR_7;

    VAR_6 = FUNC_4(VAR_3);
    if(!VAR_6)
        return VAR_0;

    VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_2|VAR_1,
                VAR_5, 0);
    FUNC_2(VAR_6);
    if(FUNC_1(VAR_7))
        FUNC_3("CoInternetCombineUrlEx failed: %08x\n", VAR_7);
    return VAR_7;
}
