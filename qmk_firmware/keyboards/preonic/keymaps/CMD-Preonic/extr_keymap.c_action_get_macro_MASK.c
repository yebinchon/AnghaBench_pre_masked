
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
 int const* VAR_1 ;

 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned long const,int const,int ) ;

const macro_t *FUNC_8(keyrecord_t *VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{
      switch(VAR_7) {
        case 129:
          if (VAR_6->event.pressed) {



            FUNC_4(1UL<<129);
          }
          break;
        case 134:
          if (VAR_6->event.pressed) {



            FUNC_4(1UL<<134);
          }
          break;
        case 133:
          if (VAR_6->event.pressed) {



            FUNC_4(1UL<<133);
          }
          break;
        case 132:
          if (VAR_6->event.pressed) {



            FUNC_4(1UL<<132);
          }
          break;
        case 130:
          if (VAR_6->event.pressed) {



            FUNC_4(1UL<<130);
          }
          break;
        case 135:
          if (VAR_6->event.pressed) {



            FUNC_4(1UL<<131);
          }
          break;
        case 131:
          if (VAR_6->event.pressed) {
            FUNC_3(131);
            FUNC_7(131, 128, VAR_2);
          } else {
            FUNC_2(131);
            FUNC_7(131, 128, VAR_2);
          }
          break;
        case 128:
          if (VAR_6->event.pressed) {
            FUNC_3(128);
            FUNC_7(131, 128, VAR_2);
          } else {
            FUNC_2(128);
            FUNC_7(131, 128, VAR_2);
          }
          break;
        case 136:
          if (VAR_6->event.pressed) {
            FUNC_5(VAR_0);



          } else {
            FUNC_6(VAR_0);
          }
        break;
      }
    return VAR_1;
}
