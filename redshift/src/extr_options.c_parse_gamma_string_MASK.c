
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, float VAR_1[])
{
 char *VAR_2 = FUNC_1(VAR_0, ':');
 if (VAR_2 == ((void*)0)) {

  float VAR_3 = FUNC_0(VAR_0);
  VAR_1[0] = VAR_1[1] = VAR_1[2] = VAR_3;
 } else {

  *(VAR_2++) = '\0';
  char *VAR_4 = VAR_2;
  VAR_2 = FUNC_1(VAR_2, ':');
  if (VAR_2 == ((void*)0)) return -1;

  *(VAR_2++) = '\0';
  VAR_1[0] = FUNC_0(VAR_0);
  VAR_1[1] = FUNC_0(VAR_4);
  VAR_1[2] = FUNC_0(VAR_2);
 }

 return 0;
}
