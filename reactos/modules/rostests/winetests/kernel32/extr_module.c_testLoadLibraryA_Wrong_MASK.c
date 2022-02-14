
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    HMODULE VAR_1;


    FUNC_3(0xdeadbeef);
    VAR_1 = FUNC_2("non_ex_pv.dll");
    FUNC_4( !VAR_1, "non_ex_pv.dll should be not loadable\n");
    FUNC_4( FUNC_1() == VAR_0, "Expected ERROR_MOD_NOT_FOUND, got %d\n", FUNC_1() );


    FUNC_0(VAR_1);
}
