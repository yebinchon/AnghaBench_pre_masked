
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef TYPE_1__* gdRectPtr ;
struct TYPE_22__ {int width; int x; int height; int y; } ;
typedef TYPE_2__ gdRect ;
struct TYPE_23__ {int y; int x; } ;
typedef TYPE_3__ gdPointF ;
typedef scalar_t__ gdInterpolationMethod ;
typedef TYPE_4__* gdImagePtr ;
struct TYPE_24__ {scalar_t__ interpolation_id; int** tpixels; scalar_t__ alphaBlendingFlag; } ;
struct TYPE_21__ {int x; int y; int width; int height; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,double*) ;
 int FUNC_2 (double*,double const*) ;
 int FUNC_3 (TYPE_4__* const,TYPE_1__*) ;
 int FUNC_4 (TYPE_4__* const,int*,int*,int*,int*) ;
 int FUNC_5 (TYPE_4__* const) ;
 int FUNC_6 (TYPE_4__* const) ;
 int FUNC_7 (TYPE_4__* const,int,int,int,int) ;
 int FUNC_8 (TYPE_4__* const,scalar_t__) ;
 int FUNC_9 (TYPE_4__*,int,int,int ) ;
 int FUNC_10 (TYPE_1__*,double const*,TYPE_2__*) ;
 int FUNC_11 (TYPE_4__* const,int,int,int) ;

int FUNC_12(gdImagePtr VAR_7,
    int VAR_8, int VAR_9,
    const gdImagePtr VAR_10,
    gdRectPtr VAR_11,
    const double VAR_12[6])
{
 int VAR_13,VAR_14,VAR_15,VAR_16;
 int VAR_17 = 0;
 int VAR_18, VAR_19, VAR_20, VAR_21;
 register int VAR_22, VAR_23, VAR_24, VAR_25;
 double VAR_26[6];
 int *VAR_27;
 gdPointF VAR_28, VAR_29;
 gdRect VAR_30;
 int VAR_31, VAR_32;
 gdInterpolationMethod VAR_33 = VAR_3;


 if (VAR_10->interpolation_id == VAR_2 || VAR_10->interpolation_id == VAR_1 || VAR_10->interpolation_id == VAR_5) {
  VAR_33 = VAR_10->interpolation_id;

  FUNC_8(VAR_10, VAR_0);
 }


 FUNC_3(VAR_10, VAR_11);

 if (VAR_11->x > 0 || VAR_11->y > 0
  || VAR_11->width < FUNC_5(VAR_10)
  || VAR_11->height < FUNC_6(VAR_10)) {
  VAR_17 = 1;

  FUNC_4(VAR_10, &VAR_18, &VAR_19,
  &VAR_20, &VAR_21);

  FUNC_7(VAR_10, VAR_11->x, VAR_11->y,
   VAR_11->x + VAR_11->width - 1,
   VAR_11->y + VAR_11->height - 1);
 }

 if (!FUNC_10(VAR_11, VAR_12, &VAR_30)) {
  if (VAR_17) {
   FUNC_7(VAR_10, VAR_18, VAR_19,
     VAR_20, VAR_21);
  }
  FUNC_8(VAR_10, VAR_33);
  return VAR_4;
 }

 FUNC_4(VAR_7, &VAR_13, &VAR_14, &VAR_15, &VAR_16);

 VAR_31 = VAR_30.width + FUNC_0(VAR_30.x);
 VAR_32 = VAR_30.height + FUNC_0(VAR_30.y);


 FUNC_2(VAR_26, VAR_12);

 VAR_24 = VAR_11->x;
 VAR_25 = VAR_11->y;

 if (VAR_7->alphaBlendingFlag) {
  for (VAR_23 = VAR_30.y; VAR_23 <= VAR_32; VAR_23++) {
   VAR_28.y = VAR_23 + 0.5;
   for (VAR_22 = 0; VAR_22 <= VAR_31; VAR_22++) {
    VAR_28.x = VAR_22 + 0.5;
    FUNC_1(&VAR_29, &VAR_28, VAR_26);
    FUNC_9(VAR_7, VAR_8 + VAR_22, VAR_9 + VAR_23, FUNC_11(VAR_10, VAR_24 + VAR_29.x, VAR_25 + VAR_29.y, 0));
   }
  }
 } else {
  for (VAR_23 = 0; VAR_23 <= VAR_32; VAR_23++) {
   VAR_28.y = VAR_23 + 0.5 + VAR_30.y;
   if ((VAR_9 + VAR_23) < 0 || ((VAR_9 + VAR_23) > FUNC_6(VAR_7) -1)) {
    continue;
   }
   VAR_27 = VAR_7->tpixels[VAR_9 + VAR_23] + VAR_8;

   for (VAR_22 = 0; VAR_22 <= VAR_31; VAR_22++) {
    VAR_28.x = VAR_22 + 0.5 + VAR_30.x;
    FUNC_1(&VAR_29, &VAR_28, VAR_26);

    if ((VAR_8 + VAR_22) < 0 || (VAR_8 + VAR_22) > (FUNC_5(VAR_7) - 1)) {
     break;
    }
    *(VAR_27++) = FUNC_11(VAR_10, VAR_24 + VAR_29.x, VAR_25 + VAR_29.y, -1);
   }
  }
 }


 if (VAR_17) {
  FUNC_7(VAR_10, VAR_18, VAR_19,
    VAR_20, VAR_21);
 }

 FUNC_8(VAR_10, VAR_33);
 return VAR_6;
}
