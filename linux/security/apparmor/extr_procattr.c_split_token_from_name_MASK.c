
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,char const*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_1, char *VAR_2, u64 *VAR_3)
{
 char *VAR_4;

 *VAR_3 = FUNC_2(VAR_2, &VAR_4, 16);
 if ((VAR_4 == VAR_2) || *VAR_4 != '^') {
  FUNC_0("%s: Invalid input '%s'", VAR_1, VAR_2);
  return FUNC_1(-VAR_0);
 }

 VAR_4++;
 if (!*VAR_4)
  VAR_4 = ((void*)0);
 return VAR_4;
}
