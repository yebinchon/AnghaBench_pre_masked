
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_4__ {int conn; } ;
typedef TYPE_1__ client ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,long,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (TYPE_1__*,int ) ;

void *FUNC_12(void *VAR_7) {


    long VAR_8 = (unsigned long)VAR_7;

    while(1) {

        for (int VAR_9 = 0; VAR_9 < 1000000; VAR_9++) {
            if (VAR_5[VAR_8] != 0) break;
        }


        if (VAR_5[VAR_8] == 0) {
            FUNC_6(&VAR_3[VAR_8]);
            FUNC_7(&VAR_3[VAR_8]);
            continue;
        }

        FUNC_9(VAR_5[VAR_8] != 0);

        if (VAR_6) FUNC_5("[%ld] %d to handle\n", VAR_8, (int)FUNC_1(VAR_2[VAR_8]));



        listIter VAR_10;
        listNode *VAR_11;
        FUNC_4(VAR_2[VAR_8],&VAR_10);
        while((VAR_11 = FUNC_2(&VAR_10))) {
            client *VAR_12 = FUNC_3(VAR_11);
            if (VAR_4 == VAR_1) {
                FUNC_11(VAR_12,0);
            } else if (VAR_4 == VAR_0) {
                FUNC_8(VAR_12->conn);
            } else {
                FUNC_10("io_threads_op value is unknown");
            }
        }
        FUNC_0(VAR_2[VAR_8]);
        VAR_5[VAR_8] = 0;

        if (VAR_6) FUNC_5("[%ld] Done\n", VAR_8);
    }
}
