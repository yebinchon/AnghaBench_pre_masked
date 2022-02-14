
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_3__ {TYPE_2__* chain; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_4__ {int (* op_gs_end ) (int *,TYPE_2__*) ;} ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1)
{
 pdf_filter_processor *VAR_2 = (pdf_filter_processor*)VAR_1;
 if (VAR_2->chain->op_gs_end)
  VAR_2->chain->op_gs_end(VAR_0, VAR_2->chain);
}
