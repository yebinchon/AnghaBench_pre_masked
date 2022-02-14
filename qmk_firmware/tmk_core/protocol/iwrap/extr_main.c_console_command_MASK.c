
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;

__attribute__((used)) static bool FUNC_10(uint8_t VAR_3) {
    switch (VAR_3) {
        case 'h':
        case '?':
            FUNC_8("\nCommands for Bluetooth(WT12/iWRAP):\n");
            FUNC_8("r: reset. software reset by watchdog\n");
            FUNC_8("i: insomniac. prevent KB from sleeping\n");
            FUNC_8("c: iwrap_call. CALL for BT connection.\n");




            FUNC_8("k: kill first connection.\n");
            FUNC_8("Del: unpair first pairing.\n");
            FUNC_8("\n");
            return 0;
        case 'r':
            FUNC_8("reset\n");
            FUNC_0();
            return 1;
        case 'i':
            VAR_2 = !VAR_2;
            if (VAR_2)
                FUNC_8("insomniac\n");
            else
                FUNC_8("not insomniac\n");
            return 1;
        case 'c':
            FUNC_8("iwrap_call()\n");
            FUNC_4();
            return 1;
        case 'k':
            FUNC_8("kill\n");
            FUNC_6();
            return 1;
        case 0x7F:
            FUNC_8("unpair\n");
            FUNC_7();
            return 1;
    }
    return 0;
}
