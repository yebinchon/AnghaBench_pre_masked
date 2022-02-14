
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int len ;
typedef int buf ;
typedef int RpcHttpAsyncData ;
typedef int HINTERNET ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*,int*,int *) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int *,int ,char*,int) ;

__attribute__((used)) static void FUNC_3(HINTERNET VAR_2, RpcHttpAsyncData *VAR_3, HANDLE VAR_4)
{
    DWORD VAR_5, VAR_6 = 0, VAR_7 = sizeof(VAR_6);
    char VAR_8[2048];

    FUNC_0(VAR_2, VAR_1|VAR_0, &VAR_6, &VAR_7, ((void*)0));
    if (!VAR_6) return;
    for (;;)
    {
        VAR_5 = FUNC_1(sizeof(VAR_8), VAR_6);
        if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_8, VAR_5) <= 0) return;
        VAR_6 -= VAR_5;
    }
}
