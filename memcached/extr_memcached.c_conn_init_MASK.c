
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rlimit {int rlim_max; } ;
typedef int conn ;
struct TYPE_2__ {int maxconns; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,struct rlimit*) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(void) {

    int VAR_5 = FUNC_2(1);
    if (VAR_5 < 0) {
        FUNC_6("Failed to duplicate file descriptor\n");
        FUNC_3(1);
    }
    int VAR_6 = 10;
    struct rlimit VAR_7;

    VAR_2 = VAR_3.maxconns + VAR_6 + VAR_5;


    if (FUNC_5(VAR_0, &VAR_7) == 0) {
        VAR_2 = VAR_7.rlim_max;
    } else {
        FUNC_4(VAR_4, "Failed to query maximum file descriptor; "
                        "falling back to maxconns\n");
    }

    FUNC_1(VAR_5);

    if ((VAR_1 = FUNC_0(VAR_2, sizeof(conn *))) == ((void*)0)) {
        FUNC_4(VAR_4, "Failed to allocate connection structures\n");

        FUNC_3(1);
    }
}
