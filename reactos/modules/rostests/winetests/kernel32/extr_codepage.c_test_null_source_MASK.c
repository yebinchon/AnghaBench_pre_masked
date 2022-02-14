
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int,int *,int ,int *,int *) ;
 int FUNC_3 (int,char*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    int VAR_2;
    DWORD VAR_3;

    FUNC_1(0);
    VAR_2 = FUNC_2(VAR_0, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0), ((void*)0));
    VAR_3 = FUNC_0();
    FUNC_3(!VAR_2 && VAR_3 == VAR_1,
        "WideCharToMultiByte returned %d with GLE=%u (expected 0 with ERROR_INVALID_PARAMETER)\n",
        VAR_2, VAR_3);

    FUNC_1(0);
    VAR_2 = FUNC_2(VAR_0, 0, ((void*)0), -1, ((void*)0), 0, ((void*)0), ((void*)0));
    VAR_3 = FUNC_0();
    FUNC_3(!VAR_2 && VAR_3 == VAR_1,
        "WideCharToMultiByte returned %d with GLE=%u (expected 0 with ERROR_INVALID_PARAMETER)\n",
        VAR_2, VAR_3);
}
