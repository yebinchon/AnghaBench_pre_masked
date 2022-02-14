
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(LPCSTR VAR_4, const char *VAR_5)
{
    DWORD VAR_6;
    BOOL VAR_7;
    HANDLE VAR_8 = FUNC_1(VAR_4, VAR_2, 0, ((void*)0),
                                VAR_0, VAR_1, ((void*)0));
    FUNC_3(VAR_8 != VAR_3);
    VAR_7 = FUNC_2(VAR_8, VAR_5, FUNC_4(VAR_5), &VAR_6, ((void*)0));
    FUNC_3(VAR_7 != 0);
    FUNC_0(VAR_8);
}
