
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* zend_bitset ;
typedef size_t uint32_t ;



__attribute__((used)) static inline void FUNC_0(zend_bitset VAR_0, zend_bitset VAR_1, zend_bitset VAR_2, zend_bitset VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_0[VAR_5] = VAR_1[VAR_5] | (VAR_2[VAR_5] & VAR_3[VAR_5]);
 }
}
