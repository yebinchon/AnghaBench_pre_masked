
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_handler; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,struct sigaction*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_9(pid_t VAR_11)
{
    int VAR_12 = VAR_0;
    int VAR_13 = 0;
    int VAR_14 = 0;
    struct sigaction VAR_15;

    VAR_15.sa_handler = VAR_9;
    VAR_15.sa_flags = 0;

    FUNC_7(VAR_1, &VAR_15, ((void*)0));
    FUNC_7(VAR_2, &VAR_15, ((void*)0));
    FUNC_7(VAR_3, &VAR_15, ((void*)0));
    FUNC_7(VAR_7, &VAR_15, ((void*)0));
    FUNC_7(VAR_6, &VAR_15, ((void*)0));
    FUNC_7(VAR_5, &VAR_15, ((void*)0));


    for (VAR_14 = 0; ;VAR_14++) {
        pid_t VAR_16 = FUNC_8(VAR_11, &VAR_13, 0);
        if (VAR_16 == VAR_11) {

            VAR_12 = FUNC_1(VAR_13) ?
                FUNC_0(VAR_13) :
                (0x80 | FUNC_2(VAR_13));
            break;
        } else {
            int VAR_17 = 0;
            switch (VAR_14) {
            case 0:

                VAR_17 = VAR_8 > 0 ? VAR_8 : VAR_6;
                if (VAR_8 == VAR_1) {
                   FUNC_4(VAR_10, "Timeout.. killing the process\n");
                }
                break;
            case 1:
                VAR_17 = VAR_6;
                break;
            default:
                VAR_17 = VAR_4;
                break;
            }
            if (FUNC_5(VAR_11, VAR_17) < 0) {

                FUNC_6("lost child when trying to kill");
            }

            FUNC_3(5);
        }
    }
    return VAR_12;
}
