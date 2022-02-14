
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_4 (scalar_t__,char*,int ,scalar_t__*,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(LPCSTR VAR_4, LPCSTR VAR_5, DWORD VAR_6)
{
    HANDLE VAR_7;
    DWORD VAR_8;

    VAR_7 = FUNC_1(VAR_4, VAR_2, 0, ((void*)0), VAR_0, 0, ((void*)0));
    if (VAR_7 == VAR_3)
        return;

    FUNC_4(VAR_7, VAR_5, FUNC_5(VAR_5), &VAR_8, ((void*)0));
    FUNC_4(VAR_7, "\n", FUNC_5("\n"), &VAR_8, ((void*)0));

    if (VAR_6)
    {
        FUNC_3(VAR_7, VAR_6, ((void*)0), VAR_1);
        FUNC_2(VAR_7);
    }

    FUNC_0(VAR_7);
}
