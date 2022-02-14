
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*) ;

uint32_t FUNC_1(zend_string *VAR_2, uint32_t VAR_3) {
 if (FUNC_0(VAR_2, "extract")) {
  return VAR_0;
 } else if (FUNC_0(VAR_2, "compact")) {
  return VAR_0;
 } else if (FUNC_0(VAR_2, "get_defined_vars")) {
  return VAR_0;
 } else if (FUNC_0(VAR_2, "func_num_args")) {
  return VAR_1;
 } else if (FUNC_0(VAR_2, "func_get_arg")) {
  return VAR_1;
 } else if (FUNC_0(VAR_2, "func_get_args")) {
  return VAR_1;
 } else {
  return 0;
 }
}
