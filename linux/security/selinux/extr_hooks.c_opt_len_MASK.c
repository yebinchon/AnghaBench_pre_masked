
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const char *VAR_0)
{
 bool VAR_1 = 0;
 int VAR_2;
 char VAR_3;

 for (VAR_2 = 0; (VAR_3 = VAR_0[VAR_2]) != '\0'; VAR_2++) {
  if (VAR_3 == '"')
   VAR_1 = !VAR_1;
  if (VAR_3 == ',' && !VAR_1)
   break;
 }
 return VAR_2;
}
