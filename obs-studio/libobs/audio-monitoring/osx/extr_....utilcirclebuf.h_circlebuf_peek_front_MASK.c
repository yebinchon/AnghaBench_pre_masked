
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
struct circlebuf {size_t size; size_t capacity; size_t start_pos; void* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct circlebuf *VAR_0, void *VAR_1,
     size_t VAR_2)
{
 FUNC_0(VAR_2 <= VAR_0->size);

 if (VAR_1) {
  size_t VAR_3 = VAR_0->capacity - VAR_0->start_pos;

  if (VAR_3 < VAR_2) {
   FUNC_1(VAR_1, (uint8_t *)VAR_0->data + VAR_0->start_pos,
          VAR_3);
   FUNC_1((uint8_t *)VAR_1 + VAR_3, VAR_0->data,
          VAR_2 - VAR_3);
  } else {
   FUNC_1(VAR_1, (uint8_t *)VAR_0->data + VAR_0->start_pos, VAR_2);
  }
 }
}
