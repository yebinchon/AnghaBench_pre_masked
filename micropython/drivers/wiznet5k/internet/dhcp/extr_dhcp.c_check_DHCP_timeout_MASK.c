
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 int VAR_4 ;


 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

uint8_t FUNC_3(void)
{
 uint8_t VAR_9 = VAR_1;

 if (VAR_5 < VAR_3) {
  if (VAR_8 < VAR_7) {

   switch ( VAR_6 ) {
    case 130 :

     FUNC_1();
    break;

    case 129 :


     FUNC_2();
    break;

    case 128 :


     FUNC_2();
    break;

    default :
    break;
   }

   VAR_7 = 0;
   VAR_8 = VAR_7 + VAR_2;
   VAR_5++;
  }
 } else {

  switch(VAR_6) {
   case 130:
    VAR_6 = VAR_4;
    VAR_9 = VAR_0;
    break;
   case 129:
   case 128:
    FUNC_1();
    VAR_6 = 130;
    break;
   default :
    break;
  }
  FUNC_0();
 }
 return VAR_9;
}
