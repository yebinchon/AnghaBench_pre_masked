
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ root; } ;
struct TYPE_10__ {struct TYPE_10__* rwlock; struct TYPE_10__* stats; TYPE_1__ values_index; } ;
typedef int NAME_VALUE ;
typedef TYPE_2__ DICTIONARY ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(DICTIONARY *VAR_1) {
    FUNC_0(VAR_0, "Destroying dictionary.");

    FUNC_3(VAR_1);

    while(VAR_1->values_index.root)
        FUNC_1(VAR_1, (NAME_VALUE *)VAR_1->values_index.root);

    FUNC_2(VAR_1);

    if(VAR_1->stats)
        FUNC_4(VAR_1->stats);

    if(VAR_1->rwlock) {
        FUNC_5(VAR_1->rwlock);
        FUNC_4(VAR_1->rwlock);
    }

    FUNC_4(VAR_1);
}
