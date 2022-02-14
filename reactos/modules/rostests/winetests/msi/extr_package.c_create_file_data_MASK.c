
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,char*,int ,int *,int *) ;
 int FUNC_3 (int,char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(LPCSTR VAR_3, LPCSTR VAR_4)
{
    HANDLE VAR_5;
    DWORD VAR_6;

    VAR_5 = FUNC_1(VAR_3, VAR_1, 0, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_3(VAR_5 != VAR_2, "Failure to open file %s\n", VAR_3);
    if (VAR_5 == VAR_2)
        return;

    FUNC_2(VAR_5, VAR_4, FUNC_4(VAR_4), &VAR_6, ((void*)0));
    FUNC_2(VAR_5, "\n", FUNC_4("\n"), &VAR_6, ((void*)0));

    FUNC_0(VAR_5);
}
