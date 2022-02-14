
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct block_range {scalar_t__ coverage; struct symbol* sym; } ;
struct TYPE_4__ {scalar_t__ blocks; } ;
struct TYPE_3__ {double max_coverage; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct symbol*) ;

double FUNC_1(struct block_range *VAR_1)
{
 struct symbol *VAR_2;

 if (!VAR_1) {
  if (VAR_0.blocks)
   return 0;

  return -1;
 }

 VAR_2 = VAR_1->sym;
 if (!VAR_2)
  return -1;

 return (double)VAR_1->coverage / FUNC_0(VAR_2)->max_coverage;
}
