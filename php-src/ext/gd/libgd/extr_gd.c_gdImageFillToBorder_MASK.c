
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_5__ {int colorsTotal; int alphaBlendingFlag; int sx; int sy; int trueColor; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;

void FUNC_2 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 int VAR_6 = -1, VAR_7;
 int VAR_8, VAR_9 = 0;

 if (VAR_3 < 0 || VAR_4 < 0) {

  return;
 }

 if (!VAR_0->trueColor) {
  if ((VAR_4 > (VAR_0->colorsTotal - 1)) || (VAR_3 > (VAR_0->colorsTotal - 1)) || (VAR_4 < 0)) {
   return;
  }
 }

 VAR_9 = VAR_0->alphaBlendingFlag;
 VAR_0->alphaBlendingFlag = 0;

 if (VAR_1 >= VAR_0->sx) {
  VAR_1 = VAR_0->sx - 1;
 } else if (VAR_1 < 0) {
  VAR_1 = 0;
 }
 if (VAR_2 >= VAR_0->sy) {
  VAR_2 = VAR_0->sy - 1;
 } else if (VAR_2 < 0) {
  VAR_2 = 0;
 }

 for (VAR_8 = VAR_1; VAR_8 >= 0; VAR_8--) {
  if (FUNC_0(VAR_0, VAR_8, VAR_2) == VAR_3) {
   break;
  }
  FUNC_1(VAR_0, VAR_8, VAR_2, VAR_4);
  VAR_6 = VAR_8;
 }
 if (VAR_6 == -1) {
  VAR_0->alphaBlendingFlag = VAR_9;
  return;
 }

 VAR_7 = VAR_1;
 for (VAR_8 = (VAR_1 + 1); VAR_8 < VAR_0->sx; VAR_8++) {
  if (FUNC_0(VAR_0, VAR_8, VAR_2) == VAR_3) {
   break;
  }
  FUNC_1(VAR_0, VAR_8, VAR_2, VAR_4);
  VAR_7 = VAR_8;
 }


 if (VAR_2 > 0) {
  VAR_5 = 1;
  for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8++) {
   int VAR_10 = FUNC_0(VAR_0, VAR_8, VAR_2 - 1);
   if (VAR_5) {
    if ((VAR_10 != VAR_3) && (VAR_10 != VAR_4)) {
     FUNC_2(VAR_0, VAR_8, VAR_2 - 1, VAR_3, VAR_4);
     VAR_5 = 0;
    }
   } else if ((VAR_10 == VAR_3) || (VAR_10 == VAR_4)) {
    VAR_5 = 1;
   }
  }
 }


 if (VAR_2 < ((VAR_0->sy) - 1)) {
  VAR_5 = 1;
  for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8++) {
   int VAR_11 = FUNC_0(VAR_0, VAR_8, VAR_2 + 1);

   if (VAR_5) {
    if ((VAR_11 != VAR_3) && (VAR_11 != VAR_4)) {
     FUNC_2(VAR_0, VAR_8, VAR_2 + 1, VAR_3, VAR_4);
     VAR_5 = 0;
    }
   } else if ((VAR_11 == VAR_3) || (VAR_11 == VAR_4)) {
    VAR_5 = 1;
   }
  }
 }
 VAR_0->alphaBlendingFlag = VAR_9;
}
