
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


 int FUNC_0 (int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int const* FUNC_1 (int ,int ,int ,int ,...) ;
 int const* VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_20 ;
 int VAR_21 ;




 int FUNC_5 () ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int const,int const,int ) ;

const macro_t *FUNC_11(keyrecord_t *VAR_22, uint8_t VAR_23, uint8_t VAR_24)
{
    switch(VAR_23) {
    case 128:
 if (VAR_22->event.pressed) {
     FUNC_7(128);
     FUNC_10(130, 128, VAR_21);
 } else {
     FUNC_6(128);
     FUNC_10(130, 128, VAR_21);
 }
 break;
    case 130:
 if (VAR_22->event.pressed) {
     FUNC_7(130);
     FUNC_10(130, 128, VAR_21);
 } else {
     FUNC_6(130);
     FUNC_10(130, 128, VAR_21);
 }
 break;
    case 139:
 if (VAR_22->event.pressed) {
     FUNC_8(VAR_15);



 } else {
     FUNC_9(VAR_15);
 }
 break;
    case 137:
     return FUNC_1(FUNC_2(9), FUNC_2(9), FUNC_2(9), FUNC_2(VAR_19),FUNC_2(9), FUNC_2(9), FUNC_2(9), FUNC_2(VAR_19),FUNC_2(9), FUNC_2(9), FUNC_2(9), FUNC_2(9),VAR_0);
    case 136:
     return FUNC_1(FUNC_2(VAR_1), FUNC_2(VAR_1), FUNC_2(VAR_19), FUNC_2(VAR_2), FUNC_2(VAR_20), VAR_0);
    case 135:
     return FUNC_1( FUNC_0(VAR_12), FUNC_3(VAR_10), FUNC_4(VAR_12), VAR_0 );
    case 134:
     return FUNC_1( FUNC_0(VAR_12), FUNC_3(VAR_7), FUNC_4(VAR_12), VAR_0 );
    case 133:
     return FUNC_1( FUNC_0(VAR_12), FUNC_3(VAR_9), FUNC_4(VAR_12), VAR_0 );
    case 132:
     return FUNC_1( FUNC_3(VAR_7),
        FUNC_0(VAR_12), FUNC_3(VAR_3), FUNC_4(VAR_12),
        FUNC_3(VAR_8), FUNC_3(VAR_13), FUNC_3(VAR_4), FUNC_3(VAR_9), FUNC_3(VAR_10), FUNC_3(VAR_6), FUNC_3(VAR_5), FUNC_3(VAR_14), FUNC_3(VAR_13), VAR_0 );
    case 131:
     return FUNC_1( FUNC_0(VAR_11), FUNC_3(VAR_17), FUNC_4(VAR_11), VAR_0 );
    case 138:
     return FUNC_1( FUNC_0(VAR_11), FUNC_3(VAR_5), FUNC_4(VAR_11), VAR_0 );
    case 129:
     return FUNC_1( FUNC_0(VAR_11), FUNC_3(VAR_16), FUNC_4(VAR_11), VAR_0 );
    };
    return VAR_18;
}
