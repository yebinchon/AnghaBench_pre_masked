
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;
typedef int zend_uchar ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

zend_ulong
FUNC_3(const zend_uchar **VAR_1)
{
 register const zend_uchar *VAR_2= (const zend_uchar *)*VAR_1;

 if (*VAR_2 < 251) {
  (*VAR_1)++;
  return (zend_ulong) *VAR_2;
 }

 switch (*VAR_2) {
  case 251:
   (*VAR_1)++;
   return VAR_0;
  case 252:
   (*VAR_1) += 3;
   return (zend_ulong) FUNC_0(VAR_2+1);
  case 253:
   (*VAR_1) += 4;
   return (zend_ulong) FUNC_1(VAR_2+1);
  default:
   (*VAR_1) += 9;
   return (zend_ulong) FUNC_2(VAR_2+1);
 }
}
