
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev_size; } ;
struct free_block {int size; int prev_size; TYPE_1__ header; struct free_block* next; } ;
struct block_header {int size; int prev_size; TYPE_1__ header; struct block_header* next; } ;
typedef int sljit_uw ;


 int FUNC_0 (int) ;
 struct free_block* FUNC_1 (struct free_block*,int) ;
 struct free_block* FUNC_2 (struct free_block*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (struct free_block*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct free_block* VAR_3 ;
 int FUNC_7 (struct free_block*,int) ;
 int FUNC_8 (struct free_block*) ;
 int VAR_4 ;

void* FUNC_9(sljit_uw VAR_5)
{
 struct block_header *VAR_6;
 struct block_header *VAR_7;
 struct free_block *VAR_8;
 sljit_uw VAR_9;

 FUNC_5();
 if (VAR_5 < (64 - sizeof(struct block_header)))
  VAR_5 = (64 - sizeof(struct block_header));
 VAR_5 = FUNC_0(VAR_5);

 VAR_8 = VAR_3;
 while (VAR_8) {
  if (VAR_8->size >= VAR_5) {
   VAR_9 = VAR_8->size;
   if (VAR_9 > VAR_5 + 64) {

    VAR_9 -= VAR_5;
    VAR_8->size = VAR_9;
    VAR_6 = FUNC_1(VAR_8, VAR_9);
    VAR_6->prev_size = VAR_9;
    FUNC_1(VAR_6, VAR_5)->prev_size = VAR_5;
   }
   else {
    FUNC_8(VAR_8);
    VAR_6 = (struct block_header*)VAR_8;
    VAR_5 = VAR_9;
   }
   VAR_2 += VAR_5;
   VAR_6->size = VAR_5;
   FUNC_6();
   return FUNC_3(VAR_6);
  }
  VAR_8 = VAR_8->next;
 }

 VAR_9 = (VAR_5 + sizeof(struct block_header) + VAR_1 - 1) & VAR_0;
 VAR_6 = (struct block_header*)FUNC_4(VAR_9);
 if (!VAR_6) {
  FUNC_6();
  return ((void*)0);
 }

 VAR_9 -= sizeof(struct block_header);
 VAR_4 += VAR_9;

 VAR_6->prev_size = 0;
 if (VAR_9 > VAR_5 + 64) {

  VAR_2 += VAR_5;
  VAR_6->size = VAR_5;
  VAR_9 -= VAR_5;

  VAR_8 = FUNC_2(VAR_6, VAR_5);
  VAR_8->header.prev_size = VAR_5;
  FUNC_7(VAR_8, VAR_9);
  VAR_7 = FUNC_1(VAR_8, VAR_9);
 }
 else {

  VAR_2 += VAR_9;
  VAR_6->size = VAR_9;
  VAR_7 = FUNC_1(VAR_6, VAR_9);
 }
 VAR_7->size = 1;
 VAR_7->prev_size = VAR_9;
 FUNC_6();
 return FUNC_3(VAR_6);
}
