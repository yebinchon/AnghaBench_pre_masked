
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_processor ;
typedef int pdf_obj ;
struct TYPE_5__ {TYPE_2__* chain; } ;
typedef TYPE_1__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_6__ {int (* op_Do_form ) (int *,TYPE_2__*,char const*,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ,char const*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,char const*,int *,int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_2, pdf_processor *VAR_3, const char *VAR_4, pdf_obj *VAR_5, pdf_obj *VAR_6)
{
 pdf_filter_processor *VAR_7 = (pdf_filter_processor*)VAR_3;
 FUNC_2(VAR_2, VAR_7, VAR_0);
 if (VAR_7->chain->op_Do_form)
  VAR_7->chain->op_Do_form(VAR_2, VAR_7->chain, VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_2, VAR_7, FUNC_0(VAR_1), VAR_4);
}
