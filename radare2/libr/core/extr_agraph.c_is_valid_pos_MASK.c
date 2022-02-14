
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* layers; } ;
struct TYPE_4__ {int n_nodes; } ;
typedef TYPE_2__ RAGraph ;



__attribute__((used)) static int FUNC_0(const RAGraph *VAR_0, int VAR_1, int VAR_2) {
 return VAR_2 >= 0 && VAR_2 < VAR_0->layers[VAR_1].n_nodes;
}
