
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void const uint8_t ;
struct circlebuf {size_t size; size_t capacity; void const* data; scalar_t__ start_pos; } ;


 int FUNC_0 (struct circlebuf*,size_t) ;
 int FUNC_1 (void const*,void const*,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct circlebuf *VAR_0, size_t VAR_1,
       const void *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = VAR_1 + VAR_3;
 size_t VAR_5;

 if (VAR_4 > VAR_0->size)
  FUNC_0(VAR_0, VAR_4);

 VAR_1 += VAR_0->start_pos;
 if (VAR_1 >= VAR_0->capacity)
  VAR_1 -= VAR_0->capacity;

 VAR_5 = VAR_1 + VAR_3;
 if (VAR_5 > VAR_0->capacity) {
  size_t VAR_6 = VAR_5 - VAR_0->capacity;
  size_t VAR_7 = VAR_3 - VAR_6;

  if (VAR_6)
   FUNC_1((uint8_t *)VAR_0->data + VAR_1, VAR_2, VAR_7);
  FUNC_1(VAR_0->data, (uint8_t *)VAR_2 + VAR_7, VAR_6);
 } else {
  FUNC_1((uint8_t *)VAR_0->data + VAR_1, VAR_2, VAR_3);
 }
}
