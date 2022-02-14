
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct circlebuf {size_t size; size_t start_pos; size_t capacity; int * data; } ;


 int FUNC_0 (struct circlebuf*) ;
 int FUNC_1 (int *,int ,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct circlebuf *VAR_0, size_t VAR_1)
{
 VAR_0->size += VAR_1;
 FUNC_0(VAR_0);

 if (VAR_0->start_pos < VAR_1) {
  size_t VAR_2 = VAR_1 - VAR_0->start_pos;

  if (VAR_0->start_pos)
   FUNC_1(VAR_0->data, 0, VAR_0->start_pos);

  VAR_0->start_pos = VAR_0->capacity - VAR_2;
  FUNC_1((uint8_t *)VAR_0->data + VAR_0->start_pos, 0, VAR_2);
 } else {
  VAR_0->start_pos -= VAR_1;
  FUNC_1((uint8_t *)VAR_0->data + VAR_0->start_pos, 0, VAR_1);
 }
}
