
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ft2_source {int * draw_effect; int * vbuf; int * tex; struct ft2_source* text_file; struct ft2_source* colorbuf; struct ft2_source* texbuf; struct ft2_source* text; struct ft2_source* font_style; struct ft2_source* font_name; struct ft2_source** cacheglyphs; int * font_face; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ft2_source*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
 struct ft2_source *VAR_2 = VAR_1;

 if (VAR_2->font_face != ((void*)0)) {
  FUNC_0(VAR_2->font_face);
  VAR_2->font_face = ((void*)0);
 }

 for (uint32_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->cacheglyphs[VAR_3] != ((void*)0)) {
   FUNC_1(VAR_2->cacheglyphs[VAR_3]);
   VAR_2->cacheglyphs[VAR_3] = ((void*)0);
  }
 }

 if (VAR_2->font_name != ((void*)0))
  FUNC_1(VAR_2->font_name);
 if (VAR_2->font_style != ((void*)0))
  FUNC_1(VAR_2->font_style);
 if (VAR_2->text != ((void*)0))
  FUNC_1(VAR_2->text);
 if (VAR_2->texbuf != ((void*)0))
  FUNC_1(VAR_2->texbuf);
 if (VAR_2->colorbuf != ((void*)0))
  FUNC_1(VAR_2->colorbuf);
 if (VAR_2->text_file != ((void*)0))
  FUNC_1(VAR_2->text_file);

 FUNC_5();

 if (VAR_2->tex != ((void*)0)) {
  FUNC_3(VAR_2->tex);
  VAR_2->tex = ((void*)0);
 }
 if (VAR_2->vbuf != ((void*)0)) {
  FUNC_4(VAR_2->vbuf);
  VAR_2->vbuf = ((void*)0);
 }
 if (VAR_2->draw_effect != ((void*)0)) {
  FUNC_2(VAR_2->draw_effect);
  VAR_2->draw_effect = ((void*)0);
 }

 FUNC_6();

 FUNC_1(VAR_2);
}
