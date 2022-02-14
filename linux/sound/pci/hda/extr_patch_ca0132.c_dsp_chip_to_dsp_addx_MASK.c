
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,int) ;
 unsigned int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int,int) ;

__attribute__((used)) static unsigned int FUNC_6(unsigned int VAR_1,
     bool *VAR_2, bool *VAR_3)
{
 *VAR_2 = *VAR_3 = 0;

 if (FUNC_1(VAR_1, 1)) {
  *VAR_2 = 1;
  return FUNC_0(VAR_1);
 } else if (FUNC_3(VAR_1, 1)) {
  return FUNC_2(VAR_1);
 } else if (FUNC_5(VAR_1, 1)) {
  *VAR_3 = 1;
  return FUNC_4(VAR_1);
 }

 return VAR_0;
}
