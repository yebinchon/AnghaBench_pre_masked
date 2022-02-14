
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum pause_thread_types { ____Placeholder_pause_thread_types } pause_thread_types ;
struct TYPE_4__ {int num_threads; } ;
struct TYPE_3__ {int notify_send_fd; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_3 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_15 (int) ;
 int VAR_5 ;
 int FUNC_16 (int ,char*,int) ;

void FUNC_17(enum pause_thread_types VAR_6) {
    char VAR_7[1];
    int VAR_8;

    VAR_7[0] = 0;
    switch (VAR_6) {
        case 131:
            FUNC_9();
            FUNC_4();
            FUNC_2();




        case 130:
            VAR_7[0] = 'p';
            FUNC_7(&VAR_5);
            break;
        case 129:
            FUNC_10();
            FUNC_5();
            FUNC_3();




        case 128:
            FUNC_8(&VAR_5);
            break;
        default:
            FUNC_1(VAR_3, "Unknown lock type: %d\n", VAR_6);
            FUNC_0(1 == 0);
            break;
    }


    if (VAR_7[0] == 0) {
        return;
    }

    FUNC_7(&VAR_1);
    VAR_0 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_2.num_threads; VAR_8++) {
        if (FUNC_16(VAR_4[VAR_8].notify_send_fd, VAR_7, 1) != 1) {
            FUNC_6("Failed writing to notify pipe");

        }
    }
    FUNC_15(VAR_2.num_threads);
    FUNC_8(&VAR_1);
}
