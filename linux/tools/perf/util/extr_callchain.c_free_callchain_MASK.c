
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct callchain_root {int node; } ;
struct TYPE_2__ {int use_callchain; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(struct callchain_root *VAR_1)
{
 if (!VAR_0.use_callchain)
  return;

 FUNC_0(&VAR_1->node);
}
