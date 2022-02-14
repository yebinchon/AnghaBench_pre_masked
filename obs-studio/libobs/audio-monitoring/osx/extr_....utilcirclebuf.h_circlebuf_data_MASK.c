
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
struct circlebuf {size_t start_pos; size_t size; size_t capacity; scalar_t__ data; } ;



__attribute__((used)) static inline void *FUNC_0(struct circlebuf *VAR_0, size_t VAR_1)
{
 uint8_t *VAR_2 = (uint8_t *)VAR_0->data;
 size_t VAR_3 = VAR_0->start_pos + VAR_1;

 if (VAR_1 >= VAR_0->size)
  return ((void*)0);

 if (VAR_3 >= VAR_0->capacity)
  VAR_3 -= VAR_0->capacity;

 return VAR_2 + VAR_3;
}
