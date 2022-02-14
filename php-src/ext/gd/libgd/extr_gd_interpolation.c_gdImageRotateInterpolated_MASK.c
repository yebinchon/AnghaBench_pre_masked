
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_22__ {scalar_t__ trueColor; int saveAlphaFlag; int interpolation_id; int sy; int sx; int alphaBlendingFlag; int transparent; int * alpha; int * blue; int * green; int * red; } ;




 int VAR_0 ;

 scalar_t__ FUNC_0 (float const) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__* const,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__* const) ;
 TYPE_1__* FUNC_5 (TYPE_1__* const,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__* const,int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__* const,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__* const,float const,int) ;
 TYPE_1__* FUNC_9 (TYPE_1__* const,float const,int) ;
 TYPE_1__* FUNC_10 (TYPE_1__* const,float const,int) ;
 TYPE_1__* FUNC_11 (TYPE_1__* const,float const,int) ;
 int VAR_2 ;
 int FUNC_12 (int ,int ,int ,int ) ;

gdImagePtr FUNC_13(const gdImagePtr VAR_3, const float VAR_4, int VAR_5)
{



 const int VAR_6 = FUNC_1((int) FUNC_0(VAR_4 * 100), 360 * 100);

 if (VAR_5 < 0) {
  return ((void*)0);
 }




 if (VAR_3->trueColor == 0) {
  if (VAR_5 < VAR_2) {
   VAR_5 = FUNC_12(VAR_3->red[VAR_5], VAR_3->green[VAR_5], VAR_3->blue[VAR_5], VAR_3->alpha[VAR_5]);
  }
  FUNC_4(VAR_3);
 }


 switch (VAR_6) {
  case 0: {
   gdImagePtr VAR_7 = FUNC_3(VAR_3->sx, VAR_3->sy);
   if (VAR_7 == ((void*)0)) {
    return ((void*)0);
   }
   VAR_7->transparent = VAR_3->transparent;
   VAR_7->saveAlphaFlag = 1;
   VAR_7->alphaBlendingFlag = VAR_1;

   FUNC_2(VAR_7, VAR_3, 0,0,0,0,VAR_3->sx,VAR_3->sy);
   return VAR_7;
  }
  case -27000:
  case 9000:
   return FUNC_7(VAR_3, 0);
  case -18000:
  case 18000:
   return FUNC_5(VAR_3, 0);
  case -9000:
  case 27000:
   return FUNC_6(VAR_3, 0);
 }

 if (VAR_3 == ((void*)0) || VAR_3->interpolation_id < 1 || VAR_3->interpolation_id > VAR_0) {
  return ((void*)0);
 }

 switch (VAR_3->interpolation_id) {
  case 128:
   return FUNC_11(VAR_3, VAR_4, VAR_5);
   break;

  case 129:
   return FUNC_9(VAR_3, VAR_4, VAR_5);
   break;

  case 130:
   return FUNC_8(VAR_3, VAR_4, VAR_5);
   break;

  default:
   return FUNC_10(VAR_3, VAR_4, VAR_5);
 }
 return ((void*)0);
}
