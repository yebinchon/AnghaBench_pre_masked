
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int IUri ;
typedef int IMoniker ;
typedef int HRESULT ;


 int FUNC_0 (int *,int *,int **,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int ) ;

HRESULT FUNC_6(LPCWSTR VAR_0, IMoniker **VAR_1)
{
    HRESULT VAR_2;
    IUri *VAR_3;

    FUNC_3("%s\n", FUNC_5(VAR_0));

    if (FUNC_1(VAR_2 = FUNC_4(VAR_0, &VAR_3)))
        return VAR_2;

    VAR_2 = FUNC_0(((void*)0), VAR_3, VAR_1, 0);
    FUNC_2(VAR_3);
    return VAR_2;
}
