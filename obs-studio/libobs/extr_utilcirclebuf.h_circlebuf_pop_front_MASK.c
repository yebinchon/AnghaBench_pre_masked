
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circlebuf {scalar_t__ start_pos; scalar_t__ end_pos; scalar_t__ capacity; scalar_t__ size; } ;


 int FUNC_0 (struct circlebuf*,void*,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct circlebuf *VAR_0, void *VAR_1,
           size_t VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->size -= VAR_2;
 if (!VAR_0->size) {
  VAR_0->start_pos = VAR_0->end_pos = 0;
  return;
 }

 VAR_0->start_pos += VAR_2;
 if (VAR_0->start_pos >= VAR_0->capacity)
  VAR_0->start_pos -= VAR_0->capacity;
}
