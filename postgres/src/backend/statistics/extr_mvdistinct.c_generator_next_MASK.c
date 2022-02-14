
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ current; scalar_t__ ncombinations; int* combinations; size_t k; } ;
typedef TYPE_1__ CombinationGenerator ;



__attribute__((used)) static int *
FUNC_0(CombinationGenerator *VAR_0)
{
 if (VAR_0->current == VAR_0->ncombinations)
  return ((void*)0);

 return &VAR_0->combinations[VAR_0->k * VAR_0->current++];
}
