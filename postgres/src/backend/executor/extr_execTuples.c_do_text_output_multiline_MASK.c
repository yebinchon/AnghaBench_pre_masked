
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TupOutputState ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int *,int *,int*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*) ;

void
FUNC_7(TupOutputState *VAR_0, const char *VAR_1)
{
 Datum VAR_2[1];
 bool VAR_3[1] = {0};

 while (*VAR_1)
 {
  const char *VAR_4;
  int VAR_5;

  VAR_4 = FUNC_5(VAR_1, '\n');
  if (VAR_4)
  {
   VAR_5 = VAR_4 - VAR_1;
   VAR_4++;
  }
  else
  {
   VAR_5 = FUNC_6(VAR_1);
   VAR_4 = VAR_1 + VAR_5;
  }

  VAR_2[0] = FUNC_1(FUNC_2(VAR_1, VAR_5));
  FUNC_3(VAR_0, VAR_2, VAR_3);
  FUNC_4(FUNC_0(VAR_2[0]));
  VAR_1 = VAR_4;
 }
}
