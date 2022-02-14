
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_4__ {int sy; int sx; scalar_t__** pixels; int ** tpixels; scalar_t__ trueColor; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (unsigned char,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3 (gdImagePtr VAR_0, gdIOCtx * VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_0(VAR_0, VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0->sy; VAR_3++) {
  for (VAR_2 = 0; VAR_2 < VAR_0->sx; VAR_2++) {

   if (VAR_0->trueColor) {
    FUNC_2(VAR_0->tpixels[VAR_3][VAR_2], VAR_1);
   } else {
    FUNC_1((unsigned char) VAR_0->pixels[VAR_3][VAR_2], VAR_1);
   }
  }
 }
}
