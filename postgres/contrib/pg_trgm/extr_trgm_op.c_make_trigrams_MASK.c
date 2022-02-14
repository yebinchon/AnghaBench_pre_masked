
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trgm ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static trgm *
FUNC_4(trgm *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_1;

 if (VAR_3 < 3)
  return VAR_0;

 if (VAR_2 > VAR_3)
 {

  int VAR_5 = FUNC_3(VAR_1),
     VAR_6 = FUNC_3(VAR_1 + VAR_5),
     VAR_7 = FUNC_3(VAR_1 + VAR_5 + VAR_6);

  while ((VAR_4 - VAR_1) + VAR_5 + VAR_6 + VAR_7 <= VAR_2)
  {
   FUNC_2(VAR_0, VAR_4, VAR_5 + VAR_6 + VAR_7);

   VAR_4 += VAR_5;
   VAR_0++;

   VAR_5 = VAR_6;
   VAR_6 = VAR_7;
   VAR_7 = FUNC_3(VAR_4 + VAR_5 + VAR_6);
  }
 }
 else
 {

  FUNC_0(VAR_2 == VAR_3);

  while (VAR_4 - VAR_1 < VAR_2 - 2 )
  {
   FUNC_1(VAR_0, VAR_4);
   VAR_4++;
   VAR_0++;
  }
 }

 return VAR_0;
}
