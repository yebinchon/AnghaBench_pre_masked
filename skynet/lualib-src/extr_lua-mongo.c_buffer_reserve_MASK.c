
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int size; int cap; scalar_t__ ptr; scalar_t__ buffer; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static inline void
FUNC_3(struct buffer *VAR_0, int VAR_1) {
 if (VAR_0->size + VAR_1 <= VAR_0->cap)
  return;
 do {
  VAR_0->cap *= 2;
 } while (VAR_0->cap <= VAR_0->size + VAR_1);

 if (VAR_0->ptr == VAR_0->buffer) {
  VAR_0->ptr = FUNC_1(VAR_0->cap);
  FUNC_0(VAR_0->ptr, VAR_0->buffer, VAR_0->size);
 } else {
  VAR_0->ptr = FUNC_2(VAR_0->ptr, VAR_0->cap);
 }
}
