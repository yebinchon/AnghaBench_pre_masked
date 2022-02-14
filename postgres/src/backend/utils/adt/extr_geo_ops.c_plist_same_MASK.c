
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Point ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1(int VAR_0, Point *VAR_1, Point *VAR_2)
{
 int VAR_3,
    VAR_4,
    VAR_5;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 {
  if (FUNC_0(&VAR_2[VAR_3], &VAR_1[0]))
  {


   for (VAR_4 = 1, VAR_5 = VAR_3 + 1; VAR_4 < VAR_0; VAR_4++, VAR_5++)
   {
    if (VAR_5 >= VAR_0)
     VAR_5 = 0;
    if (!FUNC_0(&VAR_2[VAR_5], &VAR_1[VAR_4]))
     break;
   }
   if (VAR_4 == VAR_0)
    return 1;


   for (VAR_4 = 1, VAR_5 = VAR_3 - 1; VAR_4 < VAR_0; VAR_4++, VAR_5--)
   {
    if (VAR_5 < 0)
     VAR_5 = (VAR_0 - 1);
    if (!FUNC_0(&VAR_2[VAR_5], &VAR_1[VAR_4]))
     break;
   }
   if (VAR_4 == VAR_0)
    return 1;
  }
 }

 return 0;
}
