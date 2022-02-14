
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*,char const*) ;
 int FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(char *VAR_1, const char *VAR_2,
       const char *VAR_3, const char *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;





 VAR_5 = 0;
 for (VAR_8 = 0; VAR_2[VAR_8] && VAR_3[VAR_8]; VAR_8++)
 {
  if (FUNC_0(VAR_2[VAR_8]) && FUNC_0(VAR_3[VAR_8]))
   VAR_5 = VAR_8 + 1;
  else if (VAR_2[VAR_8] != VAR_3[VAR_8])
   break;
 }
 if (VAR_5 == 0)
  goto no_match;
 VAR_7 = FUNC_5(VAR_3) - VAR_5;





 FUNC_4(VAR_1, VAR_4, VAR_0);
 FUNC_6(VAR_1);
 FUNC_1(VAR_1);




 VAR_6 = (int) FUNC_5(VAR_1) - VAR_7;
 if (VAR_6 > 0 &&
  FUNC_0(VAR_1[VAR_6 - 1]) &&
  FUNC_2(VAR_1 + VAR_6, VAR_3 + VAR_5) == 0)
 {
  VAR_1[VAR_6] = '\0';
  FUNC_7(VAR_1);
  FUNC_3(VAR_1, VAR_1, VAR_2 + VAR_5);
  FUNC_1(VAR_1);
  return;
 }

no_match:
 FUNC_4(VAR_1, VAR_2, VAR_0);
 FUNC_1(VAR_1);
}
