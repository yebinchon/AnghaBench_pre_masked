
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_4__ {int sx; int sy; int colorsTotal; int** pixels; int** tpixels; int* red; int* green; int* blue; int* alpha; scalar_t__ trueColor; } ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned long*,int ,int) ;
 scalar_t__ FUNC_6 (int,int,int ) ;

int FUNC_7 (gdImagePtr VAR_1, gdImagePtr VAR_2)
{
 unsigned long *VAR_3;
 unsigned long *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7,VAR_8;
 int VAR_9;

 if( !VAR_1->trueColor ) {
  return -1;
 }
 if( VAR_2->trueColor ) {
  return -2;
 }
 if( (VAR_1->sx != VAR_2->sx) || (VAR_1->sy != VAR_2->sy) ) {
  return -3;
 }
 if (VAR_2->colorsTotal<1) {
  return -4;
 }

 VAR_3 = (unsigned long *)FUNC_6(sizeof(unsigned long), 5 * VAR_0, 0);
 FUNC_5( VAR_3, 0, sizeof(unsigned long) * 5 * VAR_0 );

 for (VAR_7=0; VAR_7<VAR_1->sx; VAR_7++) {
  for( VAR_8=0; VAR_8<VAR_1->sy; VAR_8++ ) {
   VAR_5 = VAR_2->pixels[VAR_8][VAR_7];
   VAR_6 = VAR_1->tpixels[VAR_8][VAR_7];
   VAR_4 = VAR_3 + (VAR_5 * 5);
   (*(VAR_4++))++;
   *(VAR_4++) += FUNC_4(VAR_6);
   *(VAR_4++) += FUNC_3(VAR_6);
   *(VAR_4++) += FUNC_2(VAR_6);
   *(VAR_4++) += FUNC_1(VAR_6);
  }
 }
 VAR_4 = VAR_3;
 for (VAR_5=0; VAR_5<VAR_2->colorsTotal; VAR_5++) {
  VAR_9 = *(VAR_4++);
  if( VAR_9 > 0 ) {
   VAR_2->red[VAR_5] = *(VAR_4++) / VAR_9;
   VAR_2->green[VAR_5] = *(VAR_4++) / VAR_9;
   VAR_2->blue[VAR_5] = *(VAR_4++) / VAR_9;
   VAR_2->alpha[VAR_5] = *(VAR_4++) / VAR_9;
  } else {
   VAR_4 += 4;
  }
 }
 FUNC_0(VAR_3);
 return 0;
}
