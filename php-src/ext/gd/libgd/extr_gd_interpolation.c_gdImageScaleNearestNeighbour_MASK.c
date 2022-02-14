
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdFixed ;
struct TYPE_5__ {int ** pixels; int ** tpixels; scalar_t__ trueColor; scalar_t__ sy; scalar_t__ sx; } ;


 unsigned long FUNC_0 (int,unsigned int const) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (unsigned long const,unsigned long const) ;
 int FUNC_3 (float const) ;
 long FUNC_4 (int const) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int const,int const) ;

gdImagePtr FUNC_7(gdImagePtr VAR_0, const unsigned int VAR_1, const unsigned int VAR_2)
{
 const unsigned long VAR_3 = FUNC_0(1, VAR_1);
 const unsigned long VAR_4 = FUNC_0(1, VAR_2);
 const float VAR_5 = (float)VAR_0->sx / (float)VAR_3;
 const float VAR_6 = (float)VAR_0->sy / (float)VAR_4;
 const gdFixed VAR_7 = FUNC_3(VAR_5);
 const gdFixed VAR_8 = FUNC_3(VAR_6);

 gdImagePtr VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11 = 0;
 unsigned int VAR_12;

 if (VAR_3 == 0 || VAR_4 == 0) {
  return ((void*)0);
 }

 VAR_9 = FUNC_2(VAR_3, VAR_4);

 if (VAR_9 == ((void*)0)) {
  return ((void*)0);
 }

 for (VAR_12=0; VAR_12<VAR_4; VAR_12++) {
  unsigned int VAR_13;
  VAR_10 = 0;
  if (VAR_0->trueColor) {
   for (VAR_13=0; VAR_13<VAR_3; VAR_13++) {
    const gdFixed VAR_14 = FUNC_5(VAR_12);
    const gdFixed VAR_15 = FUNC_5(VAR_13);
    const gdFixed VAR_16 = FUNC_6(VAR_14, VAR_8);
    const gdFixed VAR_17 = FUNC_6(VAR_15, VAR_7);
    const long VAR_18 = FUNC_4(VAR_16);
    const long VAR_19 = FUNC_4(VAR_17);

    VAR_9->tpixels[VAR_11][VAR_10++] = VAR_0->tpixels[VAR_18][VAR_19];
   }
  } else {
   for (VAR_13=0; VAR_13<VAR_3; VAR_13++) {
    const gdFixed VAR_20 = FUNC_5(VAR_12);
    const gdFixed VAR_21 = FUNC_5(VAR_13);
    const gdFixed VAR_22 = FUNC_6(VAR_20, VAR_8);
    const gdFixed VAR_23 = FUNC_6(VAR_21, VAR_7);
    const long VAR_24 = FUNC_4(VAR_22);
    const long VAR_25 = FUNC_4(VAR_23);

    VAR_9->tpixels[VAR_11][VAR_10++] = FUNC_1(VAR_0->pixels[VAR_24][VAR_25]);
   }
  }
  VAR_11++;
 }
 return VAR_9;
}
