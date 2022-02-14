
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ft2_source {scalar_t__* text; int custom_width; int cx; int font_face; int word_wrap; int * vbuf; int max_h; int cy; } ;
typedef int gs_vertbuffer_t ;
struct TYPE_2__ {scalar_t__ xadv; } ;
typedef int FT_UInt ;


 int FUNC_0 (int ,int) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (struct ft2_source*) ;
 int FUNC_3 (scalar_t__*,struct ft2_source*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_7 (scalar_t__*) ;

void FUNC_8(struct ft2_source *VAR_1)
{
 FT_UInt VAR_2 = 0;
 uint32_t VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 size_t VAR_6;

 if (!VAR_1->text)
  return;

 if (VAR_1->custom_width >= 100)
  VAR_1->cx = VAR_1->custom_width;
 else
  VAR_1->cx = FUNC_3(VAR_1->text, VAR_1);
 VAR_1->cy = VAR_1->max_h;

 FUNC_5();
 if (VAR_1->vbuf != ((void*)0)) {
  gs_vertbuffer_t *VAR_7 = VAR_1->vbuf;
  VAR_1->vbuf = ((void*)0);
  FUNC_4(VAR_7);
 }

 if (*VAR_1->text == 0) {
  FUNC_6();
  return;
 }

 VAR_1->vbuf =
  FUNC_1((uint32_t)FUNC_7(VAR_1->text) * 6, 1);

 if (VAR_1->custom_width <= 100)
  goto skip_word_wrap;
 if (!VAR_1->word_wrap)
  goto skip_word_wrap;

 VAR_6 = FUNC_7(VAR_1->text);

 for (uint32_t VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++) {
  if (VAR_8 == FUNC_7(VAR_1->text))
   goto eos_check;

  if (VAR_1->text[VAR_8] != L' ' && VAR_1->text[VAR_8] != L'\n')
   goto next_char;

 eos_check:;
  if (VAR_3 + VAR_5 > VAR_1->custom_width) {
   if (VAR_4 != 0)
    VAR_1->text[VAR_4] = L'\n';
   VAR_3 = 0;
  }
  if (VAR_8 == FUNC_7(VAR_1->text))
   goto eos_skip;

  VAR_3 += VAR_5;
  VAR_5 = 0;
  if (VAR_1->text[VAR_8] == L'\n')
   VAR_3 = 0;
  if (VAR_1->text[VAR_8] == L' ')
   VAR_4 = VAR_8;
 next_char:;
  VAR_2 =
   FUNC_0(VAR_1->font_face, VAR_1->text[VAR_8]);
  VAR_5 += VAR_0->xadv;
 eos_skip:;
 }

skip_word_wrap:;
 FUNC_2(VAR_1);
 FUNC_6();
}
