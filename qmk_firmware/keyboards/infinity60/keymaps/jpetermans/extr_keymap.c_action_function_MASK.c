
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int msg_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
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
 int VAR_10 ;
 int FUNC_0 (int *,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_1(keyrecord_t *VAR_13, uint8_t VAR_14, uint8_t VAR_15) {
  msg_t VAR_16;

  switch(VAR_14) {
    case 135:
      if(VAR_13->event.pressed) {
        VAR_12 = VAR_12 == VAR_0 ? VAR_5 : VAR_0;
        VAR_16=VAR_8;
        FUNC_0(&VAR_11, VAR_16, VAR_7);
      }
      break;

    case 134:
      if(VAR_13->event.pressed) {
        VAR_10 ^= 1;
        VAR_16=(VAR_10 << 8) | VAR_9;
        FUNC_0(&VAR_11, VAR_16, VAR_7);
      }
      break;

    case 130:
      if(VAR_13->event.pressed) {
        VAR_12 = VAR_12 == VAR_2 ? VAR_5 : VAR_2;

        VAR_16=(4 << 8) | VAR_1;
        FUNC_0(&VAR_11, VAR_16, VAR_7);
      }
      break;

    case 133:
      if(VAR_13->event.pressed) {
        VAR_16=(1 << 8) | VAR_6;
        FUNC_0(&VAR_11, VAR_16, VAR_7);
      }
      break;

    case 132:
      if(VAR_13->event.pressed) {
        VAR_16=(0 << 8) | VAR_6;
        FUNC_0(&VAR_11, VAR_16, VAR_7);
      }
      break;


    case 128:
      VAR_12 = VAR_5;
      break;
    case 129:
      VAR_12 = VAR_4;
      break;
    case 131:
      VAR_12 = VAR_3;
      break;

  }
}
