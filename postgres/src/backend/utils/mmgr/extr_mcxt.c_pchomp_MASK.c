
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

char *
FUNC_2(const char *VAR_0)
{
 size_t VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 while (VAR_1 > 0 && VAR_0[VAR_1 - 1] == '\n')
  VAR_1--;
 return FUNC_0(VAR_0, VAR_1);
}
