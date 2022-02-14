
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_25__ {size_t nfonts; scalar_t__ nverts; TYPE_4__** fonts; } ;
struct TYPE_24__ {int font; int * data; } ;
struct TYPE_23__ {int index; } ;
struct TYPE_22__ {int t1; int s1; int y1; int x1; int s0; int x0; int t0; int y0; } ;
struct TYPE_21__ {float size; size_t font; int align; int color; int spacing; scalar_t__ blur; } ;
typedef TYPE_1__ FONSstate ;
typedef TYPE_2__ FONSquad ;
typedef TYPE_3__ FONSglyph ;
typedef TYPE_4__ FONSfont ;
typedef TYPE_5__ FONScontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 float FUNC_0 (TYPE_5__*,float,float,char const*,char const*,int *) ;
 scalar_t__ FUNC_1 (unsigned int*,unsigned int*,unsigned char const) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_3__* FUNC_3 (TYPE_5__*,TYPE_4__*,unsigned int,short,short) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int,TYPE_3__*,float,int ,float*,float*,TYPE_2__*) ;
 TYPE_1__* FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_4__*,int,short) ;
 float FUNC_7 (int *,float) ;
 int FUNC_8 (TYPE_5__*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (char const*) ;

float FUNC_10(FONScontext* VAR_4,
       float VAR_5, float VAR_6,
       const char* VAR_7, const char* VAR_8)
{
 FONSstate* VAR_9 = FUNC_5(VAR_4);
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 FONSglyph* VAR_12 = ((void*)0);
 FONSquad VAR_13;
 int VAR_14 = -1;
 short VAR_15 = (short)(VAR_9->size*10.0f);
 short VAR_16 = (short)VAR_9->blur;
 float VAR_17;
 FONSfont* VAR_18;
 float VAR_19;

 if (VAR_4 == ((void*)0)) return VAR_5;
 if (VAR_9->font < 0 || VAR_9->font >= VAR_4->nfonts) return VAR_5;
 VAR_18 = VAR_4->fonts[VAR_9->font];
 if (VAR_18->data == ((void*)0)) return VAR_5;

 VAR_17 = FUNC_7(&VAR_18->font, (float)VAR_15/10.0f);

 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_7 + FUNC_9(VAR_7);


 if (VAR_9->align & VAR_1) {

 } else if (VAR_9->align & VAR_2) {
  VAR_19 = FUNC_0(VAR_4, VAR_5,VAR_6, VAR_7, VAR_8, ((void*)0));
  VAR_5 -= VAR_19;
 } else if (VAR_9->align & VAR_0) {
  VAR_19 = FUNC_0(VAR_4, VAR_5,VAR_6, VAR_7, VAR_8, ((void*)0));
  VAR_5 -= VAR_19 * 0.5f;
 }

 VAR_6 += FUNC_6(VAR_4, VAR_18, VAR_9->align, VAR_15);

 for (; VAR_7 != VAR_8; ++VAR_7) {
  if (FUNC_1(&VAR_11, &VAR_10, *(const unsigned char*)VAR_7))
   continue;
  VAR_12 = FUNC_3(VAR_4, VAR_18, VAR_10, VAR_15, VAR_16);
  if (VAR_12 != ((void*)0)) {
   FUNC_4(VAR_4, VAR_18, VAR_14, VAR_12, VAR_17, VAR_9->spacing, &VAR_5, &VAR_6, &VAR_13);

   if (VAR_4->nverts+6 > VAR_3)
    FUNC_2(VAR_4);

   FUNC_8(VAR_4, VAR_13.x0, VAR_13.y0, VAR_13.s0, VAR_13.t0, VAR_9->color);
   FUNC_8(VAR_4, VAR_13.x1, VAR_13.y1, VAR_13.s1, VAR_13.t1, VAR_9->color);
   FUNC_8(VAR_4, VAR_13.x1, VAR_13.y0, VAR_13.s1, VAR_13.t0, VAR_9->color);

   FUNC_8(VAR_4, VAR_13.x0, VAR_13.y0, VAR_13.s0, VAR_13.t0, VAR_9->color);
   FUNC_8(VAR_4, VAR_13.x0, VAR_13.y1, VAR_13.s0, VAR_13.t1, VAR_9->color);
   FUNC_8(VAR_4, VAR_13.x1, VAR_13.y1, VAR_13.s1, VAR_13.t1, VAR_9->color);
  }
  VAR_14 = VAR_12 != ((void*)0) ? VAR_12->index : -1;
 }
 FUNC_2(VAR_4);

 return VAR_5;
}
