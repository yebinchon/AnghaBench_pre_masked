
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prev_size; } ;
struct free_block {scalar_t__ size; TYPE_1__ header; struct free_block* next; } ;
struct block_header {int dummy; } ;
struct TYPE_4__ {int size; } ;


 TYPE_2__* FUNC_0 (struct free_block*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct free_block* VAR_0 ;
 int FUNC_4 (struct free_block*,scalar_t__) ;
 int FUNC_5 (struct free_block*) ;
 scalar_t__ VAR_1 ;

void FUNC_6(void)
{
 struct free_block* VAR_2;
 struct free_block* VAR_3;

 FUNC_2();

 VAR_2 = VAR_0;
 while (VAR_2) {
  VAR_3 = VAR_2->next;
  if (!VAR_2->header.prev_size &&
    FUNC_0(VAR_2, VAR_2->size)->size == 1) {
   VAR_1 -= VAR_2->size;
   FUNC_5(VAR_2);
   FUNC_4(VAR_2, VAR_2->size + sizeof(struct block_header));
  }
  VAR_2 = VAR_3;
 }

 FUNC_1((VAR_1 && VAR_0) || (!VAR_1 && !VAR_0));
 FUNC_3();
}
