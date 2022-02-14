
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

 int VAR_4 ;
 int const* FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

const macro_t *FUNC_5(keyrecord_t *VAR_10, uint8_t VAR_11, uint8_t VAR_12)
{
    if (!FUNC_4()) {
      FUNC_3();
    }

    switch (VAR_11) {
      case 128:
        if (VAR_10->event.pressed){
          return FUNC_1 (FUNC_0(1), FUNC_2(VAR_3),FUNC_2(VAR_1),FUNC_2(VAR_4), FUNC_2(VAR_4), FUNC_2(VAR_6), FUNC_2(VAR_8), FUNC_2(VAR_9), FUNC_2(VAR_6), FUNC_2(VAR_7), FUNC_2(VAR_4), FUNC_2(VAR_0), VAR_2);
        }
    }

    return VAR_5;
}
