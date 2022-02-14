
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtxPtr ;
struct TYPE_5__ {int** tpixels; int** pixels; scalar_t__ trueColor; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

gdImagePtr FUNC_4 (gdIOCtxPtr VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4, VAR_5;
 gdImagePtr VAR_6;


 VAR_6 = FUNC_0(VAR_1, &VAR_2, &VAR_3);

 if (VAR_6 == ((void*)0)) {
  goto fail1;
 }



 if (VAR_6->trueColor) {
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    int VAR_7;
    if (!FUNC_2(&VAR_7, VAR_1)) {
     goto fail2;
    }
    VAR_6->tpixels[VAR_5][VAR_4] = VAR_7;
   }
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    int VAR_8;
    VAR_8 = FUNC_1(VAR_1);
    if (VAR_8 == VAR_0) {
     goto fail2;
    }

    VAR_6->pixels[VAR_5][VAR_4] = VAR_8;
   }
  }
 }

 return VAR_6;

fail2:
 FUNC_3 (VAR_6);
fail1:
 return 0;
}
