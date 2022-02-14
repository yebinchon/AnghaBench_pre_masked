
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int k; scalar_t__ n; scalar_t__* dependencies; int ndependencies; } ;
typedef TYPE_1__* DependencyGenerator ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_2(DependencyGenerator VAR_0, int VAR_1,
         AttrNumber VAR_2, AttrNumber *VAR_3)
{




 if (VAR_1 < (VAR_0->k - 1))
 {
  AttrNumber VAR_4;






  for (VAR_4 = VAR_2; VAR_4 < VAR_0->n; VAR_4++)
  {
   VAR_3[VAR_1] = VAR_4;
   FUNC_2(VAR_0, (VAR_1 + 1), (VAR_4 + 1), VAR_3);
  }
 }
 else
 {
  int VAR_5;







  for (VAR_5 = 0; VAR_5 < VAR_0->n; VAR_5++)
  {
   int VAR_6;
   bool VAR_7 = 0;

   VAR_3[VAR_1] = VAR_5;

   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   {
    if (VAR_3[VAR_6] == VAR_5)
    {
     VAR_7 = 1;
     break;
    }
   }





   if (!VAR_7)
   {
    VAR_0->dependencies = (AttrNumber *) FUNC_1(VAR_0->dependencies,
                 VAR_0->k * (VAR_0->ndependencies + 1) * sizeof(AttrNumber));
    FUNC_0(&VAR_0->dependencies[(VAR_0->k * VAR_0->ndependencies)],
        VAR_3, VAR_0->k * sizeof(AttrNumber));
    VAR_0->ndependencies++;
   }
  }
 }
}
