
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linked_page {void* data; struct linked_page* next; } ;
struct chain_allocator {unsigned int used_space; struct linked_page* chain; int gfp_mask; scalar_t__ safe_needed; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct linked_page* FUNC_0 (int ) ;
 struct linked_page* FUNC_1 (int ,int ) ;

__attribute__((used)) static void *FUNC_2(struct chain_allocator *VAR_2, unsigned int VAR_3)
{
 void *VAR_4;

 if (VAR_0 - VAR_2->used_space < VAR_3) {
  struct linked_page *VAR_5;

  VAR_5 = VAR_2->safe_needed ? FUNC_0(VAR_2->gfp_mask) :
     FUNC_1(VAR_2->gfp_mask, VAR_1);
  if (!VAR_5)
   return ((void*)0);

  VAR_5->next = VAR_2->chain;
  VAR_2->chain = VAR_5;
  VAR_2->used_space = 0;
 }
 VAR_4 = VAR_2->chain->data + VAR_2->used_space;
 VAR_2->used_space += VAR_3;
 return VAR_4;
}
