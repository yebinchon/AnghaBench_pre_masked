
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int nkro; int raw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const* FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int const* VAR_5 ;

 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int const VAR_9 ;



 int const VAR_10 ;


 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 TYPE_3__ VAR_11 ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int const) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int const,int const,int const) ;

const macro_t *FUNC_16(keyrecord_t *VAR_17, uint8_t VAR_18, uint8_t VAR_19)
{
      switch(VAR_18) {
        case 129:
          if (VAR_17->event.pressed) {



            FUNC_11(1UL<<129);
          }
          break;
        case 132:
          if (VAR_17->event.pressed) {



            FUNC_11(1UL<<132);
          }
          break;
        case 131:
          if (VAR_17->event.pressed) {



            FUNC_11(1UL<<131);
          }
          break;
        case 130:
          if (VAR_17->event.pressed) {
            FUNC_10(130);
            FUNC_15(130, 128, VAR_9);
          } else {
            FUNC_9(130);
            FUNC_15(130, 128, VAR_9);
          }
          break;
        case 128:
          if (VAR_17->event.pressed) {
            FUNC_10(128);
            FUNC_15(130, 128, VAR_9);
          } else {
            FUNC_9(128);
            FUNC_15(130, 128, VAR_9);
          }
          break;
        case 133:
          if (VAR_17->event.pressed) {
            FUNC_12(VAR_3);



          } else {
            FUNC_14(VAR_3);
          }
        break;
        case 12:
          if (VAR_17->event.pressed) {




            FUNC_9(128);
            FUNC_9(130);
            FUNC_9(VAR_9);
            FUNC_10(VAR_10);
            if (!FUNC_6()) {
                FUNC_5();
            }
            VAR_11.raw = FUNC_7();
            VAR_11.nkro = 1;
            FUNC_8(VAR_11.raw);
          }
        break;
        case 13:
          if (VAR_17->event.pressed) {



            FUNC_9(VAR_10);
          }
        break;
        case 14:
          if (VAR_17->event.pressed) {
            return FUNC_1( FUNC_0(VAR_0), FUNC_0(VAR_7), FUNC_0(VAR_2), FUNC_0(VAR_8), FUNC_0(VAR_6), FUNC_0(VAR_4), FUNC_3(VAR_0), FUNC_3(VAR_7), FUNC_3(VAR_2), FUNC_3(VAR_8), FUNC_3(VAR_6), FUNC_3(VAR_4), VAR_1 );
          }
        break;
      }
    return VAR_5;
}
