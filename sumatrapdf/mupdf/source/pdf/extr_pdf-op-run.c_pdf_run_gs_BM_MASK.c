
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_3__ {int blendmode; } ;
typedef TYPE_1__ pdf_gstate ;
typedef int fz_context ;


 int FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, const char *VAR_2)
{
 pdf_run_processor *VAR_3 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_4 = FUNC_1(VAR_0, VAR_3);
 VAR_4->blendmode = FUNC_0(VAR_2);
}
