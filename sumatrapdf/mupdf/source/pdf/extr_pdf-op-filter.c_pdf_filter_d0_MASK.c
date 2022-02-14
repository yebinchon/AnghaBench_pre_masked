
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_4__ {TYPE_2__* chain; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_5__ {int (* op_d0 ) (int *,TYPE_2__*,float,float) ;} ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,float,float) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3)
{
 pdf_filter_processor *VAR_4 = (pdf_filter_processor*)VAR_1;
 FUNC_0(VAR_0, VAR_4, 0);
 if (VAR_4->chain->op_d0)
  VAR_4->chain->op_d0(VAR_0, VAR_4->chain, VAR_2, VAR_3);
}
