
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int flags; } ;
struct TYPE_24__ {size_t nfonts; TYPE_1__ params; TYPE_5__** fonts; } ;
struct TYPE_23__ {int font; int * data; } ;
struct TYPE_22__ {int index; } ;
struct TYPE_21__ {float x0; float x1; float y0; float y1; } ;
struct TYPE_20__ {float size; size_t font; int align; int spacing; scalar_t__ blur; } ;
typedef TYPE_2__ FONSstate ;
typedef TYPE_3__ FONSquad ;
typedef TYPE_4__ FONSglyph ;
typedef TYPE_5__ FONSfont ;
typedef TYPE_6__ FONScontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int*,unsigned int*,unsigned char const) ;
 TYPE_4__* FUNC_1 (TYPE_6__*,TYPE_5__*,unsigned int,short,short) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*,int,TYPE_4__*,float,int ,float*,float*,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_5__*,int,short) ;
 float FUNC_5 (int *,float) ;
 int FUNC_6 (char const*) ;

float FUNC_7(FONScontext* VAR_4,
      float VAR_5, float VAR_6,
      const char* VAR_7, const char* VAR_8,
      float* VAR_9)
{
 FONSstate* VAR_10 = FUNC_3(VAR_4);
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;
 FONSquad VAR_13;
 FONSglyph* VAR_14 = ((void*)0);
 int VAR_15 = -1;
 short VAR_16 = (short)(VAR_10->size*10.0f);
 short VAR_17 = (short)VAR_10->blur;
 float VAR_18;
 FONSfont* VAR_19;
 float VAR_20, VAR_21;
 float VAR_22, VAR_23, VAR_24, VAR_25;

 if (VAR_4 == ((void*)0)) return 0;
 if (VAR_10->font < 0 || VAR_10->font >= VAR_4->nfonts) return 0;
 VAR_19 = VAR_4->fonts[VAR_10->font];
 if (VAR_19->data == ((void*)0)) return 0;

 VAR_18 = FUNC_5(&VAR_19->font, (float)VAR_16/10.0f);


 VAR_6 += FUNC_4(VAR_4, VAR_19, VAR_10->align, VAR_16);

 VAR_22 = VAR_24 = VAR_5;
 VAR_23 = VAR_25 = VAR_6;
 VAR_20 = VAR_5;

 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_7 + FUNC_6(VAR_7);

 for (; VAR_7 != VAR_8; ++VAR_7) {
  if (FUNC_0(&VAR_12, &VAR_11, *(const unsigned char*)VAR_7))
   continue;
  VAR_14 = FUNC_1(VAR_4, VAR_19, VAR_11, VAR_16, VAR_17);
  if (VAR_14 != ((void*)0)) {
   FUNC_2(VAR_4, VAR_19, VAR_15, VAR_14, VAR_18, VAR_10->spacing, &VAR_5, &VAR_6, &VAR_13);
   if (VAR_13.x0 < VAR_22) VAR_22 = VAR_13.x0;
   if (VAR_13.x1 > VAR_24) VAR_24 = VAR_13.x1;
   if (VAR_4->params.flags & VAR_3) {
    if (VAR_13.y0 < VAR_23) VAR_23 = VAR_13.y0;
    if (VAR_13.y1 > VAR_25) VAR_25 = VAR_13.y1;
   } else {
    if (VAR_13.y1 < VAR_23) VAR_23 = VAR_13.y1;
    if (VAR_13.y0 > VAR_25) VAR_25 = VAR_13.y0;
   }
  }
  VAR_15 = VAR_14 != ((void*)0) ? VAR_14->index : -1;
 }

 VAR_21 = VAR_5 - VAR_20;


 if (VAR_10->align & VAR_1) {

 } else if (VAR_10->align & VAR_2) {
  VAR_22 -= VAR_21;
  VAR_24 -= VAR_21;
 } else if (VAR_10->align & VAR_0) {
  VAR_22 -= VAR_21 * 0.5f;
  VAR_24 -= VAR_21 * 0.5f;
 }

 if (VAR_9) {
  VAR_9[0] = VAR_22;
  VAR_9[1] = VAR_23;
  VAR_9[2] = VAR_24;
  VAR_9[3] = VAR_25;
 }

 return VAR_21;
}
