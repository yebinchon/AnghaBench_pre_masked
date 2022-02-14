
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gtop; TYPE_3__* gstate; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_4__ {float size; int font; } ;
struct TYPE_6__ {TYPE_1__ text; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int pdf_font_desc ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, const char *VAR_2, pdf_font_desc *VAR_3, float VAR_4)
{
 pdf_run_processor *VAR_5 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_6 = VAR_5->gstate + VAR_5->gtop;
 FUNC_0(VAR_0, VAR_6->text.font);
 VAR_6->text.font = FUNC_1(VAR_0, VAR_3);
 VAR_6->text.size = VAR_4;
}
