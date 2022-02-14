
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int col; int row; } ;
struct TYPE_5__ {TYPE_2__ key; scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,int,int) ;

bool FUNC_2(uint16_t VAR_0, keyrecord_t *VAR_1) {
    static char VAR_2[10] = " ";

    if (VAR_1->event.pressed) {
      FUNC_1(VAR_2, 10, "C%dR%d ", VAR_1->event.key.col, VAR_1->event.key.row);

      FUNC_0(VAR_2);
    }
    return 0;

  return 1;
}
