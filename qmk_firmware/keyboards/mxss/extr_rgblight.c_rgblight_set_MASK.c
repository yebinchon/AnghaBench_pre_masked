
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_10__ {int sat; int hue; } ;
struct TYPE_9__ {int mode; int enable; } ;
struct TYPE_8__ {scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;

void FUNC_4(void) {
  if (!VAR_8.enable) {
    for (uint8_t VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
      if (VAR_9 == VAR_1 && VAR_9 == VAR_2)
          continue;

      VAR_7[VAR_9].r = 0;
      VAR_7[VAR_9].g = 0;
      VAR_7[VAR_9].b = 0;
    }
  }

  switch (VAR_4) {
      case 129:
      FUNC_2(0, 0, 0, &VAR_7[VAR_1]);
      FUNC_2(0, 0, 0, &VAR_7[VAR_2]);
      break;

      case 130:
      FUNC_0(&VAR_6[0], &VAR_7[VAR_1]);
      FUNC_0(&VAR_6[1], &VAR_7[VAR_2]);
      break;

      case 128:
      if (VAR_3[0].hue == 0 && VAR_3[0].hue == 0 && (VAR_8.mode >= 15 && VAR_8.mode <= 23))
          FUNC_2(0, 0, 0, &VAR_7[VAR_1]);
      else
        FUNC_1(VAR_3[0].hue, VAR_3[0].sat, VAR_5, &VAR_7[VAR_1]);

      if (VAR_3[1].hue == 0 && VAR_3[1].hue == 0 && (VAR_8.mode >= 15 && VAR_8.mode <= 23))
          FUNC_2(0, 0, 0, &VAR_7[VAR_2]);
      else
          FUNC_1(VAR_3[1].hue, VAR_3[1].sat, VAR_5, &VAR_7[VAR_2]);
      break;

      default:
      break;
  }

   FUNC_3(VAR_7, VAR_0);
}
