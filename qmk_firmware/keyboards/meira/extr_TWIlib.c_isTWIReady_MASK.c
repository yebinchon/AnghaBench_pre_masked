
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ mode; int errorCode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;




 int VAR_6 ;
 int FUNC_1 (char*,int) ;

uint8_t FUNC_2()
{
 if ( (VAR_4.mode == VAR_1) | (VAR_4.mode == VAR_2) )
 {


  return 1;
 }
 else
 {
  if(VAR_4.mode == VAR_0){
   switch(VAR_4.errorCode){
          case 128:
              break;
          case 129:

           break;
    case 131:
    case 130:

           FUNC_1("I2C init error: %d\n", VAR_4.errorCode);
           VAR_3 = (1 << VAR_5)|(1 << VAR_6);
           FUNC_0();
           break;
          default:
           FUNC_1("Other i2c init error: %d\n", VAR_4.errorCode);
   }
  }
  return 0;
 }
}
