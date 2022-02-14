
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int list ;
struct TYPE_6__ {int slot; TYPE_3__* source; } ;
typedef TYPE_2__ clusterManagerReshardTableItem ;
struct TYPE_7__ {scalar_t__ name; } ;
typedef TYPE_3__ clusterManagerNode ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int,char*) ;

__attribute__((used)) static void FUNC_3(list *VAR_0) {
    listIter VAR_1;
    listNode *VAR_2;
    FUNC_1(VAR_0, &VAR_1);
    while ((VAR_2 = FUNC_0(&VAR_1)) != ((void*)0)) {
        clusterManagerReshardTableItem *VAR_3 = VAR_2->value;
        clusterManagerNode *VAR_4 = VAR_3->source;
        FUNC_2("    Moving slot %d from %s\n", VAR_3->slot, (char *) VAR_4->name);
    }
}
