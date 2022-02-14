
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int breathing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (int,int ) ;
 int VAR_6 ;

uint16_t FUNC_3(){
  uint16_t VAR_7 = 0;
  switch(VAR_4){
    case 128:
      VAR_7 = VAR_3;
      break;
    default:
    case 130:
      VAR_7 = VAR_2;
      break;
    case 129:
      VAR_7 = VAR_1;
      break;
    case 136:

      VAR_5.breathing = !VAR_5.breathing;
      if(!VAR_5.breathing){
        FUNC_0();
      } else{
        FUNC_1();
      }
      break;
    case 134:
      VAR_6 = (VAR_6 + 1) % 5;
    case 135:
      break;
  }
  return VAR_7;
}
