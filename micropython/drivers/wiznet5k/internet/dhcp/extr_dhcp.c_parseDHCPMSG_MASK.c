
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int8_t ;
struct TYPE_2__ {scalar_t__* chaddr; int op; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;



 int VAR_7 ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_8 ;

 int FUNC_1 (char*,int,int,int,int,int,int) ;
 int FUNC_2 (int ,int*,int,int*,int*) ;



int8_t FUNC_3(void)
{
 uint8_t VAR_9[6];
 uint16_t VAR_10;
 uint16_t VAR_11;

 uint8_t * VAR_12;
 uint8_t * VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;

   if((VAR_11 = FUNC_0(VAR_3)) > 0)
   {
    VAR_11 = FUNC_2(VAR_3, (uint8_t *)VAR_8, VAR_11, VAR_9, &VAR_10);



   }
   else return 0;
 if (VAR_10 == VAR_1) {

  if ( (VAR_8->chaddr[0] != VAR_0[0]) || (VAR_8->chaddr[1] != VAR_0[1]) ||
       (VAR_8->chaddr[2] != VAR_0[2]) || (VAR_8->chaddr[3] != VAR_0[3]) ||
       (VAR_8->chaddr[4] != VAR_0[4]) || (VAR_8->chaddr[5] != VAR_0[5]) )
         return 0;
      VAR_14 = 0;
  VAR_12 = (uint8_t *)(&VAR_8->op);
  VAR_12 = VAR_12 + 240;
  VAR_13 = VAR_12 + (VAR_11 - 240);

  while ( VAR_12 < VAR_13 ) {

   switch ( *VAR_12 ) {

      case 131 :
         VAR_12 = VAR_13;
       break;
            case 130 :
       VAR_12++;
       break;
      case 134 :
       VAR_12++;
       VAR_12++;
       VAR_14 = *VAR_12++;
       break;
      case 128 :
       VAR_12++;
       VAR_12++;
       VAR_6[0] = *VAR_12++;
       VAR_6[1] = *VAR_12++;
       VAR_6[2] = *VAR_12++;
       VAR_6[3] = *VAR_12++;
       break;
      case 129 :
       VAR_12++;
       VAR_15 = *VAR_12++;
       VAR_5[0] = *VAR_12++;
       VAR_5[1] = *VAR_12++;
       VAR_5[2] = *VAR_12++;
       VAR_5[3] = *VAR_12++;
       VAR_12 = VAR_12 + (VAR_15 - 4);
       break;
      case 132 :
       VAR_12++;
       VAR_15 = *VAR_12++;
       VAR_4[0] = *VAR_12++;
       VAR_4[1] = *VAR_12++;
       VAR_4[2] = *VAR_12++;
       VAR_4[3] = *VAR_12++;
       VAR_12 = VAR_12 + (VAR_15 - 4);
       break;
      case 135 :
       VAR_12++;
       VAR_15 = *VAR_12++;
       VAR_7 = *VAR_12++;
       VAR_7 = (VAR_7 << 8) + *VAR_12++;
       VAR_7 = (VAR_7 << 8) + *VAR_12++;
       VAR_7 = (VAR_7 << 8) + *VAR_12++;



       break;
      case 133 :
       VAR_12++;
       VAR_15 = *VAR_12++;
       VAR_2[0] = *VAR_12++;
       VAR_2[1] = *VAR_12++;
       VAR_2[2] = *VAR_12++;
       VAR_2[3] = *VAR_12++;
       break;
      default :
       VAR_12++;
       VAR_15 = *VAR_12++;
       VAR_12 += VAR_15;
       break;
   }
  }
 }
 return VAR_14;
}
