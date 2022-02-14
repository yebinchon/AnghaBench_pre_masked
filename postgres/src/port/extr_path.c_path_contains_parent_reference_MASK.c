
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int * FUNC_4 (char const*,char*) ;

bool
FUNC_5(const char *VAR_0)
{
 int VAR_1;

 VAR_0 = FUNC_0(VAR_0);

 VAR_1 = FUNC_2(VAR_0);





 if (FUNC_1(VAR_0, "..") == 0 ||
  FUNC_3(VAR_0, "../", 3) == 0 ||
  FUNC_4(VAR_0, "/../") != ((void*)0) ||
  (VAR_1 >= 3 && FUNC_1(VAR_0 + VAR_1 - 3, "/..") == 0))
  return 1;

 return 0;
}
