
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;

 if (VAR_0 == ((void*)0))
  return (((void*)0));

 VAR_2 = FUNC_2(VAR_0) + 1;
 VAR_1 = (char *) FUNC_0(VAR_2);
 if (VAR_1 != ((void*)0))
  (void) FUNC_1(VAR_1, VAR_0, VAR_2);
 return (VAR_1);
}
