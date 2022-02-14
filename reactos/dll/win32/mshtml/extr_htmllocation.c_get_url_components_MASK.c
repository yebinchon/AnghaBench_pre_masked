
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int URL_COMPONENTSW ;
typedef int HTMLLocation ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int const*,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int const**) ;

__attribute__((used)) static HRESULT FUNC_6(HTMLLocation *VAR_2, URL_COMPONENTSW *VAR_3)
{
    const WCHAR *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_5(VAR_2, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    if(!FUNC_3(VAR_4, 0, 0, VAR_3)) {
        FUNC_1("InternetCrackUrlW failed: 0x%08x\n", FUNC_2());
        FUNC_4(0);
        return VAR_0;
    }

    return VAR_1;
}
