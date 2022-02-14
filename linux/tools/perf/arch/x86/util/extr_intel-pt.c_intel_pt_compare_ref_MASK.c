
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,size_t,void*,size_t,size_t) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, size_t VAR_1,
     size_t VAR_2, size_t VAR_3,
     void *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = VAR_1 + VAR_2;

 if (VAR_6 > VAR_3) {
  if (VAR_5 > VAR_1 || VAR_5 < VAR_6 - VAR_3)
   return 1;
 } else if (VAR_5 > VAR_1 && VAR_5 < VAR_6) {
  return 1;
 }

 return FUNC_0(VAR_0, VAR_2, VAR_4, VAR_1,
     VAR_3);
}
