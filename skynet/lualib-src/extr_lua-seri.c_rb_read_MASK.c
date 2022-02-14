
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_block {int len; int ptr; void* buffer; } ;



__attribute__((used)) static void *
FUNC_0(struct read_block *VAR_0, int VAR_1) {
 if (VAR_0->len < VAR_1) {
  return ((void*)0);
 }

 int VAR_2 = VAR_0->ptr;
 VAR_0->ptr += VAR_1;
 VAR_0->len -= VAR_1;
 return VAR_0->buffer + VAR_2;
}
