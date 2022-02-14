
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_ulong ;
typedef int* zend_bitset ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(zend_bitset VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = VAR_2;

 while (VAR_3 > 0) {
  VAR_3--;
  if (VAR_1[VAR_3]) {
   int VAR_4 = VAR_0 * 8 * VAR_3 - 1;
   zend_ulong VAR_5 = VAR_1[VAR_3];
   while (VAR_5 != FUNC_0(0)) {
    VAR_5 = VAR_5 >> FUNC_0(1);
    VAR_4++;
   }
   return VAR_4;
  }
 }
 return -1;
}
