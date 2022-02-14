
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {TYPE_1__* ops; int output; } ;
struct TYPE_2__ {int connected_output; } ;


 int FUNC_0 (int,char*,struct neighbour*) ;

__attribute__((used)) static void FUNC_1(struct neighbour *VAR_0)
{
 FUNC_0(2, "neigh %p is connected\n", VAR_0);

 VAR_0->output = VAR_0->ops->connected_output;
}
