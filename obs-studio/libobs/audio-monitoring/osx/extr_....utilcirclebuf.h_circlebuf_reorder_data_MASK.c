
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct circlebuf {scalar_t__ start_pos; scalar_t__ end_pos; size_t capacity; scalar_t__ data; int size; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct circlebuf *VAR_0,
       size_t VAR_1)
{
 size_t VAR_2;
 uint8_t *VAR_3;

 if (!VAR_0->size || !VAR_0->start_pos || VAR_0->end_pos > VAR_0->start_pos)
  return;

 VAR_2 = VAR_1 - VAR_0->capacity;
 VAR_3 = (uint8_t *)VAR_0->data + VAR_0->start_pos;
 FUNC_0(VAR_3 + VAR_2, VAR_3, VAR_0->capacity - VAR_0->start_pos);
 VAR_0->start_pos += VAR_2;
}
