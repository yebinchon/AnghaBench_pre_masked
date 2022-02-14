
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const* FUNC_0 (int ,int ,int ,int ,int ,int ,int ,...) ;
 int const* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;



 int VAR_12 ;



 int FUNC_2 () ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int const,int const,int ) ;

const macro_t *FUNC_8(keyrecord_t *VAR_13, uint8_t VAR_14, uint8_t VAR_15)
{
    switch(VAR_14) {
    case 128:
 if (VAR_13->event.pressed) {
     FUNC_4(128);
     FUNC_7(130, 128, VAR_12);
 } else {
     FUNC_3(128);
     FUNC_7(130, 128, VAR_12);
 }
 break;
    case 130:
 if (VAR_13->event.pressed) {
     FUNC_4(130);
     FUNC_7(130, 128, VAR_12);
 } else {
     FUNC_3(130);
     FUNC_7(130, 128, VAR_12);
 }
 break;
    case 133:
 if (VAR_13->event.pressed) {
     FUNC_5(VAR_5);



 } else {
     FUNC_6(VAR_5);
 }
 break;
    case 129:
 return FUNC_0(FUNC_1(1), FUNC_1(2), FUNC_1(3), FUNC_1(VAR_9),
    FUNC_1(1), FUNC_1(2), FUNC_1(3), FUNC_1(VAR_9),
    FUNC_1(1), FUNC_1(2), FUNC_1(3), FUNC_1(4),
    VAR_3);
    case 132:
 return FUNC_0(FUNC_1(VAR_2), FUNC_1(VAR_7), FUNC_1(VAR_0), FUNC_1(VAR_1), FUNC_1(VAR_10), FUNC_1(VAR_11), VAR_3);
    case 131:
 return FUNC_0(FUNC_1(VAR_6), FUNC_1(VAR_10), FUNC_1(VAR_11), FUNC_1(VAR_9), FUNC_1(VAR_6), FUNC_1(VAR_4), VAR_3);
    };
    return VAR_8;
}
