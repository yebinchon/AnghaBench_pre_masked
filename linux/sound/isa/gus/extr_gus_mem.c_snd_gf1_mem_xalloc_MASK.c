
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gf1_mem_block {scalar_t__ ptr; struct snd_gf1_mem_block* next; struct snd_gf1_mem_block* prev; } ;
struct snd_gf1_mem {struct snd_gf1_mem_block* last; struct snd_gf1_mem_block* first; int memory_mutex; } ;


 int VAR_0 ;
 struct snd_gf1_mem_block* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct snd_gf1_mem_block *FUNC_2(struct snd_gf1_mem * VAR_1,
            struct snd_gf1_mem_block * VAR_2)
{
 struct snd_gf1_mem_block *VAR_3, *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct snd_gf1_mem_block), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 *VAR_4 = *VAR_2;
 VAR_3 = VAR_1->first;
 while (VAR_3) {
  if (VAR_3->ptr > VAR_4->ptr) {
   VAR_4->prev = VAR_3->prev;
   VAR_4->next = VAR_3;
   VAR_3->prev = VAR_4;
   if (VAR_3 == VAR_1->first)
    VAR_1->first = VAR_4;
   else
    VAR_4->prev->next = VAR_4;
   FUNC_1(&VAR_1->memory_mutex);
   return ((void*)0);
  }
  VAR_3 = VAR_3->next;
 }
 VAR_4->next = ((void*)0);
 if (VAR_1->last == ((void*)0)) {
  VAR_4->prev = ((void*)0);
  VAR_1->first = VAR_1->last = VAR_4;
 } else {
  VAR_4->prev = VAR_1->last;
  VAR_1->last->next = VAR_4;
  VAR_1->last = VAR_4;
 }
 return VAR_4;
}
