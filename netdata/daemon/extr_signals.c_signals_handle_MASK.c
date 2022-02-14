
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int action; char* name; scalar_t__ count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;





 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 TYPE_1__* VAR_4 ;

void FUNC_13(void) {
    while(1) {




        if(FUNC_9() == -1 && VAR_3 == VAR_1) {




            int VAR_5 = 1;
            while(VAR_5) {
                VAR_5 = 0;


                int VAR_6;
                for (VAR_6 = 0; VAR_4[VAR_6].action != VAR_2; VAR_6++) {
                    if (VAR_4[VAR_6].count) {
                        VAR_5 = 1;
                        VAR_4[VAR_6].count = 0;
                        const char *VAR_7 = VAR_4[VAR_6].name;

                        switch (VAR_4[VAR_6].action) {
                            case 129:
                                FUNC_3();
                                FUNC_7("SIGNAL: Received %s. Reloading HEALTH configuration...", VAR_7);
                                FUNC_6();
                                FUNC_2();
                                break;

                            case 128:
                                FUNC_3();
                                FUNC_7("SIGNAL: Received %s. Saving databases...", VAR_7);
                                FUNC_12();
                                FUNC_7("Databases saved.");
                                FUNC_2();
                                break;

                            case 130:
                                FUNC_3();
                                FUNC_7("SIGNAL: Received %s. Reopening all log files...", VAR_7);
                                FUNC_11();
                                FUNC_2();
                                break;

                            case 132:
                                FUNC_3();
                                FUNC_7("SIGNAL: Received %s. Cleaning up to exit...", VAR_7);
                                FUNC_8(0);
                                FUNC_4(0);

                            case 131:
                                FUNC_5("SIGNAL: Received %s. netdata now exits.", VAR_7);

                            case 133:
                                FUNC_0(VAR_0, "SIGNAL: Received %s. Reaping...", VAR_7);
                                FUNC_10();
                                break;

                            default:
                                FUNC_7("SIGNAL: Received %s. No signal handler configured. Ignoring it.", VAR_7);
                                break;
                        }
                    }
                }
            }
        }
        else
            FUNC_1("SIGNAL: pause() returned but it was not interrupted by a signal.");
    }
}
