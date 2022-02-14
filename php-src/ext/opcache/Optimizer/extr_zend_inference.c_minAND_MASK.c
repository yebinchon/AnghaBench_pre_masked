
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;


 int FUNC_0 (int) ;

zend_ulong FUNC_1(zend_ulong VAR_0, zend_ulong VAR_1, zend_ulong VAR_2, zend_ulong VAR_3)
{
 zend_ulong VAR_4, VAR_5;

 VAR_4 = FUNC_0(1) << (sizeof(zend_ulong) * 8 - 1);
 while (VAR_4 != 0) {
  if (~VAR_0 & ~VAR_2 & VAR_4) {
   VAR_5 = (VAR_0 | VAR_4) & -VAR_4;
   if (VAR_5 <= VAR_1) {
    VAR_0 = VAR_5;
    break;
   }
   VAR_5 = (VAR_2 | VAR_4) & -VAR_4;
   if (VAR_5 <= VAR_3) {
    VAR_2 = VAR_5;
    break;
   }
  }
  VAR_4 = VAR_4 >> 1;
 }
 return VAR_0 & VAR_2;
}
