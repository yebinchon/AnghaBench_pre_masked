
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;



int FUNC_0(
     zend_long VAR_0)
{
 int VAR_1;

 VAR_1 = (VAR_0 + 1) % 7;
 if (VAR_1 >= 0) {
  return (VAR_1);
 } else {
  return (VAR_1 + 7);
 }
}
