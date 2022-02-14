
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0)
{
 size_t VAR_1 = FUNC_0(VAR_0, ".");

 if (VAR_1 && VAR_0[VAR_1]) {
  size_t VAR_2 = FUNC_1(VAR_0 + VAR_1 + 1, "0123456789");
  if (VAR_2 && (VAR_0[VAR_1 + VAR_2] == '.' || VAR_0[VAR_1 + VAR_2] == 0))
   VAR_0[VAR_1] = 0;
 }
 return VAR_0;
}
