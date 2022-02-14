
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int * yiaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;





 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* VAR_20 ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ,int ,int) ;

uint8_t FUNC_12(void)
{
 uint8_t VAR_21;
 uint8_t VAR_22;

 if(VAR_18 == VAR_14) return VAR_8;

 if(FUNC_5(VAR_7) != VAR_13)
    FUNC_11(VAR_7, VAR_15, VAR_1, 0x00);

 VAR_22 = VAR_6;
 VAR_21 = FUNC_6();

 switch ( VAR_18 ) {
    case 131 :
         VAR_10[0] = 0;
         VAR_10[1] = 0;
         VAR_10[2] = 0;
         VAR_10[3] = 0;
     FUNC_9();
     VAR_18 = 132;
     break;
  case 132 :
   if (VAR_21 == VAR_5){



            VAR_10[0] = VAR_20->yiaddr[0];
            VAR_10[1] = VAR_20->yiaddr[1];
            VAR_10[2] = VAR_20->yiaddr[2];
            VAR_10[3] = VAR_20->yiaddr[3];

    FUNC_10();
    VAR_18 = 129;
   } else VAR_22 = FUNC_1();
         break;

  case 129 :
   if (VAR_21 == VAR_0) {




    if (FUNC_0()) {

     FUNC_2();
     FUNC_8();

     VAR_18 = 130;
    } else {

     FUNC_8();
     FUNC_3();
        VAR_18 = 131;
    }
   } else if (VAR_21 == VAR_4) {





    FUNC_8();

    VAR_18 = 132;
   } else VAR_22 = FUNC_1();
  break;

  case 130 :
     VAR_22 = VAR_3;
   if ((VAR_16 != VAR_11) && ((VAR_16/2) < VAR_19)) {





    VAR_21 = 0;
    VAR_12[0] = VAR_10[0];
    VAR_12[1] = VAR_10[1];
    VAR_12[2] = VAR_10[2];
    VAR_12[3] = VAR_10[3];

    VAR_9++;

    FUNC_10();

    FUNC_8();

    VAR_18 = 128;
   }
  break;

  case 128 :
     VAR_22 = VAR_3;
   if (VAR_21 == VAR_0) {
    VAR_17 = 0;
    if (VAR_12[0] != VAR_10[0] ||
        VAR_12[1] != VAR_10[1] ||
        VAR_12[2] != VAR_10[2] ||
        VAR_12[3] != VAR_10[3])
    {
     VAR_22 = VAR_2;
     FUNC_4();




    }



    FUNC_8();
    VAR_18 = 130;
   } else if (VAR_21 == VAR_4) {





    FUNC_8();

    VAR_18 = 132;
   } else VAR_22 = FUNC_1();
     break;
  default :
     break;
 }

 return VAR_22;
}
