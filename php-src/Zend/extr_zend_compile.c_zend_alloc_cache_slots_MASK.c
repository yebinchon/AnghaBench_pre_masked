
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int cache_size; } ;
typedef TYPE_1__ zend_op_array ;
typedef unsigned int uint32_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_1(unsigned VAR_1) {
 if (VAR_1 == 0) {
  return (uint32_t) -1;
 }

 zend_op_array *VAR_2 = FUNC_0(VAR_0);
 uint32_t VAR_3 = VAR_2->cache_size;
 VAR_2->cache_size += VAR_1 * sizeof(void*);
 return VAR_3;
}
