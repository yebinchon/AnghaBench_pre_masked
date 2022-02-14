
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_10__ {scalar_t__ interlace; scalar_t__ transparent; scalar_t__ trueColor; int sx; int sy; scalar_t__ colorsTotal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

int FUNC_6 (gdImagePtr VAR_8, gdImagePtr VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15, VAR_16;

 if (VAR_8->interlace != VAR_9->interlace) {
  VAR_14 |= VAR_2;
 }

 if (VAR_8->transparent != VAR_9->transparent) {
  VAR_14 |= VAR_6;
 }

 if (VAR_8->trueColor != VAR_9->trueColor) {
  VAR_14 |= VAR_7;
 }

 VAR_15 = VAR_8->sx;
 if (VAR_8->sx != VAR_9->sx) {
  VAR_14 |= VAR_4 + VAR_1;
  if (VAR_9->sx < VAR_8->sx) {
   VAR_15 = VAR_9->sx;
  }
 }

 VAR_16 = VAR_8->sy;
 if (VAR_8->sy != VAR_9->sy) {
  VAR_14 |= VAR_5 + VAR_1;
  if (VAR_9->sy < VAR_8->sy) {
   VAR_16 = VAR_9->sy;
  }
 }

 if (VAR_8->colorsTotal != VAR_9->colorsTotal) {
  VAR_14 |= VAR_3;
 }

 for (VAR_11 = 0; VAR_11 < VAR_16; VAR_11++) {
  for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++) {
   VAR_12 = VAR_8->trueColor ? FUNC_5(VAR_8, VAR_10, VAR_11) : FUNC_3(VAR_8, VAR_10, VAR_11);
   VAR_13 = VAR_9->trueColor ? FUNC_5(VAR_9, VAR_10, VAR_11) : FUNC_3(VAR_9, VAR_10, VAR_11);

   if (FUNC_4(VAR_8, VAR_12) != FUNC_4(VAR_9, VAR_13)) {
    VAR_14 |= VAR_0 + VAR_1;
    break;
   }
   if (FUNC_2(VAR_8, VAR_12) != FUNC_2(VAR_9, VAR_13)) {
    VAR_14 |= VAR_0 + VAR_1;
    break;
   }
   if (FUNC_1(VAR_8, VAR_12) != FUNC_1(VAR_9, VAR_13)) {
    VAR_14 |= VAR_0 + VAR_1;
    break;
   }







  }
  if (VAR_14 & VAR_0) {
   break;
  }
 }

 return VAR_14;
}
