
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_module_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int * const) ;

int FUNC_1(zend_module_entry * const * VAR_2, int VAR_3)
{
 zend_module_entry * const * VAR_4 = VAR_2 + VAR_3;

 while (VAR_2 < VAR_4) {
  if (*VAR_2) {
   if (FUNC_0(*VAR_2)==((void*)0)) {
    return VAR_0;
   }
  }
  VAR_2++;
 }
 return VAR_1;
}
