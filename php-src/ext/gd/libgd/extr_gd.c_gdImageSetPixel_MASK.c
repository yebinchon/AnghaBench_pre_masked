
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_6__ {int* style; int stylePos; int styleLength; int AA_color; int** tpixels; int** pixels; int alphaBlendingFlag; int trueColor; } ;


 int FUNC_0 (int,int) ;







 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;



 int VAR_0 ;

void FUNC_6 (gdImagePtr VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 switch (VAR_4) {
  case 130:
   if (!VAR_1->style) {

    return;
   } else {
    VAR_5 = VAR_1->style[VAR_1->stylePos++];
   }
   if (VAR_5 != VAR_0) {
    FUNC_6(VAR_1, VAR_2, VAR_3, VAR_5);
   }
   VAR_1->stylePos = VAR_1->stylePos % VAR_1->styleLength;
   break;
  case 129:
   if (!VAR_1->style) {

    return;
   }
   VAR_5 = VAR_1->style[VAR_1->stylePos++];
   if (VAR_5 != VAR_0 && VAR_5 != 0) {
    FUNC_6(VAR_1, VAR_2, VAR_3, 136);
   }
   VAR_1->stylePos = VAR_1->stylePos % VAR_1->styleLength;
   break;
  case 136:
   FUNC_2(VAR_1, VAR_2, VAR_3);
   break;
  case 128:
   FUNC_3(VAR_1, VAR_2, VAR_3);
   break;
  case 137:


   FUNC_6(VAR_1, VAR_2, VAR_3, VAR_1->AA_color);
   break;
  default:
   if (FUNC_1(VAR_1, VAR_2, VAR_3)) {
    if (VAR_1->trueColor) {
     switch (VAR_1->alphaBlendingFlag) {
      default:
      case 131:
       VAR_1->tpixels[VAR_3][VAR_2] = VAR_4;
       break;
      case 135:
      case 133:
       VAR_1->tpixels[VAR_3][VAR_2] = FUNC_0(VAR_1->tpixels[VAR_3][VAR_2], VAR_4);
       break;
      case 132 :
       VAR_1->tpixels[VAR_3][VAR_2] = FUNC_5(VAR_1->tpixels[VAR_3][VAR_2], VAR_4);
       break;
      case 134 :
       VAR_1->tpixels[VAR_3][VAR_2] = FUNC_4(VAR_1->tpixels[VAR_3][VAR_2], VAR_4);
       break;
     }
    } else {
     VAR_1->pixels[VAR_3][VAR_2] = VAR_4;
    }
   }
   break;
 }
}
