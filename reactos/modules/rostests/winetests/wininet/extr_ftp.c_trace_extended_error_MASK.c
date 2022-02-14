
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (scalar_t__*,char*,scalar_t__*) ;
 int FUNC_5 (char*,scalar_t__,char*) ;

__attribute__((used)) static void FUNC_6(DWORD VAR_2)
{
    DWORD VAR_3, VAR_4 = 0;

    if (VAR_2 != VAR_1) return;
    if (!FUNC_4(&VAR_3, ((void*)0), &VAR_4) && FUNC_0() == VAR_0)
    {
        char *VAR_5 = FUNC_2(FUNC_1(), 0, ++VAR_4);
        FUNC_4(&VAR_3, VAR_5, &VAR_4);
        FUNC_5("%u %s\n", VAR_3, VAR_5);
        FUNC_3(FUNC_1(), 0, VAR_5);
    }
}
