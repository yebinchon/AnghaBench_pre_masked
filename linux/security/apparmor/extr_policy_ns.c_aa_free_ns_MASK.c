
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_ns {TYPE_1__* unconfined; int parent; int labels; int base; } ;
struct TYPE_2__ {int * ns; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct aa_ns*) ;

void FUNC_5(struct aa_ns *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(&VAR_0->base);
 FUNC_1(&VAR_0->labels);
 FUNC_3(VAR_0->parent);

 VAR_0->unconfined->ns = ((void*)0);
 FUNC_0(VAR_0->unconfined);
 FUNC_4(VAR_0);
}
