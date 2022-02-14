
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_3__ {unsigned char trueColor; scalar_t__* alpha; scalar_t__* blue; scalar_t__* green; scalar_t__* red; int transparent; int colorsTotal; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3 (gdImagePtr VAR_1, gdIOCtx * VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1->trueColor, VAR_2);
 if (!VAR_1->trueColor) {
  FUNC_2(VAR_1->colorsTotal, VAR_2);
 }
 FUNC_1(VAR_1->transparent, VAR_2);
 if (!VAR_1->trueColor) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_0((unsigned char) VAR_1->red[VAR_3], VAR_2);
   FUNC_0((unsigned char) VAR_1->green[VAR_3], VAR_2);
   FUNC_0((unsigned char) VAR_1->blue[VAR_3], VAR_2);
   FUNC_0((unsigned char) VAR_1->alpha[VAR_3], VAR_2);
  }
 }
}
