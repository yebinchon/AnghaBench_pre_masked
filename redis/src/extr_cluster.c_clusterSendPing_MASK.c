
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef union clusterMsgData {int dummy; } clusterMsgData ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_18__ {int flags; scalar_t__ numslots; int * link; } ;
typedef TYPE_3__ clusterNode ;
typedef int clusterMsgDataGossip ;
struct TYPE_19__ {int totlen; int count; } ;
typedef TYPE_4__ clusterMsg ;
struct TYPE_20__ {TYPE_1__* node; } ;
typedef TYPE_5__ clusterLink ;
struct TYPE_21__ {TYPE_2__* cluster; } ;
struct TYPE_17__ {int stats_pfail_nodes; int nodes; } ;
struct TYPE_16__ {int ping_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*,unsigned char*,int) ;
 int FUNC_3 (TYPE_4__*,int,TYPE_3__*) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 TYPE_3__* VAR_4 ;
 TYPE_6__ VAR_5 ;
 unsigned char* FUNC_14 (int) ;
 int FUNC_15 (unsigned char*) ;

void FUNC_16(clusterLink *VAR_6, int VAR_7) {
    unsigned char *VAR_8;
    clusterMsg *VAR_9;
    int VAR_10 = 0;
    int VAR_11;
    int VAR_12;




    int VAR_13 = FUNC_9(VAR_5.cluster->nodes)-2;
    VAR_11 = FUNC_10(FUNC_9(VAR_5.cluster->nodes)/10);
    if (VAR_11 < 3) VAR_11 = 3;
    if (VAR_11 > VAR_13) VAR_11 = VAR_13;



    int VAR_14 = VAR_5.cluster->stats_pfail_nodes;




    VAR_12 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_12 += (sizeof(clusterMsgDataGossip)*(VAR_11+VAR_14));


    if (VAR_12 < (int)sizeof(clusterMsg)) VAR_12 = sizeof(clusterMsg);
    VAR_8 = FUNC_14(VAR_12);
    VAR_9 = (clusterMsg*) VAR_8;


    if (VAR_6->node && VAR_7 == VAR_0)
        VAR_6->node->ping_sent = FUNC_13();
    FUNC_0(VAR_9,VAR_7);


    int VAR_15 = VAR_11*3;
    while(VAR_13 > 0 && VAR_10 < VAR_11 && VAR_15--) {
        dictEntry *VAR_16 = FUNC_4(VAR_5.cluster->nodes);
        clusterNode *VAR_17 = FUNC_6(VAR_16);



        if (VAR_17 == VAR_4) continue;


        if (VAR_17->flags & VAR_3) continue;






        if (VAR_17->flags & (VAR_1|VAR_2) ||
            (VAR_17->link == ((void*)0) && VAR_17->numslots == 0))
        {
            VAR_13--;
            continue;
        }


        if (FUNC_1(VAR_9,VAR_10,VAR_17)) continue;


        FUNC_3(VAR_9,VAR_10,VAR_17);
        VAR_13--;
        VAR_10++;
    }


    if (VAR_14) {
        dictIterator *VAR_18;
        dictEntry *VAR_19;

        VAR_18 = FUNC_5(VAR_5.cluster->nodes);
        while((VAR_19 = FUNC_7(VAR_18)) != ((void*)0) && VAR_14 > 0) {
            clusterNode *VAR_20 = FUNC_6(VAR_19);
            if (VAR_20->flags & VAR_1) continue;
            if (VAR_20->flags & VAR_2) continue;
            if (!(VAR_20->flags & VAR_3)) continue;
            FUNC_3(VAR_9,VAR_10,VAR_20);
            VAR_13--;
            VAR_10++;



            VAR_14--;
        }
        FUNC_8(VAR_18);
    }



    VAR_12 = sizeof(clusterMsg)-sizeof(union clusterMsgData);
    VAR_12 += (sizeof(clusterMsgDataGossip)*VAR_10);
    VAR_9->count = FUNC_12(VAR_10);
    VAR_9->totlen = FUNC_11(VAR_12);
    FUNC_2(VAR_6,VAR_8,VAR_12);
    FUNC_15(VAR_8);
}
