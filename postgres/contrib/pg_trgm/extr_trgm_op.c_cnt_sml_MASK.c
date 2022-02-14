
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trgm ;
typedef int float4 ;
typedef int TRGM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;

float4
FUNC_4(TRGM *VAR_0, TRGM *VAR_1, bool VAR_2)
{
 trgm *VAR_3,
      *VAR_4;
 int VAR_5 = 0;
 int VAR_6,
    VAR_7;

 VAR_3 = FUNC_3(VAR_0);
 VAR_4 = FUNC_3(VAR_1);

 VAR_6 = FUNC_0(VAR_0);
 VAR_7 = FUNC_0(VAR_1);


 if (VAR_6 <= 0 || VAR_7 <= 0)
  return (float4) 0.0;

 while (VAR_3 - FUNC_3(VAR_0) < VAR_6 && VAR_4 - FUNC_3(VAR_1) < VAR_7)
 {
  int VAR_8 = FUNC_2(VAR_3, VAR_4);

  if (VAR_8 < 0)
   VAR_3++;
  else if (VAR_8 > 0)
   VAR_4++;
  else
  {
   VAR_3++;
   VAR_4++;
   VAR_5++;
  }
 }






 return FUNC_1(VAR_5, VAR_6, VAR_2 ? VAR_5 : VAR_7);
}
