
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6()
{
    BOOL VAR_4;
    FUNC_3(VAR_1);
    if (&FUNC_5 && VAR_2)
    {
        VAR_4 = FUNC_5(VAR_2);
        FUNC_4( VAR_4, "UnhookWinEvent error %d\n", FUNC_1());
        FUNC_2(0xdeadbeef);
        FUNC_4(!FUNC_5(VAR_2), "UnhookWinEvent succeeded\n");
        FUNC_4(FUNC_1() == VAR_0 ||
           FUNC_1() == 0xdeadbeef,
           "unexpected error %d\n", FUNC_1());
    }
    FUNC_0( &VAR_3 );

}
