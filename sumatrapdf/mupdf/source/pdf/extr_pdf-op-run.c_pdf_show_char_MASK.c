
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int text_mode; int text; } ;
struct TYPE_13__ {int gtop; TYPE_4__ tos; int default_cs; int dev; TYPE_2__* gstate; } ;
typedef TYPE_1__ pdf_run_processor ;
struct TYPE_17__ {int render; TYPE_3__* font; } ;
struct TYPE_14__ {int ctm; TYPE_7__ text; } ;
typedef TYPE_2__ pdf_gstate ;
struct TYPE_15__ {size_t cid_to_ucs_len; int* cid_to_ucs; int wmode; int font; scalar_t__ to_unicode; } ;
typedef TYPE_3__ pdf_font_desc ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int ,int,int ,TYPE_2__*,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int,int,int ,int ,int ,int ) ;
 TYPE_2__* FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int,int*) ;
 int FUNC_6 (int *,TYPE_4__*,TYPE_7__*,TYPE_3__*,int,int *) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 int FUNC_8 (int *,TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_3, pdf_run_processor *VAR_4, int VAR_5)
{
 pdf_gstate *VAR_6 = VAR_4->gstate + VAR_4->gtop;
 pdf_font_desc *VAR_7 = VAR_6->text.font;
 fz_matrix VAR_8;
 int VAR_9;
 int VAR_10[8];
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_6(VAR_3, &VAR_4->tos, &VAR_6->text, VAR_7, VAR_5, &VAR_8);


 VAR_13 = !FUNC_1(VAR_3, VAR_7->font, VAR_9);


 if (!VAR_4->tos.text || VAR_6->text.render != VAR_4->tos.text_mode || VAR_13)
 {
  VAR_6 = FUNC_4(VAR_3, VAR_4);
  FUNC_8(VAR_3, &VAR_4->tos, VAR_6->text.render);
 }

 if (VAR_13)
 {



  fz_matrix VAR_14 = FUNC_0(VAR_8, VAR_6->ctm);
  FUNC_2(VAR_3, VAR_4->dev, VAR_7->font, VAR_9, VAR_14, VAR_6, VAR_4->default_cs);

  VAR_4->tos.text_mode = 3;
 }

 VAR_11 = 0;
 if (VAR_7->to_unicode)
  VAR_11 = FUNC_5(VAR_7->to_unicode, VAR_5, VAR_10);
 if (VAR_11 == 0 && (size_t)VAR_5 < VAR_7->cid_to_ucs_len)
 {
  VAR_10[0] = VAR_7->cid_to_ucs[VAR_5];
  VAR_11 = 1;
 }
 if (VAR_11 == 0 || (VAR_11 == 1 && VAR_10[0] == 0))
 {
  VAR_10[0] = VAR_2;
  VAR_11 = 1;
 }


 FUNC_3(VAR_3, VAR_4->tos.text, VAR_7->font, VAR_8, VAR_9, VAR_10[0], VAR_7->wmode, 0, VAR_0, VAR_1);


 for (VAR_12 = 1; VAR_12 < VAR_11; VAR_12++)
  FUNC_3(VAR_3, VAR_4->tos.text, VAR_7->font, VAR_8, -1, VAR_10[VAR_12], VAR_7->wmode, 0, VAR_0, VAR_1);

 FUNC_7(VAR_3, &VAR_4->tos);
}
