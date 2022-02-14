
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* zend_bitset ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(zend_bitset VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3]) {
   return VAR_0 * 8 * VAR_3 + FUNC_0(VAR_1[VAR_3]);
  }
 }
 return -1;
}
