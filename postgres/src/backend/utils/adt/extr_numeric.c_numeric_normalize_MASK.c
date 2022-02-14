
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NumericVar ;
typedef int Numeric ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 char* FUNC_3 (char*) ;
 int * FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;

char *
FUNC_6(Numeric VAR_0)
{
 NumericVar VAR_1;
 char *VAR_2;
 int VAR_3;




 if (FUNC_0(VAR_0))
  return FUNC_3("NaN");

 FUNC_2(VAR_0, &VAR_1);

 VAR_2 = FUNC_1(&VAR_1);


 if (FUNC_4(VAR_2, '.') != ((void*)0))
 {




  VAR_3 = FUNC_5(VAR_2) - 1;
  while (VAR_2[VAR_3] == '0')
   VAR_3--;


  if (VAR_2[VAR_3] == '.')
   VAR_3--;


  VAR_2[VAR_3 + 1] = '\0';
 }

 return VAR_2;
}
