
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGPROC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 int FUNC_1 (int ,char*) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static bool
FUNC_2(PGPROC *VAR_8)
{
 int VAR_9;
 int VAR_10;
 bool VAR_11;
 int VAR_12;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9 < 0)
  return 1;
 if (VAR_9 == 0)
  return 0;
 if (VAR_5 >= VAR_3)
  return 1;
 VAR_10 = VAR_6;
 if (VAR_6 + VAR_9 + VAR_1 <= VAR_4)
 {

  VAR_6 += VAR_9;
  VAR_11 = 1;
 }
 else
 {

  VAR_11 = 0;
 }




 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
 {
  if (!VAR_11 && VAR_12 > 0)
  {

   if (VAR_9 != FUNC_0(VAR_8))
    FUNC_1(VAR_0, "inconsistent results during deadlock check");
  }
  VAR_2[VAR_5] =
   VAR_7[VAR_10 + VAR_12];
  VAR_5++;
  if (!FUNC_2(VAR_8))
   return 0;

  VAR_5--;
 }
 VAR_6 = VAR_10;
 return 1;
}
