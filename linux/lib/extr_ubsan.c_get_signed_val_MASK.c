
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_descriptor {int dummy; } ;
typedef unsigned int s_max ;
typedef unsigned int s64 ;


 scalar_t__ FUNC_0 (struct type_descriptor*) ;
 int FUNC_1 (struct type_descriptor*) ;

__attribute__((used)) static s_max FUNC_2(struct type_descriptor *VAR_0, void *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  unsigned VAR_2 = sizeof(s_max)*8 - FUNC_1(VAR_0);
  unsigned long VAR_3 = (unsigned long)VAR_1;

  return ((s_max)VAR_3) << VAR_2 >> VAR_2;
 }

 if (FUNC_1(VAR_0) == 64)
  return *(s64 *)VAR_1;

 return *(s_max *)VAR_1;
}
