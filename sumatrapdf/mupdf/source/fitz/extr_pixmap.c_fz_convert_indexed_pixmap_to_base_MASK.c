
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int n; int alpha; unsigned char* samples; int stride; int w; int h; int flags; int seps; TYPE_3__* colorspace; } ;
typedef TYPE_4__ fz_pixmap ;
typedef int fz_context ;
struct TYPE_15__ {int n; } ;
typedef TYPE_5__ fz_colorspace ;
struct TYPE_11__ {int high; unsigned char* lookup; TYPE_5__* base; } ;
struct TYPE_12__ {TYPE_1__ indexed; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 TYPE_4__* FUNC_1 (int *,TYPE_5__*,int ,int ,int) ;
 int FUNC_2 (int *,TYPE_4__ const*) ;
 int FUNC_3 (int *,int ,char*) ;

fz_pixmap *
FUNC_4(fz_context *VAR_3, const fz_pixmap *VAR_4)
{
 fz_pixmap *VAR_5;
 fz_colorspace *VAR_6;
 const unsigned char *VAR_7;
 unsigned char *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned char *VAR_14;
 int VAR_15, VAR_16;

 if (VAR_4->colorspace->type != VAR_0)
  FUNC_3(VAR_3, VAR_1, "cannot convert non-indexed pixmap");
 if (VAR_4->n != 1 + VAR_4->alpha)
  FUNC_3(VAR_3, VAR_1, "cannot convert indexed pixmap mis-matching components");

 VAR_6 = VAR_4->colorspace->u.indexed.base;
 VAR_13 = VAR_4->colorspace->u.indexed.high;
 VAR_14 = VAR_4->colorspace->u.indexed.lookup;
 VAR_12 = VAR_6->n;

 VAR_5 = FUNC_1(VAR_3, VAR_6, FUNC_2(VAR_3, VAR_4), VAR_4->seps, VAR_4->alpha);
 VAR_7 = VAR_4->samples;
 VAR_8 = VAR_5->samples;
 VAR_15 = VAR_4->stride - VAR_4->w * VAR_4->n;
 VAR_16 = VAR_5->stride - VAR_5->w * VAR_5->n;

 if (VAR_4->alpha)
 {
  for (VAR_9 = 0; VAR_9 < VAR_4->h; VAR_9++)
  {
   for (VAR_10 = 0; VAR_10 < VAR_4->w; VAR_10++)
   {
    int VAR_17 = *VAR_7++;
    int VAR_18 = *VAR_7++;
    int VAR_19 = VAR_18 + (VAR_18>>7);
    VAR_17 = FUNC_0(VAR_17, VAR_13);
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
     *VAR_8++ = (VAR_19 * VAR_14[VAR_17 * VAR_12 + VAR_11] + 128)>>8;
    *VAR_8++ = VAR_18;
   }
   VAR_7 += VAR_15;
   VAR_8 += VAR_16;
  }
 }
 else
 {
  for (VAR_9 = 0; VAR_9 < VAR_4->h; VAR_9++)
  {
   for (VAR_10 = 0; VAR_10 < VAR_4->w; VAR_10++)
   {
    int VAR_20 = *VAR_7++;
    VAR_20 = FUNC_0(VAR_20, VAR_13);
    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
     *VAR_8++ = VAR_14[VAR_20 * VAR_12 + VAR_11];
   }
   VAR_7 += VAR_15;
   VAR_8 += VAR_16;
  }
 }

 if (VAR_4->flags & VAR_2)
  VAR_5->flags |= VAR_2;
 else
  VAR_5->flags &= ~VAR_2;

 return VAR_5;
}
