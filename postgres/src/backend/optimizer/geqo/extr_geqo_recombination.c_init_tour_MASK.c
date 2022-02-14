
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PlannerInfo ;
typedef scalar_t__ Gene ;


 int FUNC_0 (int *,int,int ) ;

void
FUNC_1(PlannerInfo *VAR_0, Gene *VAR_1, int VAR_2)
{
 int VAR_3,
    VAR_4;
 if (VAR_2 > 0)
  VAR_1[0] = (Gene) 1;

 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++)
 {
  VAR_4 = FUNC_0(VAR_0, VAR_3, 0);

  if (VAR_3 != VAR_4)
   VAR_1[VAR_3] = VAR_1[VAR_4];
  VAR_1[VAR_4] = (Gene) (VAR_3 + 1);
 }
}
