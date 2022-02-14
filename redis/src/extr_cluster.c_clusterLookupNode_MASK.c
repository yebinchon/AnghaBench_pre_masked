
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
typedef int dictEntry ;
typedef int clusterNode ;
struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int nodes; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int ) ;
 TYPE_2__ VAR_1 ;

clusterNode *FUNC_4(const char *VAR_2) {
    sds VAR_3 = FUNC_3(VAR_2, VAR_0);
    dictEntry *VAR_4;

    VAR_4 = FUNC_0(VAR_1.cluster->nodes,VAR_3);
    FUNC_2(VAR_3);
    if (VAR_4 == ((void*)0)) return ((void*)0);
    return FUNC_1(VAR_4);
}
