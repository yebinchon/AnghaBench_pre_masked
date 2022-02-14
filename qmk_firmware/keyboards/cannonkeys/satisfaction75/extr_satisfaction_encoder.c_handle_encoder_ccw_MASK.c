
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int enable; int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

uint16_t FUNC_3(){
  uint16_t VAR_8 = 0;
  switch(VAR_5){
    default:
    case 128:
      VAR_8 = VAR_3;
      break;
    case 130:
      VAR_8 = VAR_2;
      break;
    case 129:
      VAR_8 = VAR_4;
      break;
    case 136:

      if(VAR_6.level != 0){
        VAR_6.level = VAR_6.level - 1;
      }
      FUNC_0(VAR_6.level);
      if (VAR_6.level == 0){
        VAR_6.enable = 0;
      }
      break;
    case 135:
      VAR_8 = VAR_1;
      break;
    case 134:
      FUNC_2(-1);
      VAR_7 = 1;
      break;
  }
  return VAR_8;
}
