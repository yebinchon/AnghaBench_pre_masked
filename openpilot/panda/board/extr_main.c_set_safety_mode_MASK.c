
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_2__ {int (* set_can_mode ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(uint16_t VAR_7, int16_t VAR_8) {
  int VAR_9 = FUNC_3(VAR_7, VAR_8);
  if (VAR_9 == -1) {
    FUNC_2("Error: safety set mode failed\n");
  } else {
    switch (VAR_7) {
        case 128:
          FUNC_4(0);
          if(FUNC_0()){
            VAR_5->set_can_mode(VAR_2);
          }
          VAR_4 = VAR_1;
          break;
        case 129:
          FUNC_4(0);
          VAR_6 = 0U;
          if(FUNC_0()){
            VAR_5->set_can_mode(VAR_3);
          }
          VAR_4 = VAR_0;
          break;
        default:
          FUNC_4(1);
          VAR_6 = 0U;
          if(FUNC_0()){
            VAR_5->set_can_mode(VAR_2);
          }
          VAR_4 = VAR_0;
          break;
      }
    FUNC_1();
  }
}
