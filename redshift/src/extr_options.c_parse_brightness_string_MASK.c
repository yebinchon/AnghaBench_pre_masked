
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static void
FUNC_2(
 const char *VAR_0, float *VAR_1, float *VAR_2)
{
 char *VAR_3 = FUNC_1(VAR_0, ':');
 if (VAR_3 == ((void*)0)) {

  *VAR_1 = *VAR_2 = FUNC_0(VAR_0);
 } else {
  *(VAR_3++) = '\0';
  *VAR_1 = FUNC_0(VAR_0);
  *VAR_2 = FUNC_0(VAR_3);
 }
}
