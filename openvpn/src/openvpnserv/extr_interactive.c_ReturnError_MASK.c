
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int VOID ;
typedef char* LPWSTR ;
typedef char* LPVOID ;
typedef int LPHANDLE ;
typedef int LPCWSTR ;
typedef int HANDLE ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,char*,scalar_t__,int ,char*,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static VOID
FUNC_5(HANDLE VAR_7, DWORD VAR_8, LPCWSTR VAR_9, DWORD VAR_10, LPHANDLE VAR_11)
{
    DWORD VAR_12;
    LPWSTR VAR_13 = L"0xffffffff\nFormatMessage failed\nCould not return result";
    DWORD_PTR VAR_14[] = {
        (DWORD_PTR) VAR_8,
        (DWORD_PTR) VAR_9,
        (DWORD_PTR) ""
    };

    if (VAR_8 != VAR_0)
    {
        FUNC_0(VAR_4
                       |VAR_1
                       |VAR_5,
                       0, VAR_8, 0, (LPWSTR) &VAR_14[2], 0, ((void*)0));
    }

    VAR_12 = FUNC_0(VAR_3
                                |VAR_1
                                |VAR_2,
                                L"0x%1!08x!\n%2!s!\n%3!s!", 0, 0,
                                (LPWSTR) &VAR_13, 0, (va_list *) VAR_14);

    FUNC_3(VAR_7, VAR_13, (DWORD)(FUNC_4(VAR_13) * 2), VAR_10, VAR_11);



    FUNC_2(VAR_6, "%S", VAR_13);


    if (VAR_8 != VAR_0)
    {
        FUNC_1((LPVOID) VAR_14[2]);
    }
    if (VAR_12)
    {
        FUNC_1(VAR_13);
    }
}
