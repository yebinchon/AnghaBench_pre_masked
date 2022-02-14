
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,char*,char*,...) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,scalar_t__*) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_4)
{
    char VAR_5[32];
    DWORD VAR_6;

    FUNC_6("waiting for %s\n", VAR_4);

    VAR_6 = FUNC_2(VAR_3, 30000);
    FUNC_3(VAR_6 == VAR_0, "WaitForSingleObject failed: %u\n", VAR_6);
    if(VAR_6 != VAR_0)
        return;

    FUNC_0(&VAR_2);
    FUNC_5(VAR_5, VAR_1);
    *VAR_1 = 0;
    FUNC_1(&VAR_2);

    FUNC_3(!FUNC_4(VAR_5, VAR_4), "Unexpected event: %s, expected %s\n", VAR_5, VAR_4);
}
