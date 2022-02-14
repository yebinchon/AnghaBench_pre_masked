
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_3__ {int trueColor; int colorsTotal; int transparent; int* red; int* green; int* blue; int* alpha; scalar_t__* open; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int*,int *) ;
 int VAR_2 ;
 int FUNC_4 (char*,int,int) ;

int FUNC_5 (gdIOCtx * VAR_3, gdImagePtr VAR_4, int VAR_5)
{
 int VAR_6;
 if (VAR_5) {
  int VAR_7;
  if (!FUNC_1(&VAR_7, VAR_3)) {
   goto fail1;
  }




  if (VAR_7 != VAR_4->trueColor) {
   goto fail1;
  }

  if (!VAR_4->trueColor) {
   if (!FUNC_3(&VAR_4->colorsTotal, VAR_3)) {
    goto fail1;
   }
   if (VAR_4->colorsTotal > VAR_2) {
    goto fail1;
   }
  }

  if (!FUNC_2(&VAR_4->transparent, VAR_3)) {
   goto fail1;
  }
 } else {
  if (!FUNC_1(&VAR_4->colorsTotal, VAR_3)) {
   goto fail1;
  }
  if (!FUNC_3(&VAR_4->transparent, VAR_3)) {
   goto fail1;
  }
  if (VAR_4->transparent == 257) {
   VAR_4->transparent = (-1);
  }
 }

 FUNC_0(FUNC_4("Pallette had %d colours (T=%d)\n", VAR_4->colorsTotal, VAR_4->transparent));

 if (VAR_4->trueColor) {
  return VAR_1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (!FUNC_1(&VAR_4->red[VAR_6], VAR_3)) {
   goto fail1;
  }
  if (!FUNC_1(&VAR_4->green[VAR_6], VAR_3)) {
   goto fail1;
  }
  if (!FUNC_1(&VAR_4->blue[VAR_6], VAR_3)) {
   goto fail1;
  }
  if (VAR_5) {
   if (!FUNC_1(&VAR_4->alpha[VAR_6], VAR_3)) {
    goto fail1;
   }
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->colorsTotal; VAR_6++) {
  VAR_4->open[VAR_6] = 0;
 }

 return VAR_1;
fail1:
 return VAR_0;
}
