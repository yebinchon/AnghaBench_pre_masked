
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int gtop; TYPE_3__* gstate; } ;
typedef TYPE_2__ pdf_run_processor ;
struct TYPE_6__ {int * font; } ;
struct TYPE_8__ {TYPE_1__ text; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int pdf_font_desc ;
typedef int fz_context ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_2__*,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_run_processor *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 pdf_gstate *VAR_4 = VAR_1->gstate + VAR_1->gtop;
 pdf_font_desc *VAR_5 = VAR_4->text.font;

 if (!VAR_5)
 {
  FUNC_0(VAR_0, "cannot draw text since font and size not set");
  return;
 }

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
