
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct key {float size; int gid; unsigned char subx; unsigned char suby; int * font; } ;
struct glyph {int w; int h; scalar_t__ t; scalar_t__ s; int top; int lsb; } ;
struct TYPE_11__ {int w; int h; int samples; int y; int x; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_12__ {float e; float f; } ;
typedef TYPE_2__ fz_matrix ;
typedef int fz_font ;
struct TYPE_13__ {scalar_t__ font; } ;
struct TYPE_14__ {struct glyph glyph; TYPE_3__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int *,int,TYPE_2__*,int *,int) ;
 TYPE_2__ FUNC_3 (float,float) ;
 int FUNC_4 (int ,TYPE_2__*,TYPE_2__*,unsigned char*,unsigned char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_4__* VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ,scalar_t__,scalar_t__,int,int,int ,int ,int ) ;
 unsigned int FUNC_9 (struct key*) ;
 int FUNC_10 (TYPE_3__*,struct key*,int) ;
 int FUNC_11 (struct key*,int ,int) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static struct glyph *FUNC_13(fz_font *VAR_16, float VAR_17, int VAR_18, float *VAR_19, float *VAR_20)
{
 fz_matrix VAR_21, VAR_22;
 unsigned char VAR_23, VAR_24;
 fz_pixmap *VAR_25;
 struct key VAR_26;
 unsigned int VAR_27;
 int VAR_28, VAR_29;


 VAR_21 = FUNC_3(VAR_17, -VAR_17);
 VAR_21.e = *VAR_19;
 VAR_21.f = *VAR_20;
 FUNC_4(VAR_8, &VAR_21, &VAR_22, &VAR_23, &VAR_24);
 *VAR_19 = VAR_21.e;
 *VAR_20 = VAR_21.f;





 FUNC_11(&VAR_26, 0, sizeof VAR_26);
 VAR_26.font = VAR_16;
 VAR_26.size = VAR_17;
 VAR_26.gid = VAR_18;
 VAR_26.subx = VAR_23;
 VAR_26.suby = VAR_24;

 VAR_27 = FUNC_9(&VAR_26);
 if (VAR_14[VAR_27].key.font)
  return &VAR_14[VAR_27].glyph;





 FUNC_6();

 VAR_25 = FUNC_2(VAR_8, VAR_16, VAR_18, &VAR_22, ((void*)0), 8);
 VAR_28 = VAR_25->w;
 VAR_29 = VAR_25->h;





 if (VAR_15 == (VAR_6 * 3) / 4)
 {
  FUNC_12("font cache table full, clearing cache");
  FUNC_0();
  VAR_27 = FUNC_9(&VAR_26);
 }

 if (VAR_29 + VAR_7 > VAR_9 || VAR_28 + VAR_7 > VAR_13)
  return ((void*)0);

 if (VAR_11 + VAR_28 + VAR_7 > VAR_13)
 {
  VAR_12 += VAR_10 + VAR_7;
  VAR_11 = VAR_7;
  VAR_10 = 0;
 }
 if (VAR_12 + VAR_29 + VAR_7 > VAR_9)
 {
  FUNC_12("font cache texture full, clearing cache");
  FUNC_0();
  VAR_27 = FUNC_9(&VAR_26);
 }





 FUNC_10(&VAR_14[VAR_27].key, &VAR_26, sizeof(struct key));
 VAR_14[VAR_27].glyph.w = VAR_25->w;
 VAR_14[VAR_27].glyph.h = VAR_25->h;
 VAR_14[VAR_27].glyph.lsb = VAR_25->x;
 VAR_14[VAR_27].glyph.top = -VAR_25->y;
 VAR_14[VAR_27].glyph.s = VAR_11;
 VAR_14[VAR_27].glyph.t = VAR_12;
 VAR_15 ++;

 FUNC_7(VAR_3, 1);
 FUNC_7(VAR_4, VAR_25->w);
 FUNC_8(VAR_2, 0, VAR_11, VAR_12, VAR_28, VAR_29,
   VAR_0, VAR_5, VAR_25->samples);
 FUNC_7(VAR_4, 0);

 FUNC_1(VAR_8, VAR_25);

 FUNC_5(VAR_1);

 VAR_11 += VAR_28 + VAR_7;
 if (VAR_10 < VAR_29 + VAR_7)
  VAR_10 = VAR_29 + VAR_7;

 return &VAR_14[VAR_27].glyph;
}
