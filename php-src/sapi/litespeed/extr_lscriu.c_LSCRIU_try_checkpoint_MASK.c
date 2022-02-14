
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(int *VAR_6)
{
    int VAR_7;
    pid_t VAR_8;
    pid_t VAR_9 = FUNC_8();

    if (VAR_5) {
        FUNC_10("LSCRIU (%d): Already tried checkpoint - one time per customer\n",
                   VAR_9);
        return;
    }
    FUNC_10("LSCRIU (%d): Trying checkpoint\n", VAR_9);
    VAR_5 = 1;
    if (!VAR_3) {
        FUNC_1();
        return;
    }

    FUNC_10("LSCRIU (%d): fork!\n", VAR_9);
    VAR_8 = FUNC_7();
    if (VAR_8 < 0) {
        FUNC_11("LSCRIU (%d): Can't checkpoint due to a fork error: %s\n",
                   VAR_9, FUNC_13(VAR_0));
        return;
    }
    if (VAR_8 == 0) {
        pid_t VAR_10 = FUNC_9();

        FUNC_12();
        VAR_7 = FUNC_2(VAR_9,
                                  VAR_1,
                                  VAR_2);
        FUNC_6(VAR_2);

        FUNC_5(VAR_10);
        FUNC_3(0, "Restored!");
        FUNC_0();
        VAR_4 = 1;
    }
    else {
        if (VAR_6)
            *VAR_6 = VAR_8;
    }
    FUNC_4(0);
}
