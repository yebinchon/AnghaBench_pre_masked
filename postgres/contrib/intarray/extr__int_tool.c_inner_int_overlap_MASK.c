
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;

bool
FUNC_2(ArrayType *VAR_0, ArrayType *VAR_1)
{
 int VAR_2,
    VAR_3;
 int VAR_4,
    VAR_5;
 int *VAR_6,
      *VAR_7;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 VAR_6 = FUNC_1(VAR_0);
 VAR_7 = FUNC_1(VAR_1);

 VAR_4 = VAR_5 = 0;
 while (VAR_4 < VAR_2 && VAR_5 < VAR_3)
 {
  if (VAR_6[VAR_4] < VAR_7[VAR_5])
   VAR_4++;
  else if (VAR_6[VAR_4] == VAR_7[VAR_5])
   return 1;
  else
   VAR_5++;
 }

 return 0;
}
