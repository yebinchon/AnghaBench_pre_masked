
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int width; } ;
struct TYPE_14__ {unsigned char* texData; void** dirtyRect; TYPE_1__ params; scalar_t__ nscratch; int atlas; int errorUptr; int (* handleError ) (int ,int ,int ) ;TYPE_3__** fonts; } ;
struct TYPE_13__ {int* lut; int nfallbacks; size_t* fallbacks; int nglyphs; int font; TYPE_2__* glyphs; } ;
struct TYPE_12__ {unsigned int codepoint; short size; short blur; int next; scalar_t__ index; short x0; short y0; short x1; short y1; short xadv; short xoff; short yoff; } ;
typedef TYPE_2__ FONSglyph ;
typedef TYPE_3__ FONSfont ;
typedef TYPE_4__ FONScontext ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int,int,int*,int*) ;
 int FUNC_2 (TYPE_4__*,unsigned char*,int,int,size_t,short) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (void*,short) ;
 void* FUNC_5 (void*,size_t) ;
 int FUNC_6 (int *,int,float,float,int*,int*,int*,int*,int*,int*) ;
 int FUNC_7 (int *,unsigned int) ;
 float FUNC_8 (int *,float) ;
 int FUNC_9 (int *,unsigned char*,int,int,int,float,float,int) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static FONSglyph* FUNC_11(FONScontext* VAR_2, FONSfont* VAR_3, unsigned int VAR_4,
         short VAR_5, short VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 float VAR_21;
 FONSglyph* VAR_22 = ((void*)0);
 unsigned int VAR_23;
 float VAR_24 = VAR_5/10.0f;
 int VAR_25, VAR_26;
 unsigned char* VAR_27;
 unsigned char* VAR_28;

 if (VAR_5 < 2) return ((void*)0);
 if (VAR_6 > 20) VAR_6 = 20;
 VAR_25 = VAR_6+2;


 VAR_2->nscratch = 0;


 VAR_23 = FUNC_3(VAR_4) & (VAR_1-1);
 VAR_7 = VAR_3->lut[VAR_23];
 while (VAR_7 != -1) {
  if (VAR_3->glyphs[VAR_7].codepoint == VAR_4 && VAR_3->glyphs[VAR_7].size == VAR_5 && VAR_3->glyphs[VAR_7].blur == VAR_6)
   return &VAR_3->glyphs[VAR_7];
  VAR_7 = VAR_3->glyphs[VAR_7].next;
 }


 VAR_21 = FUNC_8(&VAR_3->font, VAR_24);
 VAR_8 = FUNC_7(&VAR_3->font, VAR_4);

 if (VAR_8 == 0) {
  for (VAR_7 = 0; VAR_7 < VAR_3->nfallbacks; ++VAR_7) {
   FONSglyph* VAR_29 = FUNC_11(VAR_2, VAR_2->fonts[VAR_3->fallbacks[VAR_7]], VAR_4, VAR_5, VAR_6);
   if (VAR_29 != ((void*)0) && VAR_29->index != 0) {
    return VAR_29;
   }
  }
 }
 FUNC_6(&VAR_3->font, VAR_8, VAR_24, VAR_21, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_14);
 VAR_15 = VAR_13-VAR_11 + VAR_25*2;
 VAR_16 = VAR_14-VAR_12 + VAR_25*2;


 VAR_26 = FUNC_1(VAR_2->atlas, VAR_15, VAR_16, &VAR_17, &VAR_18);
 if (VAR_26 == 0 && VAR_2->handleError != ((void*)0)) {

  VAR_2->handleError(VAR_2->errorUptr, VAR_0, 0);
  VAR_26 = FUNC_1(VAR_2->atlas, VAR_15, VAR_16, &VAR_17, &VAR_18);
 }
 if (VAR_26 == 0) return ((void*)0);


 VAR_22 = FUNC_0(VAR_3);
 VAR_22->codepoint = VAR_4;
 VAR_22->size = VAR_5;
 VAR_22->blur = VAR_6;
 VAR_22->index = VAR_8;
 VAR_22->x0 = (short)VAR_17;
 VAR_22->y0 = (short)VAR_18;
 VAR_22->x1 = (short)(VAR_22->x0+VAR_15);
 VAR_22->y1 = (short)(VAR_22->y0+VAR_16);
 VAR_22->xadv = (short)(VAR_21 * VAR_9 * 10.0f);
 VAR_22->xoff = (short)(VAR_11 - VAR_25);
 VAR_22->yoff = (short)(VAR_12 - VAR_25);
 VAR_22->next = 0;


 VAR_22->next = VAR_3->lut[VAR_23];
 VAR_3->lut[VAR_23] = VAR_3->nglyphs-1;


 VAR_28 = &VAR_2->texData[(VAR_22->x0+VAR_25) + (VAR_22->y0+VAR_25) * VAR_2->params.width];
 FUNC_9(&VAR_3->font, VAR_28, VAR_15-VAR_25*2,VAR_16-VAR_25*2, VAR_2->params.width, VAR_21,VAR_21, VAR_8);


 VAR_28 = &VAR_2->texData[VAR_22->x0 + VAR_22->y0 * VAR_2->params.width];
 for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
  VAR_28[VAR_20*VAR_2->params.width] = 0;
  VAR_28[VAR_15-1 + VAR_20*VAR_2->params.width] = 0;
 }
 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  VAR_28[VAR_19] = 0;
  VAR_28[VAR_19 + (VAR_16-1)*VAR_2->params.width] = 0;
 }
 if (VAR_6 > 0) {
  VAR_2->nscratch = 0;
  VAR_27 = &VAR_2->texData[VAR_22->x0 + VAR_22->y0 * VAR_2->params.width];
  FUNC_2(VAR_2, VAR_27, VAR_15,VAR_16, VAR_2->params.width, VAR_6);
 }

 VAR_2->dirtyRect[0] = FUNC_5(VAR_2->dirtyRect[0], VAR_22->x0);
 VAR_2->dirtyRect[1] = FUNC_5(VAR_2->dirtyRect[1], VAR_22->y0);
 VAR_2->dirtyRect[2] = FUNC_4(VAR_2->dirtyRect[2], VAR_22->x1);
 VAR_2->dirtyRect[3] = FUNC_4(VAR_2->dirtyRect[3], VAR_22->y1);

 return VAR_22;
}
