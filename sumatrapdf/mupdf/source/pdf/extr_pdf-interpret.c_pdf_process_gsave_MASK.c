
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* op_q ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ pdf_processor ;
struct TYPE_7__ {int gstate; } ;
typedef TYPE_2__ pdf_csi ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, pdf_csi *VAR_2)
{
 if (VAR_1->op_q)
  VAR_1->op_q(VAR_0, VAR_1);
 ++VAR_2->gstate;
}
