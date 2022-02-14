
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct circlebuf {size_t size; size_t end_pos; size_t capacity; int * data; } ;


 int FUNC_0 (struct circlebuf*) ;
 int FUNC_1 (int *,int ,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct circlebuf *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = VAR_1 - VAR_0->size;
 size_t VAR_3 = VAR_0->end_pos + VAR_2;

 if (VAR_1 <= VAR_0->size)
  return;

 VAR_0->size = VAR_1;
 FUNC_0(VAR_0);

 if (VAR_3 > VAR_0->capacity) {
  size_t VAR_4 = VAR_0->capacity - VAR_0->end_pos;
  size_t VAR_5 = VAR_2 - VAR_4;

  if (VAR_4)
   FUNC_1((uint8_t *)VAR_0->data + VAR_0->end_pos, 0, VAR_4);

  FUNC_1(VAR_0->data, 0, VAR_5);
  VAR_3 -= VAR_0->capacity;
 } else {
  FUNC_1((uint8_t *)VAR_0->data + VAR_0->end_pos, 0, VAR_2);
 }

 VAR_0->end_pos = VAR_3;
}
