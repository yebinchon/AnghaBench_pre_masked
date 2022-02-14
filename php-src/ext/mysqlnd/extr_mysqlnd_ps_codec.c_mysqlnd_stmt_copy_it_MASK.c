
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int enum_func_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (unsigned int,int) ;

__attribute__((used)) static enum_func_status
FUNC_2(zval ** VAR_2, zval * VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 if (!*VAR_2) {
  *VAR_2 = FUNC_1(VAR_4, sizeof(zval));
 }
 if (*VAR_2) {
  FUNC_0(&(*VAR_2)[VAR_5], VAR_3);
  return VAR_1;
 }
 return VAR_0;
}
