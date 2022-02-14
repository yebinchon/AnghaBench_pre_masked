
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* prev; int tag; int cooked; int raw; scalar_t__ bdc; } ;
typedef TYPE_1__ tag_record ;
struct TYPE_8__ {TYPE_1__* current_tags; TYPE_3__* chain; } ;
typedef TYPE_2__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_9__ {int (* op_BMC ) (int *,TYPE_3__*,int ) ;int (* op_BDC ) (int *,TYPE_3__*,int ,int ,int ) ;} ;


 int FUNC_0 (int *,TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_filter_processor *VAR_1, tag_record **VAR_2)
{
 tag_record *VAR_3 = *VAR_2;

 if (VAR_3 == ((void*)0))
  return;
 if (VAR_3->prev)
  FUNC_2(VAR_0, VAR_1, &VAR_3->prev);
 if (VAR_3->bdc)
 {
  if (VAR_1->chain->op_BDC)
   VAR_1->chain->op_BDC(VAR_0, VAR_1->chain, VAR_3->tag, VAR_3->raw, VAR_3->cooked);
 }
 else if (VAR_1->chain->op_BMC)
  VAR_1->chain->op_BMC(VAR_0, VAR_1->chain, VAR_3->tag);
 VAR_3->prev = VAR_1->current_tags;
 VAR_1->current_tags = VAR_3;
 *VAR_2 = ((void*)0);
}
