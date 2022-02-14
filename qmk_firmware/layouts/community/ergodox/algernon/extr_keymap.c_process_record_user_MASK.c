
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {int row; int col; } ;
struct TYPE_6__ {scalar_t__ pressed; TYPE_1__ key; } ;
struct TYPE_7__ {TYPE_2__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,int ,int ,int ,...) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_16 ;
 scalar_t__* VAR_17 ;
 int FUNC_5 (unsigned long) ;
 unsigned long VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ,scalar_t__,char*) ;

bool FUNC_9 (uint16_t VAR_21, keyrecord_t *VAR_22) {
  if (VAR_21 == VAR_8 && VAR_22->event.pressed) {
    bool VAR_23 = 1;

    if ((FUNC_3 ()) && !FUNC_4 ()) {
      FUNC_2 ();
      VAR_23 = 0;
    }
    if (VAR_18 & (1UL<<VAR_2)) {
      FUNC_5 (VAR_2);
      VAR_23 = 0;
    }
    return VAR_23;
  }

  if (VAR_20 && !VAR_22->event.pressed) {
    uint8_t VAR_24;


    for (VAR_24 = 0; VAR_24 < 3; VAR_24++) {
      VAR_17[VAR_24] = VAR_17[VAR_24 + 1];
    }
    VAR_17[3] = VAR_21;

    if (VAR_17[0] == VAR_5 && VAR_17[1] == VAR_4 && VAR_17[2] == VAR_14 && VAR_17[3] == VAR_6) {
      FUNC_0 (VAR_6, VAR_13, VAR_9, VAR_5, VAR_13, VAR_10, 0);
      FUNC_6 (VAR_11);
      FUNC_6 (VAR_7);
      FUNC_7 (VAR_7);
      FUNC_7 (VAR_11);

      FUNC_0 (VAR_3, VAR_13, VAR_5, VAR_4, VAR_15, VAR_12, VAR_10, 0);

      return 0;
    }
  }

  return 1;
}
