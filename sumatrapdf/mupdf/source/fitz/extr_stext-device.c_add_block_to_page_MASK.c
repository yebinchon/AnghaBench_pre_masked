
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* last_block; TYPE_2__* first_block; int pool; } ;
typedef TYPE_1__ fz_stext_page ;
struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* prev; } ;
typedef TYPE_2__ fz_stext_block ;
typedef int fz_context ;


 TYPE_2__* FUNC_0 (int *,int ,int) ;

__attribute__((used)) static fz_stext_block *
FUNC_1(fz_context *VAR_0, fz_stext_page *VAR_1)
{
 fz_stext_block *VAR_2 = FUNC_0(VAR_0, VAR_1->pool, sizeof *VAR_1->first_block);
 VAR_2->prev = VAR_1->last_block;
 if (!VAR_1->first_block)
  VAR_1->first_block = VAR_1->last_block = VAR_2;
 else
 {
  VAR_1->last_block->next = VAR_2;
  VAR_1->last_block = VAR_2;
 }
 return VAR_2;
}
