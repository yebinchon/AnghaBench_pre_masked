
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_11(void) {
    pid_t VAR_4 = FUNC_7();
    int VAR_5;
    pid_t VAR_6;

    if (VAR_4 < 0)
        FUNC_5("fork() failed");


    if (VAR_4 == 0)
        return;

    for (;;) {
        VAR_6 = FUNC_10(VAR_4, &VAR_5, VAR_3);
        if ((VAR_6 == VAR_4) && (FUNC_3(VAR_5))) {

            FUNC_9(FUNC_8(), VAR_2);
            FUNC_9(VAR_4, VAR_1);
        } else {
            break;
        }
    }


    if (FUNC_1(VAR_5)) {
        FUNC_6(FUNC_0(VAR_5));
    } else if (FUNC_2(VAR_5)) {
        FUNC_9(FUNC_8(), FUNC_4(VAR_5));
    }

    FUNC_6(VAR_0);
}
