
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned long *VAR_0,
          unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (FUNC_0(VAR_0[VAR_2])) {

   return VAR_2 + 1;
  }
 }
 return VAR_1;
}
