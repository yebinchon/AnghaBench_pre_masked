
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int ) ;

__attribute__((used)) static
void
FUNC_5(void)
{
    HANDLE VAR_1;

    FUNC_3(0xDEADBEEF);
    VAR_1 = FUNC_2();
    FUNC_4(VAR_1 != VAR_0, "IcmpCreateFile failed unexpectedly: %lu\n", FUNC_0());

    if (VAR_1 != VAR_0)
        FUNC_1(VAR_1);
}
