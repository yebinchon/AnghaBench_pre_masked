
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_9__ {TYPE_5__* chain; int Tm_pending; TYPE_3__* gstate; int tos; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_10__ {int (* op_Tstar ) (int *,TYPE_5__*) ;} ;
struct TYPE_6__ {int leading; } ;
struct TYPE_7__ {TYPE_1__ text; } ;
struct TYPE_8__ {TYPE_2__ pending; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1)
{
 pdf_filter_processor *VAR_2 = (pdf_filter_processor*)VAR_1;
 FUNC_0(&VAR_2->tos, VAR_2->gstate->pending.text.leading);



 if (!VAR_2->Tm_pending && VAR_2->chain->op_Tstar)
  VAR_2->chain->op_Tstar(VAR_0, VAR_2->chain);
}
