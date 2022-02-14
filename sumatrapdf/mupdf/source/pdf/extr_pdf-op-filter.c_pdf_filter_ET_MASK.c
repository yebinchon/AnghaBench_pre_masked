
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_13__ {TYPE_5__* chain; int doc; int opaque; int (* after_text ) (int *,int ,int ,TYPE_5__*,int ) ;TYPE_3__* gstate; scalar_t__ BT_pending; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_14__ {int (* op_Q ) (int *,TYPE_5__*) ;int (* op_q ) (int *,TYPE_5__*) ;int (* op_ET ) (int *,TYPE_5__*) ;} ;
struct TYPE_11__ {int ctm; } ;
struct TYPE_10__ {int ctm; } ;
struct TYPE_12__ {TYPE_2__ sent; TYPE_1__ pending; } ;


 int FUNC_0 (int *,TYPE_4__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_5__*) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (int *,int ,int ,TYPE_5__*,int ) ;
 int FUNC_5 (int *,TYPE_5__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, pdf_processor *VAR_1)
{
 pdf_filter_processor *VAR_2 = (pdf_filter_processor*)VAR_1;

 if (!VAR_2->BT_pending)
 {
  FUNC_0(VAR_0, VAR_2, 0);
  if (VAR_2->chain->op_ET)
   VAR_2->chain->op_ET(VAR_0, VAR_2->chain);
 }
 VAR_2->BT_pending = 0;
 if (VAR_2->after_text)
 {
  fz_matrix VAR_3 = FUNC_1(VAR_2->gstate->pending.ctm, VAR_2->gstate->sent.ctm);
  if (VAR_2->chain->op_q)
   VAR_2->chain->op_q(VAR_0, VAR_2->chain);
  VAR_2->after_text(VAR_0, VAR_2->opaque, VAR_2->doc, VAR_2->chain, VAR_3);
  if (VAR_2->chain->op_Q)
   VAR_2->chain->op_Q(VAR_0, VAR_2->chain);
 }
}
