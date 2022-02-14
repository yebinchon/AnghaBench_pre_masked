
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sds ;
typedef int dictEntry ;
struct TYPE_6__ {int name; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_7__ {TYPE_1__* cluster; } ;
struct TYPE_5__ {int nodes_black_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_7 (int *) ;

void FUNC_8(clusterNode *VAR_4) {
    dictEntry *VAR_5;
    sds VAR_6 = FUNC_6(VAR_4->name,VAR_1);

    FUNC_0();
    if (FUNC_1(VAR_3.cluster->nodes_black_list,VAR_6,((void*)0)) == VAR_2) {


        VAR_6 = FUNC_4(VAR_6);
    }
    VAR_5 = FUNC_2(VAR_3.cluster->nodes_black_list,VAR_6);
    FUNC_3(VAR_5,FUNC_7(((void*)0))+VAR_0);
    FUNC_5(VAR_6);
}
