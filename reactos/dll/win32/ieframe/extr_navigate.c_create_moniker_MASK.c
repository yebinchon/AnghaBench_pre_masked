
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPCWSTR ;
typedef int IMoniker ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int **) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static HRESULT FUNC_8(LPCWSTR VAR_4, IMoniker **VAR_5)
{
    WCHAR VAR_6[VAR_0];
    DWORD VAR_7;
    HRESULT VAR_8;

    if(FUNC_3(VAR_4))
        return FUNC_1(((void*)0), VAR_4, VAR_5);

    VAR_7 = FUNC_0(VAR_6);
    VAR_8 = FUNC_5(VAR_4, VAR_6, &VAR_7, VAR_3 | VAR_2 | VAR_1);
    FUNC_4("was %s got %s\n", FUNC_7(VAR_4), FUNC_7(VAR_6));
    if(FUNC_2(VAR_8)) {
        FUNC_6("UrlApplyScheme failed: %08x\n", VAR_8);
        return VAR_8;
    }

    return FUNC_1(((void*)0), VAR_6, VAR_5);
}
