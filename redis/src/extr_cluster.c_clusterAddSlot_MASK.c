
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int clusterNode ;
struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int ** slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_2__ VAR_2 ;

int FUNC_1(clusterNode *VAR_3, int VAR_4) {
    if (VAR_2.cluster->slots[VAR_4]) return VAR_0;
    FUNC_0(VAR_3,VAR_4);
    VAR_2.cluster->slots[VAR_4] = VAR_3;
    return VAR_1;
}
