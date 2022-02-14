
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_uchar ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

uint64_t
FUNC_3(const zend_uchar **VAR_1)
{
 register const zend_uchar *VAR_2 = (zend_uchar *)*VAR_1;

 if (*VAR_2 < 251) {
  (*VAR_1)++;
  return (uint64_t) *VAR_2;
 }

 switch (*VAR_2) {
  case 251:
   (*VAR_1)++;
   return (uint64_t) VAR_0;
  case 252:
   (*VAR_1) += 3;
   return (uint64_t) FUNC_0(VAR_2 + 1);
  case 253:
   (*VAR_1) += 4;
   return (uint64_t) FUNC_1(VAR_2 + 1);
  default:
   (*VAR_1) += 9;
   return (uint64_t) FUNC_2(VAR_2 + 1);
 }
}
