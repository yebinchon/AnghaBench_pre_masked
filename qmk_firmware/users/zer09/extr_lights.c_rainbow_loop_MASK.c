
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {size_t pos; int status; int forced; } ;


 int VAR_0 ;


 size_t VAR_1 ;
 int FUNC_0 (size_t,size_t,size_t,int ,size_t) ;
 size_t** VAR_2 ;
 size_t* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

bool FUNC_3(uint8_t VAR_7) {
  static uint16_t VAR_8 = 0;
  static uint16_t VAR_9 = 0;
  static uint8_t VAR_10, VAR_11, VAR_12, VAR_13;

  if (FUNC_1(VAR_8) < 8) {
    return 0;
  }

  if (VAR_9 >= 360) {
    VAR_9 = 0;
  }

  VAR_8 = FUNC_2();
  VAR_10 = VAR_3[(VAR_9 + 120) % 360];
  VAR_11 = VAR_3[VAR_9];
  VAR_12 = VAR_3[(VAR_9 + 240) % 360];

  VAR_9++;

  bool VAR_14 = 0;

  for (uint8_t VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
    VAR_13 = VAR_6[VAR_15].pos;

    switch (VAR_6[VAR_15].status) {
    case 128:
      if (!VAR_4[VAR_13] || VAR_6[VAR_15].forced) {
        FUNC_0(VAR_10, VAR_11, VAR_12, VAR_5, VAR_13);
        VAR_14 = 1;
      }

      break;
    case 129:
      if (!VAR_4[VAR_13] || VAR_6[VAR_15].forced) {
        FUNC_0(VAR_2[VAR_7][0], VAR_2[VAR_7][1], VAR_2[VAR_7][2], VAR_5, VAR_13);
        VAR_14 = 1;
      }

      VAR_6[VAR_15].status = VAR_0;
      break;
    default:
      break;
    }
  }

  return VAR_14;
}
