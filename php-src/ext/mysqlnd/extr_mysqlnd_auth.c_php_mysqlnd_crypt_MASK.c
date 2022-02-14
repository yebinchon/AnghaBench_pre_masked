
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_uchar ;



__attribute__((used)) static void
FUNC_0(zend_uchar *VAR_0, const zend_uchar *VAR_1, const zend_uchar *VAR_2, size_t VAR_3)
{
 const zend_uchar *VAR_4 = VAR_1 + VAR_3;
 while (VAR_1 < VAR_4) {
  *VAR_0++= *VAR_1++ ^ *VAR_2++;
 }
}
