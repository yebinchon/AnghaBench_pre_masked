
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int mstime_t ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_20__ {char* ip; int flags; int ctime; scalar_t__ ping_sent; int pong_received; scalar_t__ numslots; int port; struct TYPE_20__* slaveof; int name; TYPE_3__* link; int cport; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_21__ {int ctime; int conn; } ;
typedef TYPE_3__ clusterLink ;
struct TYPE_22__ {char* cluster_announce_ip; int cluster_node_timeout; int cluster_module_flags; TYPE_1__* cluster; int * masterhost; int neterr; scalar_t__ tls_cluster; } ;
struct TYPE_19__ {scalar_t__ state; TYPE_2__* mf_slave; scalar_t__ mf_end; int nodes; scalar_t__ stats_pfail_nodes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_12 ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,int ,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_12 (TYPE_2__*) ;
 int * FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;
 TYPE_2__* FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 () ;
 void* FUNC_20 () ;
 TYPE_2__* VAR_13 ;
 int FUNC_21 (TYPE_2__*) ;
 scalar_t__ FUNC_22 (TYPE_2__*) ;
 scalar_t__ FUNC_23 (TYPE_2__*) ;
 scalar_t__ FUNC_24 (TYPE_2__*) ;
 scalar_t__ FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (char*,int ) ;
 TYPE_4__ VAR_14 ;
 int FUNC_27 (int ,char*,char*,...) ;
 scalar_t__ FUNC_28 (char*,char*) ;
 int FUNC_29 (char*,char*,int) ;
 int FUNC_30 (char*) ;
 char* FUNC_31 (char*) ;

void FUNC_32(void) {
    dictIterator *VAR_15;
    dictEntry *VAR_16;
    int VAR_17 = 0;
    int VAR_18;
    int VAR_19;
    int VAR_20;
    mstime_t VAR_21 = 0, VAR_22 = FUNC_20();
    clusterNode *VAR_23 = ((void*)0);
    static unsigned long long VAR_24 = 0;
    mstime_t VAR_25;

    VAR_24++;




    {
        static char *VAR_26 = ((void*)0);
        char *VAR_27 = VAR_14.cluster_announce_ip;
        int VAR_28 = 0;

        if (VAR_26 == ((void*)0) && VAR_27 != ((void*)0)) VAR_28 = 1;
        else if (VAR_26 != ((void*)0) && VAR_27 == ((void*)0)) VAR_28 = 1;
        else if (VAR_26 && VAR_27 && FUNC_28(VAR_26,VAR_27)) VAR_28 = 1;

        if (VAR_28) {
            if (VAR_26) FUNC_30(VAR_26);
            VAR_26 = VAR_27;

            if (VAR_27) {



                VAR_26 = FUNC_31(VAR_26);
                FUNC_29(VAR_13->ip,VAR_14.cluster_announce_ip,VAR_11);
                VAR_13->ip[VAR_11-1] = '\0';
            } else {
                VAR_13->ip[0] = '\0';
            }
        }
    }





    VAR_25 = VAR_14.cluster_node_timeout;
    if (VAR_25 < 1000) VAR_25 = 1000;


    FUNC_6();




    VAR_15 = FUNC_14(VAR_14.cluster->nodes);
    VAR_14.cluster->stats_pfail_nodes = 0;
    while((VAR_16 = FUNC_16(VAR_15)) != ((void*)0)) {
        clusterNode *VAR_29 = FUNC_15(VAR_16);



        if (VAR_29->flags & (VAR_6|VAR_7)) continue;

        if (VAR_29->flags & VAR_8)
            VAR_14.cluster->stats_pfail_nodes++;



        if (FUNC_23(VAR_29) && VAR_22 - VAR_29->ctime > VAR_25) {
            FUNC_1(VAR_29);
            continue;
        }

        if (VAR_29->link == ((void*)0)) {
            clusterLink *VAR_30 = FUNC_12(VAR_29);
            VAR_30->conn = VAR_14.tls_cluster ? FUNC_10() : FUNC_9();
            FUNC_11(VAR_30->conn, VAR_30);
            if (FUNC_8(VAR_30->conn, VAR_29->ip, VAR_29->cport, VAR_10,
                        VAR_12) == -1) {





                if (VAR_29->ping_sent == 0) VAR_29->ping_sent = FUNC_20();
                FUNC_27(VAR_9, "Unable to connect to "
                    "Cluster Node [%s]:%d -> %s", VAR_29->ip,
                    VAR_29->cport, VAR_14.neterr);

                FUNC_18(VAR_30);
                continue;
            }
            VAR_29->link = VAR_30;
        }
    }
    FUNC_17(VAR_15);



    if (!(VAR_24 % 10)) {
        int VAR_31;



        for (VAR_31 = 0; VAR_31 < 5; VAR_31++) {
            VAR_16 = FUNC_13(VAR_14.cluster->nodes);
            clusterNode *VAR_32 = FUNC_15(VAR_16);


            if (VAR_32->link == ((void*)0) || VAR_32->ping_sent != 0) continue;
            if (VAR_32->flags & (VAR_6|VAR_4))
                continue;
            if (VAR_23 == ((void*)0) || VAR_21 > VAR_32->pong_received) {
                VAR_23 = VAR_32;
                VAR_21 = VAR_32->pong_received;
            }
        }
        if (VAR_23) {
            FUNC_27(VAR_9,"Pinging node %.40s", VAR_23->name);
            FUNC_5(VAR_23->link, VAR_0);
        }
    }







    VAR_18 = 0;
    VAR_19 = 0;
    VAR_20 = 0;
    VAR_15 = FUNC_14(VAR_14.cluster->nodes);
    while((VAR_16 = FUNC_16(VAR_15)) != ((void*)0)) {
        clusterNode *VAR_33 = FUNC_15(VAR_16);
        VAR_22 = FUNC_20();
        mstime_t VAR_34;

        if (VAR_33->flags &
            (VAR_6|VAR_7|VAR_4))
                continue;



        if (FUNC_25(VAR_13) && FUNC_24(VAR_33) && !FUNC_21(VAR_33)) {
            int VAR_35 = FUNC_0(VAR_33);




            if (VAR_35 == 0 && VAR_33->numslots > 0 &&
                VAR_33->flags & VAR_5)
            {
                VAR_18++;
            }
            if (VAR_35 > VAR_19) VAR_19 = VAR_35;
            if (FUNC_25(VAR_13) && VAR_13->slaveof == VAR_33)
                VAR_20 = VAR_35;
        }




        if (VAR_33->link &&
            VAR_22 - VAR_33->link->ctime >
            VAR_14.cluster_node_timeout &&
            VAR_33->ping_sent &&
            VAR_33->pong_received < VAR_33->ping_sent &&

            VAR_22 - VAR_33->ping_sent > VAR_14.cluster_node_timeout/2)
        {

            FUNC_18(VAR_33->link);
        }





        if (VAR_33->link &&
            VAR_33->ping_sent == 0 &&
            (VAR_22 - VAR_33->pong_received) > VAR_14.cluster_node_timeout/2)
        {
            FUNC_5(VAR_33->link, VAR_0);
            continue;
        }



        if (VAR_14.cluster->mf_end &&
            FUNC_24(VAR_13) &&
            VAR_14.cluster->mf_slave == VAR_33 &&
            VAR_33->link)
        {
            FUNC_5(VAR_33->link, VAR_0);
            continue;
        }


        if (VAR_33->ping_sent == 0) continue;




        VAR_34 = VAR_22 - VAR_33->ping_sent;

        if (VAR_34 > VAR_14.cluster_node_timeout) {


            if (!(VAR_33->flags & (VAR_8|VAR_3))) {
                FUNC_27(VAR_9,"*** NODE %.40s possibly failing",
                    VAR_33->name);
                VAR_33->flags |= VAR_8;
                VAR_17 = 1;
            }
        }
    }
    FUNC_17(VAR_15);




    if (FUNC_25(VAR_13) &&
        VAR_14.masterhost == ((void*)0) &&
        VAR_13->slaveof &&
        FUNC_22(VAR_13->slaveof))
    {
        FUNC_26(VAR_13->slaveof->ip, VAR_13->slaveof->port);
    }


    FUNC_19();

    if (FUNC_25(VAR_13)) {
        FUNC_2();
        if (!(VAR_14.cluster_module_flags & VAR_2))
            FUNC_3();





        if (VAR_18 && VAR_19 >= 2 && VAR_20 == VAR_19)
            FUNC_4(VAR_19);
    }

    if (VAR_17 || VAR_14.cluster->state == VAR_1)
        FUNC_7();
}
