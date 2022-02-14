
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_1(int VAR_4)
{
 int VAR_5;





 if (!VAR_3)
  return 0;


 if (VAR_1[VAR_4])
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_1[VAR_5])
   continue;
  if (FUNC_0(VAR_4, VAR_5) > VAR_2)
   return 1;
 }
 return 0;
}
