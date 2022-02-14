
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_7__ {int conn; int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int io_threads_num; int clients_pending_write; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,...) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ VAR_9 ;

int FUNC_13(void) {
    int VAR_10 = FUNC_6(VAR_8.clients_pending_write);
    if (VAR_10 == 0) return 0;



    if (FUNC_12()) {
        return FUNC_3();
    }


    if (!VAR_3) FUNC_11();

    if (VAR_9) FUNC_10("%d TOTAL WRITE pending clients\n", VAR_10);


    listIter VAR_11;
    listNode *VAR_12;
    FUNC_9(VAR_8.clients_pending_write,&VAR_11);
    int VAR_13 = 0;
    while((VAR_12 = FUNC_7(&VAR_11))) {
        client *VAR_14 = FUNC_8(VAR_12);
        VAR_14->flags &= ~VAR_1;
        int VAR_15 = VAR_13 % VAR_8.io_threads_num;
        FUNC_4(VAR_4[VAR_15],VAR_14);
        VAR_13++;
    }



    VAR_5 = VAR_2;
    for (int VAR_16 = 0; VAR_16 < VAR_8.io_threads_num; VAR_16++) {
        int VAR_17 = FUNC_6(VAR_4[VAR_16]);
        VAR_6[VAR_16] = VAR_17;
    }


    while(1) {
        unsigned long VAR_18 = 0;
        for (int VAR_19 = 0; VAR_19 < VAR_8.io_threads_num; VAR_19++)
            VAR_18 += VAR_6[VAR_19];
        if (VAR_18 == 0) break;
    }
    if (VAR_9) FUNC_10("I/O WRITE All threads finshed\n");



    FUNC_9(VAR_8.clients_pending_write,&VAR_11);
    while((VAR_12 = FUNC_7(&VAR_11))) {
        client *VAR_20 = FUNC_8(VAR_12);



        if (FUNC_0(VAR_20) &&
                FUNC_1(VAR_20->conn, VAR_7) == VAR_0)
        {
            FUNC_2(VAR_20);
        }
    }
    FUNC_5(VAR_8.clients_pending_write);
    return VAR_10;
}
