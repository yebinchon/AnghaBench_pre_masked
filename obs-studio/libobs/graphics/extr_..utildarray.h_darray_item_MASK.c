
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct darray {scalar_t__ array; } ;



__attribute__((used)) static inline void *FUNC_0(const size_t VAR_0,
    const struct darray *VAR_1, size_t VAR_2)
{
 return (void *)(((uint8_t *)VAR_1->array) + VAR_0 * VAR_2);
}
