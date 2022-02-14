
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PlannerInfo ;


 double FUNC_0 (int *) ;
 double FUNC_1 (double) ;

__attribute__((used)) static int
FUNC_2(PlannerInfo *VAR_0, int VAR_1, double VAR_2)
{
 double VAR_3;
 double VAR_4 = (double) VAR_1;
 do
 {
  double VAR_5;

  VAR_5 = (VAR_2 * VAR_2) - 4.0 * (VAR_2 - 1.0) * FUNC_0(VAR_0);
  if (VAR_5 > 0.0)
   VAR_5 = FUNC_1(VAR_5);
  VAR_3 = VAR_4 * (VAR_2 - VAR_5) / 2.0 / (VAR_2 - 1.0);
 } while (VAR_3 < 0.0 || VAR_3 >= VAR_4);

 return (int) VAR_3;
}
