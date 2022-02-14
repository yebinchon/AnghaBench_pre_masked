
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int gtop; TYPE_3__* gstate; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_obj ;
struct TYPE_8__ {float size; int * font; } ;
struct TYPE_10__ {TYPE_1__ text; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int pdf_font_desc ;
typedef int fz_context ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_2__*,float) ;
 int FUNC_6 (int *,TYPE_2__*,unsigned char*,int ) ;
 float FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_2__*,unsigned char*,int ) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_0, pdf_run_processor *VAR_1, pdf_obj *VAR_2)
{
 pdf_gstate *VAR_3 = VAR_1->gstate + VAR_1->gtop;
 pdf_font_desc *VAR_4 = VAR_3->text.font;
 int VAR_5;

 if (!VAR_4)
 {
  FUNC_0(VAR_0, "cannot draw text since font and size not set");
  return;
 }

 if (FUNC_3(VAR_0, VAR_2))
 {
  int VAR_6 = FUNC_2(VAR_0, VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  {
   pdf_obj *VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_5);
   if (FUNC_4(VAR_0, VAR_7))
    FUNC_10(VAR_0, VAR_1, (unsigned char *)FUNC_8(VAR_0, VAR_7), FUNC_9(VAR_0, VAR_7));
   else
    FUNC_5(VAR_0, VAR_1, - FUNC_7(VAR_0, VAR_7) * VAR_3->text.size * 0.001f);
  }
 }
 else if (FUNC_4(VAR_0, VAR_2))
 {
  FUNC_6(VAR_0, VAR_1, (unsigned char *)FUNC_8(VAR_0, VAR_2), FUNC_9(VAR_0, VAR_2));
 }
}
