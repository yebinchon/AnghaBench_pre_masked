
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_memory_fragment {struct sljit_memory_fragment* cpool; struct sljit_memory_fragment* next; struct sljit_memory_fragment* abuf; struct sljit_memory_fragment* buf; void* allocator_data; } ;
struct sljit_compiler {struct sljit_compiler* cpool; struct sljit_compiler* next; struct sljit_compiler* abuf; struct sljit_compiler* buf; void* allocator_data; } ;


 int FUNC_0 (struct sljit_memory_fragment*,void*) ;
 int FUNC_1 (void*) ;

void FUNC_2(struct sljit_compiler *VAR_0)
{
 struct sljit_memory_fragment *VAR_1;
 struct sljit_memory_fragment *VAR_2;
 void *VAR_3 = VAR_0->allocator_data;
 FUNC_1(VAR_3);

 VAR_1 = VAR_0->buf;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2, VAR_3);
 }

 VAR_1 = VAR_0->abuf;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2, VAR_3);
 }




 FUNC_0(VAR_0, VAR_3);
}
