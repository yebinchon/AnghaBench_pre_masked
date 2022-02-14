
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
struct TYPE_5__ {int (* op_d1 ) (int *,TYPE_2__*,float,float,float,float,float,float) ;} ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,float,float,float,float,float,float) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 pdf_filter_processor *VAR_8 = (pdf_filter_processor*)VAR_1;
 FUNC_0(VAR_0, VAR_8, 0);
 if (VAR_8->chain->op_d1)
  VAR_8->chain->op_d1(VAR_0, VAR_8->chain, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
