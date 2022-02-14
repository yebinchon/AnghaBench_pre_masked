
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_8__ {int io_threads_num; int clients_pending_read; int io_threads_do_reads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_2__ VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_9(void) {
    if (!VAR_3 || !VAR_7.io_threads_do_reads) return 0;
    int VAR_9 = FUNC_2(VAR_7.clients_pending_read);
    if (VAR_9 == 0) return 0;

    if (VAR_8) FUNC_6("%d TOTAL READ pending clients\n", VAR_9);


    listIter VAR_10;
    listNode *VAR_11;
    FUNC_5(VAR_7.clients_pending_read,&VAR_10);
    int VAR_12 = 0;
    while((VAR_11 = FUNC_3(&VAR_10))) {
        client *VAR_13 = FUNC_4(VAR_11);
        int VAR_14 = VAR_12 % VAR_7.io_threads_num;
        FUNC_0(VAR_4[VAR_14],VAR_13);
        VAR_12++;
    }



    VAR_5 = VAR_2;
    for (int VAR_15 = 0; VAR_15 < VAR_7.io_threads_num; VAR_15++) {
        int VAR_16 = FUNC_2(VAR_4[VAR_15]);
        VAR_6[VAR_15] = VAR_16;
    }


    while(1) {
        unsigned long VAR_17 = 0;
        for (int VAR_18 = 0; VAR_18 < VAR_7.io_threads_num; VAR_18++)
            VAR_17 += VAR_6[VAR_18];
        if (VAR_17 == 0) break;
    }
    if (VAR_8) FUNC_6("I/O READ All threads finshed\n");


    FUNC_5(VAR_7.clients_pending_read,&VAR_10);
    while((VAR_11 = FUNC_3(&VAR_10))) {
        client *VAR_19 = FUNC_4(VAR_11);
        VAR_19->flags &= ~VAR_1;
        if (VAR_19->flags & VAR_0) {
            VAR_19->flags &= ~ VAR_0;
            FUNC_7(VAR_19);
        }
        FUNC_8(VAR_19);
    }
    FUNC_1(VAR_7.clients_pending_read);
    return VAR_9;
}
