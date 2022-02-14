
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ worth; } ;
typedef TYPE_1__ Chromosome ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const Chromosome *VAR_2 = (const Chromosome *) VAR_0;
 const Chromosome *VAR_3 = (const Chromosome *) VAR_1;

 if (VAR_2->worth == VAR_3->worth)
  return 0;
 else if (VAR_2->worth > VAR_3->worth)
  return 1;
 else
  return -1;
}
