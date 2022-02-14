
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ verbose; int num_threads; } ;
struct TYPE_3__ {int notify_send_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 TYPE_1__* VAR_5 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,int) ;

void FUNC_12(void) {
    char VAR_6[1];
    int VAR_7;


    FUNC_5();
    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "stopped assoc\n");

    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "asking workers to stop\n");
    VAR_6[0] = 's';
    FUNC_3(&VAR_2);
    VAR_1 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_3.num_threads; VAR_7++) {
        if (FUNC_11(VAR_5[VAR_7].notify_send_fd, VAR_6, 1) != 1) {
            FUNC_2("Failed writing to notify pipe");

        }
    }
    FUNC_10(VAR_3.num_threads);
    FUNC_4(&VAR_2);

    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "asking background threads to stop\n");



    FUNC_7(VAR_0);
    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "stopped lru crawler\n");
    FUNC_8();
    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "stopped maintainer\n");
    FUNC_9();
    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "stopped slab mover\n");
    FUNC_1();
    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "stopped logger thread\n");
    FUNC_6();
    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "stopped idle timeout thread\n");

    if (VAR_3.verbose > 0)
        FUNC_0(VAR_4, "all background threads stopped\n");


}
