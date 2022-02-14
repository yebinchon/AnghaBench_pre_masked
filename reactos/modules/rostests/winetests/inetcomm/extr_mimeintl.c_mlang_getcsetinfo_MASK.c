
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MIMECSETINFO ;
typedef int IMultiLanguage ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,char const*,int,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **) ;

__attribute__((used)) static HRESULT FUNC_8(const char *VAR_2, MIMECSETINFO *VAR_3)
{
    DWORD VAR_4 = FUNC_3(VAR_0, 0, VAR_2, -1, ((void*)0), 0);
    BSTR VAR_5 = FUNC_5(((void*)0), VAR_4 - 1);
    HRESULT VAR_6;
    IMultiLanguage *VAR_7;

    FUNC_3(VAR_0, 0, VAR_2, -1, VAR_5, VAR_4);

    VAR_6 = FUNC_7(&VAR_7);

    if(FUNC_4(VAR_6))
    {
        VAR_6 = FUNC_1(VAR_7, VAR_5, VAR_3);
        FUNC_2(VAR_7);
    }
    FUNC_6(VAR_5);
    if(FUNC_0(VAR_6)) VAR_6 = VAR_1;
    return VAR_6;
}
