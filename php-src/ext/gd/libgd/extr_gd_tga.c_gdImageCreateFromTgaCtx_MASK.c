
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int* bitmap; int width; int height; scalar_t__ bits; scalar_t__ fliph; scalar_t__ flipv; scalar_t__ alphabits; int * ident; } ;
typedef TYPE_1__ oTga ;
typedef TYPE_2__* gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_14__ {int** tpixels; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__* volatile,int ) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__* volatile) ;
 int FUNC_4 (TYPE_2__* volatile) ;
 int FUNC_5 (TYPE_2__* volatile) ;
 int FUNC_6 (TYPE_2__* volatile,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int,int,int,scalar_t__) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_11 (int *,TYPE_1__*) ;

gdImagePtr FUNC_12(gdIOCtx* VAR_3)
{
 int VAR_4 = 0;
 oTga *VAR_5 = ((void*)0);


 volatile gdImagePtr VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8 = 0;

 VAR_5 = (oTga *) FUNC_7(sizeof(oTga));
 if (!VAR_5) {
  return ((void*)0);
 }

 VAR_5->bitmap = ((void*)0);
 VAR_5->ident = ((void*)0);

 if (FUNC_10(VAR_3, VAR_5) < 0) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }






 if (FUNC_11(VAR_3, VAR_5) < 0) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 VAR_6 = FUNC_2((int)VAR_5->width, (int)VAR_5->height );

 if (VAR_6 == 0) {
  FUNC_0( VAR_5 );
  return ((void*)0);
 }





 if (VAR_5->alphabits) {
  FUNC_1(VAR_6, 0);
  FUNC_6(VAR_6, 1);
 }


 for (VAR_8 = 0; VAR_8 < VAR_5->height; VAR_8++) {
  register int *VAR_9 = VAR_6->tpixels[VAR_8];
  for ( VAR_7 = 0; VAR_7 < VAR_5->width; VAR_7++, VAR_9++) {
   if (VAR_5->bits == VAR_0) {
    *VAR_9 = FUNC_8(VAR_5->bitmap[VAR_4 + 2], VAR_5->bitmap[VAR_4 + 1], VAR_5->bitmap[VAR_4]);
    VAR_4 += 3;
   } else if (VAR_5->bits == VAR_1 && VAR_5->alphabits) {
    register int VAR_10 = VAR_5->bitmap[VAR_4 + 3];

    *VAR_9 = FUNC_9(VAR_5->bitmap[VAR_4 + 2], VAR_5->bitmap[VAR_4 + 1], VAR_5->bitmap[VAR_4], VAR_2 - (VAR_10 >> 1));
    VAR_4 += 4;
   }
  }
 }

 if (VAR_5->flipv && VAR_5->fliph) {
  FUNC_3(VAR_6);
 } else if (VAR_5->flipv) {
  FUNC_5(VAR_6);
 } else if (VAR_5->fliph) {
  FUNC_4(VAR_6);
 }

 FUNC_0(VAR_5);

 return VAR_6;
}
