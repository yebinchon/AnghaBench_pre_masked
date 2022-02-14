
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ float8 ;
typedef int Datum ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(Datum VAR_0, ArrayType *VAR_1)
{
 float8 VAR_2 = FUNC_4(VAR_0);
 float8 *VAR_3;
 int VAR_4;
 int VAR_5;





 VAR_3 = (float8 *) FUNC_0(VAR_1);

 VAR_4 = 0;
 VAR_5 = FUNC_3(FUNC_2(VAR_1), FUNC_1(VAR_1));
 if (FUNC_5(VAR_2))
  return VAR_5;


 while (VAR_4 < VAR_5)
 {
  int VAR_6 = (VAR_4 + VAR_5) / 2;

  if (FUNC_5(VAR_3[VAR_6]) || VAR_2 < VAR_3[VAR_6])
   VAR_5 = VAR_6;
  else
   VAR_4 = VAR_6 + 1;
 }

 return VAR_4;
}
