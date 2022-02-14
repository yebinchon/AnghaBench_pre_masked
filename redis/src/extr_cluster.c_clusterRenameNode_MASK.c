
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sds ;
struct TYPE_7__ {int name; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_8__ {TYPE_1__* cluster; } ;
struct TYPE_6__ {int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ,char*) ;

void FUNC_7(clusterNode *VAR_4, char *VAR_5) {
    int VAR_6;
    sds VAR_7 = FUNC_4(VAR_4->name, VAR_0);

    FUNC_6(VAR_2,"Renaming node %.40s into %.40s",
        VAR_4->name, VAR_5);
    VAR_6 = FUNC_1(VAR_3.cluster->nodes, VAR_7);
    FUNC_3(VAR_7);
    FUNC_5(VAR_6 == VAR_1);
    FUNC_2(VAR_4->name, VAR_5, VAR_0);
    FUNC_0(VAR_4);
}
