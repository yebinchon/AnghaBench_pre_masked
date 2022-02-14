
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* op_END ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ pdf_processor ;
struct TYPE_9__ {scalar_t__ gstate; } ;
typedef TYPE_2__ pdf_csi ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, pdf_csi *VAR_2)
{
 while (VAR_2->gstate > 0)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_1->op_END)
  VAR_1->op_END(VAR_0, VAR_1);
}
