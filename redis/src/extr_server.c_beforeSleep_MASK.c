
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aeEventLoop {int dummy; } ;
typedef int robj ;
struct TYPE_2__ {int unblocked_clients; int clients_waiting_acks; scalar_t__ get_ack_from_slaves; int slaveseldb; int slaves; int * masterhost; scalar_t__ active_expire_enabled; scalar_t__ cluster_enabled; int el; } ;


 int VAR_0 ;
 int FUNC_0 (struct aeEventLoop*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ,int **,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_16 () ;
 int FUNC_17 () ;

void FUNC_18(struct aeEventLoop *VAR_2) {
    FUNC_0(VAR_2);


    FUNC_17();

    FUNC_2(VAR_1.el, FUNC_16());





    if (VAR_1.cluster_enabled) FUNC_3();



    if (VAR_1.active_expire_enabled && VAR_1.masterhost == ((void*)0))
        FUNC_1(VAR_0);



    if (VAR_1.get_ack_from_slaves) {
        robj *VAR_3[3];

        VAR_3[0] = FUNC_4("REPLCONF",8);
        VAR_3[1] = FUNC_4("GETACK",6);
        VAR_3[2] = FUNC_4("*",1);
        FUNC_15(VAR_1.slaves, VAR_1.slaveseldb, VAR_3, 3);
        FUNC_5(VAR_3[0]);
        FUNC_5(VAR_3[1]);
        FUNC_5(VAR_3[2]);
        VAR_1.get_ack_from_slaves = 0;
    }



    if (FUNC_9(VAR_1.clients_waiting_acks))
        FUNC_13();



    if (FUNC_10()) FUNC_11();


    if (FUNC_9(VAR_1.unblocked_clients))
        FUNC_14();


    FUNC_6(0);


    FUNC_8();


    FUNC_7();




    if (FUNC_10()) FUNC_12();
}
