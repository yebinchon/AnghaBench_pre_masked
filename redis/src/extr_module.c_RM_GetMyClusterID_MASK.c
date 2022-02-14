
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* cluster; int cluster_enabled; } ;
struct TYPE_5__ {TYPE_1__* myself; } ;
struct TYPE_4__ {char const* name; } ;


 TYPE_3__ VAR_0 ;

const char *FUNC_0(void) {
    if (!VAR_0.cluster_enabled) return ((void*)0);
    return VAR_0.cluster->myself->name;
}
