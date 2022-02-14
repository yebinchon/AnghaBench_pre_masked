
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int hue; int sat; } ;
typedef int LED_TYPE ;


 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,int,int *) ;

void FUNC_2(uint16_t VAR_6, uint8_t VAR_7, uint8_t VAR_8, LED_TYPE *VAR_9) {
  uint8_t VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13, VAR_14;


  if (VAR_9 == &VAR_5[VAR_1]) {
      VAR_4[0].hue = VAR_6;
      VAR_4[0].sat = VAR_7;
  } else if (VAR_9 == &VAR_5[VAR_2]) {
      VAR_4[1].hue = VAR_6;
      VAR_4[1].sat = VAR_7;
  }

  if (VAR_8 > VAR_3) {
      VAR_8=VAR_3;
  }

  if (VAR_7 == 0) {
    VAR_10 = VAR_8;
    VAR_11 = VAR_8;
    VAR_12 = VAR_8;
  } else {
    VAR_13 = ((255 - VAR_7) * VAR_8) >> 8;
    VAR_14 = (VAR_8 - VAR_13) * (VAR_6 % 60) / 60;

    switch (VAR_6 / 60) {
      case 0:
        VAR_10 = VAR_8;
        VAR_11 = VAR_13 + VAR_14;
        VAR_12 = VAR_13;
        break;
      case 1:
        VAR_10 = VAR_8 - VAR_14;
        VAR_11 = VAR_8;
        VAR_12 = VAR_13;
        break;
      case 2:
        VAR_10 = VAR_13;
        VAR_11 = VAR_8;
        VAR_12 = VAR_13 + VAR_14;
        break;
      case 3:
        VAR_10 = VAR_13;
        VAR_11 = VAR_8 - VAR_14;
        VAR_12 = VAR_8;
        break;
      case 4:
        VAR_10 = VAR_13 + VAR_14;
        VAR_11 = VAR_13;
        VAR_12 = VAR_8;
        break;
      case 5:
        VAR_10 = VAR_8;
        VAR_11 = VAR_13;
        VAR_12 = VAR_8 - VAR_14;
        break;
    }
  }
  VAR_10 = FUNC_0(&VAR_0[VAR_10]);
  VAR_11 = FUNC_0(&VAR_0[VAR_11]);
  VAR_12 = FUNC_0(&VAR_0[VAR_12]);

  FUNC_1(VAR_10, VAR_11, VAR_12, VAR_9);
}
