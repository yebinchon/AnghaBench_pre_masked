
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cluster; int cluster_enabled; } ;
struct TYPE_3__ {int nodes; } ;


 size_t FUNC_0 (int ) ;
 TYPE_2__ VAR_0 ;

size_t FUNC_1(void) {
    if (!VAR_0.cluster_enabled) return 0;
    return FUNC_0(VAR_0.cluster->nodes);
}
