
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_8__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_9__ {scalar_t__ time; } ;
typedef TYPE_2__ clusterNodeFailReport ;
struct TYPE_10__ {int * fail_reports; } ;
typedef TYPE_3__ clusterNode ;
struct TYPE_11__ {scalar_t__ cluster_node_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 () ;
 TYPE_4__ VAR_1 ;

void FUNC_4(clusterNode *VAR_2) {
    list *VAR_3 = VAR_2->fail_reports;
    listNode *VAR_4;
    listIter VAR_5;
    clusterNodeFailReport *VAR_6;
    mstime_t VAR_7 = VAR_1.cluster_node_timeout *
                     VAR_0;
    mstime_t VAR_8 = FUNC_3();

    FUNC_2(VAR_3,&VAR_5);
    while ((VAR_4 = FUNC_1(&VAR_5)) != ((void*)0)) {
        VAR_6 = VAR_4->value;
        if (VAR_8 - VAR_6->time > VAR_7) FUNC_0(VAR_3,VAR_4);
    }
}
