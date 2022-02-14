
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SC_HANDLE ;
typedef scalar_t__ LONG ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(SC_HANDLE VAR_3)
{
    LONG VAR_4;

    if (!VAR_3)
        return;
    FUNC_3(VAR_0);
    VAR_4 = FUNC_1(VAR_3);
    FUNC_4(VAR_4 == VAR_2, "DeleteService returned %ld, expected 1\n", VAR_4);
    FUNC_4(FUNC_2() == VAR_0
        || FUNC_2() == VAR_1 , "DeleteService GetLastError()=0x%08lx\n", FUNC_2());

    FUNC_0(VAR_3);
}
