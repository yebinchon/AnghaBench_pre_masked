
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static
void
FUNC_6(void)
{
    HANDLE VAR_2;

    FUNC_3(0xDEADBEEF);
    VAR_2 = FUNC_1();

    if (FUNC_0() == VAR_0)
    {

        FUNC_5("IPv6 is not available.\n");
        return;
    }

    FUNC_4(VAR_2 != VAR_1, "Icmp6CreateFile failed unexpectedly: %lu\n", FUNC_0());

    if (VAR_2 != VAR_1)
        FUNC_2(VAR_2);
}
