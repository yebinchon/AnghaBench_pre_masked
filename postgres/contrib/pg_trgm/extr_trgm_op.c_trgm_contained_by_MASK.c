
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trgm ;
typedef int TRGM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;

bool
FUNC_3(TRGM *VAR_0, TRGM *VAR_1)
{
 trgm *VAR_2,
      *VAR_3;
 int VAR_4,
    VAR_5;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_2(VAR_1);

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = FUNC_0(VAR_1);

 while (VAR_2 - FUNC_2(VAR_0) < VAR_4 && VAR_3 - FUNC_2(VAR_1) < VAR_5)
 {
  int VAR_6 = FUNC_1(VAR_2, VAR_3);

  if (VAR_6 < 0)
   return 0;
  else if (VAR_6 > 0)
   VAR_3++;
  else
  {
   VAR_2++;
   VAR_3++;
  }
 }
 if (VAR_2 - FUNC_2(VAR_0) < VAR_4)
  return 0;
 else
  return 1;
}
