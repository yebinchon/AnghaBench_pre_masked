
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_2 (const char **VAR_0, char **VAR_1, const char *VAR_2, char VAR_3) {
 size_t VAR_4 = FUNC_0 (VAR_2);

 if (FUNC_1 (*VAR_0, VAR_2, VAR_4)) {
  return 0;
 }

 **VAR_1 = VAR_3;

 *VAR_0 += VAR_4;
 *VAR_1 += 1;

 return 1;
}
