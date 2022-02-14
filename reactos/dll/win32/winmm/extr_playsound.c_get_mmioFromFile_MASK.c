
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int WCHAR ;
typedef int * LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ HMMIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int *,int,int *,int **) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static HMMIO FUNC_2(LPCWSTR VAR_3)
{
    HMMIO VAR_4;
    WCHAR VAR_5[256];
    LPWSTR VAR_6;

    VAR_4 = FUNC_1((LPWSTR)VAR_3, ((void*)0),
                    VAR_0 | VAR_2 | VAR_1);
    if (VAR_4 != 0) return VAR_4;
    if (FUNC_0(((void*)0), VAR_3, ((void*)0), sizeof(VAR_5)/sizeof(VAR_5[0]), VAR_5, &VAR_6))
    {
        return FUNC_1(VAR_5, ((void*)0),
                         VAR_0 | VAR_2 | VAR_1);
    }
    return 0;
}
