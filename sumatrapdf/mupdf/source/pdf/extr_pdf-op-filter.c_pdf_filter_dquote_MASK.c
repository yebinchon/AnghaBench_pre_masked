
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_10__ {TYPE_5__* chain; int Tm_pending; TYPE_3__* gstate; int tos; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_11__ {int (* op_Tstar ) (int *,TYPE_5__*) ;} ;
struct TYPE_7__ {float word_space; float char_space; int leading; } ;
struct TYPE_8__ {TYPE_1__ text; } ;
struct TYPE_9__ {TYPE_2__ pending; } ;


 int FUNC_0 (int *,TYPE_4__*,unsigned char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3, char *VAR_4, int VAR_5)
{


 pdf_filter_processor *VAR_6 = (pdf_filter_processor*)VAR_1;
 VAR_6->gstate->pending.text.word_space = VAR_2;
 VAR_6->gstate->pending.text.char_space = VAR_3;
 FUNC_1(&VAR_6->tos, VAR_6->gstate->pending.text.leading);



 if (!VAR_6->Tm_pending && VAR_6->chain->op_Tstar)
  VAR_6->chain->op_Tstar(VAR_0, VAR_6->chain);
 FUNC_0(VAR_0, VAR_6, (unsigned char*)VAR_4, VAR_5);
}
