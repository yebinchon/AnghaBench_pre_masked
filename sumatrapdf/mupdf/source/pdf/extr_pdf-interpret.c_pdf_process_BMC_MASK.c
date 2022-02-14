
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hidden; int (* op_BMC ) (int *,TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ pdf_processor ;
typedef int pdf_csi ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,char const*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, pdf_csi *VAR_2, const char *VAR_3)
{
 if (VAR_1->op_BMC)
  VAR_1->op_BMC(VAR_0, VAR_1, VAR_3);
 if (VAR_1->hidden > 0)
  ++VAR_1->hidden;
}
