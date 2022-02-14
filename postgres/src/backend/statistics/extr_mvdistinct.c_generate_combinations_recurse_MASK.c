
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int k; int n; size_t current; int * combinations; } ;
typedef TYPE_1__ CombinationGenerator ;


 int FUNC_0 (int *,int*,int) ;

__attribute__((used)) static void
FUNC_1(CombinationGenerator *VAR_0,
         int VAR_1, int VAR_2, int *VAR_3)
{

 if (VAR_1 < VAR_0->k)
 {
  int VAR_4;






  for (VAR_4 = VAR_2; VAR_4 < VAR_0->n; VAR_4++)
  {
   VAR_3[VAR_1] = VAR_4;
   FUNC_1(VAR_0, (VAR_1 + 1), (VAR_4 + 1), VAR_3);
  }

  return;
 }
 else
 {

  FUNC_0(&VAR_0->combinations[(VAR_0->k * VAR_0->current)],
      VAR_3, VAR_0->k * sizeof(int));
  VAR_0->current++;
 }
}
