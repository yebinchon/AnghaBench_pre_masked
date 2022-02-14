
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lola {int granularity; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static bool FUNC_0(struct lola *VAR_5,
        unsigned int VAR_6,
        unsigned int VAR_7)
{
 if (!VAR_5->granularity)
  return 1;

 if (VAR_6 < VAR_1 || VAR_6 > VAR_0 ||
     (VAR_6 % VAR_2) != 0)
  return 0;

 if (VAR_6 == VAR_1) {
  if (VAR_7 > VAR_4)
   return 0;
 } else if (VAR_6 < VAR_0) {
  if (VAR_7 > VAR_3)
   return 0;
 }
 return 1;
}
