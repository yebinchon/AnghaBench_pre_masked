
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;
 int VAR_2 = 0;

 while ((VAR_1 = FUNC_0(VAR_1, '-')) != ((void*)0)) {
  VAR_2++;
  VAR_1++;
 }

 if (VAR_2 == 3)
  return 1;

 return 0;
}
