
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_xml ;


 char* FUNC_0 (int *,char const*) ;
 int FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_4(fz_xml *VAR_0, const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_0(VAR_0, VAR_1);
 const char *VAR_4;
 size_t VAR_5;
 if (VAR_3) {

  if (!FUNC_1(VAR_3, VAR_2))
   return 1;


  VAR_5 = FUNC_2(VAR_2);
  VAR_4 = FUNC_3(VAR_3, VAR_2);
  if (VAR_4 && (VAR_4[VAR_5] == ' ' || VAR_4[VAR_5] == 0) && (VAR_4 == VAR_3 || VAR_4[-1] == ' '))
   return 1;
 }
 return 0;
}
