
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* gstate; TYPE_3__* chain; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_8__ {int pushed; int * next; } ;
typedef TYPE_2__ filter_gstate ;
struct TYPE_9__ {int (* op_q ) (int *,TYPE_3__*) ;} ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static filter_gstate *
FUNC_2(fz_context *VAR_0, pdf_filter_processor *VAR_1)
{
 filter_gstate *VAR_2 = VAR_1->gstate;


 if (VAR_2->next != ((void*)0))
  return VAR_2;


 FUNC_0(VAR_0, VAR_1);
 VAR_2 = VAR_1->gstate;
 VAR_2->pushed = 1;
 if (VAR_1->chain->op_q)
  VAR_1->chain->op_q(VAR_0, VAR_1->chain);

 return VAR_1->gstate;
}
