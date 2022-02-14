
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (char const*,char*) ;
 int * VAR_0 ;

bool
FUNC_3(const char *VAR_1, FILE **VAR_2, bool *VAR_3)
{
 if (!VAR_1 || VAR_1[0] == '\0')
 {
  *VAR_2 = VAR_0;
  *VAR_3 = 0;
 }
 else if (*VAR_1 == '|')
 {
  *VAR_2 = FUNC_2(VAR_1 + 1, "w");
  *VAR_3 = 1;
 }
 else
 {
  *VAR_2 = FUNC_0(VAR_1, "w");
  *VAR_3 = 0;
 }

 if (*VAR_2 == ((void*)0))
 {
  FUNC_1("%s: %m", VAR_1);
  return 0;
 }

 return 1;
}
