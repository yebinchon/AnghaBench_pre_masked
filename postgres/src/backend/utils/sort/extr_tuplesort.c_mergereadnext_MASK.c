
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* mergeactive; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int SortTuple ;


 int FUNC_0 (TYPE_1__*,int *,int,unsigned int) ;
 unsigned int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static bool
FUNC_2(Tuplesortstate *VAR_0, int VAR_1, SortTuple *VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_0->mergeactive[VAR_1])
  return 0;


 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, 1)) == 0)
 {
  VAR_0->mergeactive[VAR_1] = 0;
  return 0;
 }
 FUNC_0(VAR_0, VAR_2, VAR_1, VAR_3);

 return 1;
}
