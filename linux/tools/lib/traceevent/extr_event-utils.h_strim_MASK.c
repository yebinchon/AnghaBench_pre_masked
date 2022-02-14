
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline char *FUNC_2(char *VAR_0)
{
 char *VAR_1;

 if (!VAR_0)
  return ((void*)0);
 while (*VAR_0) {
  if (!FUNC_0(*VAR_0))
   break;
  VAR_0++;
 }
 VAR_1 = VAR_0;

 VAR_0 = VAR_1 + FUNC_1(VAR_1) - 1;
 while (VAR_0 > VAR_1) {
  if (!FUNC_0(*VAR_0))
   break;
  VAR_0--;
 }
 VAR_0[1] = 0;

 return VAR_1;
}
