
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 size_t FUNC_0 (char*,char*,size_t) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_1, bool VAR_2, int VAR_3)
{
 char *VAR_4;
 size_t VAR_5;
 size_t VAR_6;
 size_t VAR_7;





 if (!VAR_2)
  return VAR_1;
 else
 {
  VAR_5 = FUNC_4(VAR_1);
  VAR_7 = 2 * VAR_5 + 1;
  VAR_4 = (char *) FUNC_1(VAR_7 + 3, VAR_3);
  if (!VAR_4)
   return VAR_4;
  VAR_6 = FUNC_0(VAR_4 + 1, VAR_1, VAR_7);
  if (VAR_5 == VAR_6)
  {
   VAR_4[0] = VAR_4[VAR_6 + 1] = '\'';
   VAR_4[VAR_6 + 2] = '\0';
  }
  else
  {




   FUNC_3(VAR_4 + 2, VAR_4 + 1, VAR_6);
   VAR_4[0] = VAR_0;
   VAR_4[1] = VAR_4[VAR_6 + 2] = '\'';
   VAR_4[VAR_6 + 3] = '\0';
  }
  FUNC_2(VAR_1);
  return VAR_4;
 }
}
