
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int font; int * data; } ;
struct TYPE_14__ {size_t nfonts; TYPE_6__** fonts; } ;
struct TYPE_13__ {size_t font; float size; int align; int spacing; scalar_t__ blur; } ;
struct TYPE_12__ {short isize; short iblur; float x; float nextx; float y; float nexty; char const* str; char const* next; char const* end; int prevGlyphIndex; scalar_t__ codepoint; int spacing; TYPE_6__* font; int scale; } ;
typedef TYPE_1__ FONStextIter ;
typedef TYPE_2__ FONSstate ;
typedef TYPE_3__ FONScontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (TYPE_3__*,float,float,char const*,char const*,int *) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_6__*,int,short) ;
 int FUNC_3 (int *,float) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char const*) ;

int FUNC_6(FONScontext* VAR_3, FONStextIter* VAR_4,
      float VAR_5, float VAR_6, const char* VAR_7, const char* VAR_8)
{
 FONSstate* VAR_9 = FUNC_1(VAR_3);
 float VAR_10;

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));

 if (VAR_3 == ((void*)0)) return 0;
 if (VAR_9->font < 0 || VAR_9->font >= VAR_3->nfonts) return 0;
 VAR_4->font = VAR_3->fonts[VAR_9->font];
 if (VAR_4->font->data == ((void*)0)) return 0;

 VAR_4->isize = (short)(VAR_9->size*10.0f);
 VAR_4->iblur = (short)VAR_9->blur;
 VAR_4->scale = FUNC_3(&VAR_4->font->font, (float)VAR_4->isize/10.0f);


 if (VAR_9->align & VAR_1) {

 } else if (VAR_9->align & VAR_2) {
  VAR_10 = FUNC_0(VAR_3, VAR_5,VAR_6, VAR_7, VAR_8, ((void*)0));
  VAR_5 -= VAR_10;
 } else if (VAR_9->align & VAR_0) {
  VAR_10 = FUNC_0(VAR_3, VAR_5,VAR_6, VAR_7, VAR_8, ((void*)0));
  VAR_5 -= VAR_10 * 0.5f;
 }

 VAR_6 += FUNC_2(VAR_3, VAR_4->font, VAR_9->align, VAR_4->isize);

 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_7 + FUNC_5(VAR_7);

 VAR_4->x = VAR_4->nextx = VAR_5;
 VAR_4->y = VAR_4->nexty = VAR_6;
 VAR_4->spacing = VAR_9->spacing;
 VAR_4->str = VAR_7;
 VAR_4->next = VAR_7;
 VAR_4->end = VAR_8;
 VAR_4->codepoint = 0;
 VAR_4->prevGlyphIndex = -1;

 return 1;
}
