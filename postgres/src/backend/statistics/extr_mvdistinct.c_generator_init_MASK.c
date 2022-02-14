
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ncombinations; int* combinations; int current; int k; int n; } ;
typedef TYPE_1__ CombinationGenerator ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static CombinationGenerator *
FUNC_4(int VAR_0, int VAR_1)
{
 CombinationGenerator *VAR_2;

 FUNC_0((VAR_0 >= VAR_1) && (VAR_1 > 0));


 VAR_2 = (CombinationGenerator *) FUNC_3(sizeof(CombinationGenerator));

 VAR_2->ncombinations = FUNC_2(VAR_0, VAR_1);


 VAR_2->combinations = (int *) FUNC_3(sizeof(int) * VAR_1 * VAR_2->ncombinations);

 VAR_2->current = 0;
 VAR_2->k = VAR_1;
 VAR_2->n = VAR_0;


 FUNC_1(VAR_2);


 FUNC_0(VAR_2->current == VAR_2->ncombinations);


 VAR_2->current = 0;

 return VAR_2;
}
