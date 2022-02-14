
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void)
{
    int VAR_4;

    if ((!VAR_1) && (!&FUNC_7)) {
        FUNC_5("LSCRIU (%d): Not native and unable to dump - abandon one-time "
                   "dump\n", VAR_2);
        return;
    }

    VAR_4 = FUNC_7();
    if (VAR_4 < 0) {
        FUNC_6("LSCRIU: CloudLinux dump of PID: %d, error: %s\n",
                   VAR_2, FUNC_8(VAR_0));
    }
    if (VAR_4 == 0) {

        FUNC_6("LSCRIU: Successful CloudLinux dump of PID: %d\n", VAR_2);
    }
    else {
        VAR_3 = 1;
        FUNC_0();




        FUNC_2();
        FUNC_6("LSCRIU: Successful CloudLinux restore of PID: %d, parent: %d.\n",
                   FUNC_3(), FUNC_4());
    }
    FUNC_1(0);
}
