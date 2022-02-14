
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static inline bool FUNC_2(char *VAR_0)
{
 size_t VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 > 5 && !FUNC_0(VAR_0 + VAR_1 - 5, ".unit"))
  return 1;
 if (VAR_1 > 6 && !FUNC_0(VAR_0 + VAR_1 - 6, ".scale"))
  return 1;
 if (VAR_1 > 8 && !FUNC_0(VAR_0 + VAR_1 - 8, ".per-pkg"))
  return 1;
 if (VAR_1 > 9 && !FUNC_0(VAR_0 + VAR_1 - 9, ".snapshot"))
  return 1;

 return 0;
}
