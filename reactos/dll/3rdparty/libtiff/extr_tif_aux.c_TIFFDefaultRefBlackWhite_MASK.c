
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* td_refblackwhite; scalar_t__ td_photometric; long td_bitspersample; } ;
typedef TYPE_1__ TIFFDirectory ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(TIFFDirectory* VAR_1)
{
 int VAR_2;

        VAR_1->td_refblackwhite = (float *)FUNC_0(6*sizeof (float));
 if (VAR_1->td_refblackwhite == ((void*)0))
  return 0;
        if (VAR_1->td_photometric == VAR_0) {




  VAR_1->td_refblackwhite[0] = 0.0F;
  VAR_1->td_refblackwhite[1] = VAR_1->td_refblackwhite[3] =
   VAR_1->td_refblackwhite[5] = 255.0F;
  VAR_1->td_refblackwhite[2] = VAR_1->td_refblackwhite[4] = 128.0F;
 } else {



  for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
      VAR_1->td_refblackwhite[2*VAR_2+0] = 0;
      VAR_1->td_refblackwhite[2*VAR_2+1] =
       (float)((1L<<VAR_1->td_bitspersample)-1L);
  }
 }
 return 1;
}
