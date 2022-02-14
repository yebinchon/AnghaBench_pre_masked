
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 int FUNC_0 (char* const,char const* const,size_t const) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char*,int) ;

void
FUNC_3(char *const VAR_0, const size_t VAR_1, const char *const VAR_2, const char *const VAR_3)
{
 char *VAR_4;
 char VAR_5[512];

 if (VAR_3[0] == '/') {
  FUNC_0(VAR_0, VAR_3, VAR_1);
  return;
 }
 VAR_4 = FUNC_2(VAR_5, (char *) VAR_2, sizeof(VAR_5) - 1);
 *VAR_4++ = '/';
 *VAR_4 = '\0';
 (void) FUNC_1(VAR_4, (char *) VAR_3, sizeof(VAR_5) - (VAR_4 - VAR_5));
 FUNC_0(VAR_0, VAR_5, VAR_1);
}
