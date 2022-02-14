
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sds ;
struct TYPE_13__ {int flags; scalar_t__ link; scalar_t__ configEpoch; scalar_t__ pong_received; scalar_t__ ping_sent; TYPE_1__* slaveof; int cport; int port; int ip; int name; } ;
typedef TYPE_5__ clusterNode ;
struct TYPE_14__ {TYPE_4__* cluster; } ;
struct TYPE_12__ {TYPE_3__** importing_slots_from; TYPE_2__** migrating_slots_to; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 () ;
 TYPE_6__ VAR_2 ;

sds FUNC_5(clusterNode *VAR_3) {
    int VAR_4, VAR_5;
    sds VAR_6;


    VAR_6 = FUNC_3(FUNC_4(),"%.40s %s:%d@%d ",
        VAR_3->name,
        VAR_3->ip,
        VAR_3->port,
        VAR_3->cport);


    VAR_6 = FUNC_1(VAR_6, VAR_3->flags);


    if (VAR_3->slaveof)
        VAR_6 = FUNC_3(VAR_6," %.40s ",VAR_3->slaveof->name);
    else
        VAR_6 = FUNC_2(VAR_6," - ",3);


    VAR_6 = FUNC_3(VAR_6,"%lld %lld %llu %s",
        (long long) VAR_3->ping_sent,
        (long long) VAR_3->pong_received,
        (unsigned long long) VAR_3->configEpoch,
        (VAR_3->link || VAR_3->flags & VAR_0) ?
                    "connected" : "disconnected");


    VAR_5 = -1;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        int VAR_7;

        if ((VAR_7 = FUNC_0(VAR_3,VAR_4)) != 0) {
            if (VAR_5 == -1) VAR_5 = VAR_4;
        }
        if (VAR_5 != -1 && (!VAR_7 || VAR_4 == VAR_1-1)) {
            if (VAR_7 && VAR_4 == VAR_1-1) VAR_4++;

            if (VAR_5 == VAR_4-1) {
                VAR_6 = FUNC_3(VAR_6," %d",VAR_5);
            } else {
                VAR_6 = FUNC_3(VAR_6," %d-%d",VAR_5,VAR_4-1);
            }
            VAR_5 = -1;
        }
    }




    if (VAR_3->flags & VAR_0) {
        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
            if (VAR_2.cluster->migrating_slots_to[VAR_4]) {
                VAR_6 = FUNC_3(VAR_6," [%d->-%.40s]",VAR_4,
                    VAR_2.cluster->migrating_slots_to[VAR_4]->name);
            } else if (VAR_2.cluster->importing_slots_from[VAR_4]) {
                VAR_6 = FUNC_3(VAR_6," [%d-<-%.40s]",VAR_4,
                    VAR_2.cluster->importing_slots_from[VAR_4]->name);
            }
        }
    }
    return VAR_6;
}
