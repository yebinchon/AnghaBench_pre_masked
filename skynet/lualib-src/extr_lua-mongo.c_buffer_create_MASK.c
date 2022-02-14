
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int buffer; int ptr; int cap; scalar_t__ size; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct buffer *VAR_1) {
 VAR_1->size = 0;
 VAR_1->cap = VAR_0;
 VAR_1->ptr = VAR_1->buffer;
}
