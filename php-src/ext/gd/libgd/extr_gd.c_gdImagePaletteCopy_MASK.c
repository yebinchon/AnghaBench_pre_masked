
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_7__ {int sy; int sx; int colorsTotal; int* open; int * alpha; int * green; int * blue; int * red; scalar_t__ trueColor; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;

void FUNC_3 (gdImagePtr VAR_0, gdImagePtr VAR_1)
{
 int VAR_2;
 int VAR_3, VAR_4, VAR_5;
 int VAR_6[256];
 if (VAR_0->trueColor || VAR_1->trueColor) {
  return;
 }

 for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
  VAR_6[VAR_2] = -1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->sy; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_0->sx; VAR_3++) {
   VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4);
   if (VAR_6[VAR_5] == -1) {

    VAR_6[VAR_5] = FUNC_0 (VAR_1, VAR_0->red[VAR_5], VAR_0->green[VAR_5], VAR_0->blue[VAR_5], VAR_0->alpha[VAR_5]);
   }
   FUNC_2(VAR_0, VAR_3, VAR_4, VAR_6[VAR_5]);
  }
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->colorsTotal; VAR_2++) {
  VAR_0->red[VAR_2] = VAR_1->red[VAR_2];
  VAR_0->blue[VAR_2] = VAR_1->blue[VAR_2];
  VAR_0->green[VAR_2] = VAR_1->green[VAR_2];
  VAR_0->alpha[VAR_2] = VAR_1->alpha[VAR_2];
  VAR_0->open[VAR_2] = 0;
 }

 for (VAR_2 = VAR_1->colorsTotal; VAR_2 < VAR_0->colorsTotal; VAR_2++) {
  VAR_0->open[VAR_2] = 1;
 }

 VAR_0->colorsTotal = VAR_1->colorsTotal;
}
