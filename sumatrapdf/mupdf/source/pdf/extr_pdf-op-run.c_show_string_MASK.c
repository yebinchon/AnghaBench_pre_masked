
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int gtop; TYPE_3__* gstate; } ;
typedef TYPE_2__ pdf_run_processor ;
struct TYPE_8__ {int word_space; TYPE_4__* font; } ;
struct TYPE_10__ {TYPE_1__ text; } ;
typedef TYPE_3__ pdf_gstate ;
struct TYPE_11__ {int encoding; } ;
typedef TYPE_4__ pdf_font_desc ;
typedef int fz_context ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,unsigned char*,unsigned char*,unsigned int*) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int *,TYPE_2__*,int) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_run_processor *VAR_1, unsigned char *VAR_2, int VAR_3)
{
 pdf_gstate *VAR_4 = VAR_1->gstate + VAR_1->gtop;
 pdf_font_desc *VAR_5 = VAR_4->text.font;
 unsigned char *VAR_6 = VAR_2 + VAR_3;
 unsigned int VAR_7;
 int VAR_8;

 while (VAR_2 < VAR_6)
 {
  int VAR_9 = FUNC_1(VAR_5->encoding, VAR_2, VAR_6, &VAR_7);
  VAR_2 += VAR_9;

  VAR_8 = FUNC_2(VAR_5->encoding, VAR_7);
  if (VAR_8 >= 0)
   FUNC_3(VAR_0, VAR_1, VAR_8);
  else
   FUNC_0(VAR_0, "cannot encode character");
  if (VAR_7 == 32 && VAR_9 == 1)
   FUNC_4(VAR_0, VAR_1, VAR_4->text.word_space);
 }
}
