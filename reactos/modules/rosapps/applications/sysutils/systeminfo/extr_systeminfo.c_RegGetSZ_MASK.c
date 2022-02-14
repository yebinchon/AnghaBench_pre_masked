
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;
typedef char* LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int*,int ,int*) ;
 size_t FUNC_4 (int,unsigned int) ;
 int FUNC_5 (int*,char*) ;
 int FUNC_6 (char*,char*,int ,...) ;

__attribute__((used)) static
unsigned
FUNC_7(HKEY VAR_4, LPCWSTR VAR_5, LPCWSTR VAR_6, LPWSTR VAR_7, DWORD VAR_8)
{
    DWORD VAR_9 = VAR_8*sizeof(WCHAR), VAR_10 = 0;
    unsigned VAR_11;


    if (VAR_5 && FUNC_2(VAR_4,
                                  VAR_5,
                                  0,
                                  VAR_1,
                                  &VAR_4) != VAR_0)
    {
        FUNC_6(L"Warning! Cannot open %s. Last error: %lu.\n", VAR_5, FUNC_0());
        return 0;
    }


    if (FUNC_3(VAR_4,
                         VAR_6,
                         ((void*)0),
                         &VAR_10,
                         (LPBYTE)VAR_7,
                         &VAR_9) != VAR_0 || (VAR_10 != VAR_3 && VAR_10 != VAR_2))
    {
        FUNC_6(L"Warning! Cannot query %s. Last error: %lu, type: %lu.\n", VAR_6, FUNC_0(), VAR_10);
        VAR_9 = 0;
    }
    else if (VAR_9 == 0)
    {
        FUNC_5(VAR_7, L"N/A");
        VAR_9 = 6;
    }


    if (VAR_5)
        FUNC_1(VAR_4);

    VAR_11 = VAR_9/sizeof(WCHAR);


    VAR_7[FUNC_4(VAR_8-1, VAR_11)] = L'\0';


    while(VAR_11 && !VAR_7[VAR_11-1])
        --VAR_11;

    return VAR_11;
}
