
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    if(FUNC_0()) {
        FUNC_3("IE running in Enhanced Security Configuration\n");
        return;
    } else if(!VAR_0) {
        FUNC_7("Skipping zone domain tests, IE too old\n");
        return;
    }

    FUNC_5("testing zone domains...\n");

    FUNC_4();

    if (!FUNC_1()) return;
    FUNC_2();
    FUNC_6();
}
