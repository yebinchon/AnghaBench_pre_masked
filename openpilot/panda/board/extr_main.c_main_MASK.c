
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int PSC; int EGR; int CR1; } ;
struct TYPE_7__ {int CR2; } ;
struct TYPE_6__ {int CR2; } ;
struct TYPE_5__ {char* board_type; int (* set_led ) (int ,int) ;int (* set_esp_gps_mode ) (int ) ;int (* init ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_16 ;
 int FUNC_6 () ;
 TYPE_1__* VAR_17 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_13 () ;
 scalar_t__ VAR_21 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int *,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_23 () ;
 scalar_t__ VAR_26 ;

int FUNC_24(void) {

  FUNC_10();


  FUNC_6();
  FUNC_13();
  FUNC_9();
  FUNC_8();
  FUNC_2();


  FUNC_14("\n\n\n************************ MAIN START ************************\n");


  if(VAR_19 == VAR_2){
    FUNC_14("Unsupported board type\n");
    while (1) { }
  }

  FUNC_14("Config:\n");
  FUNC_14("  Board type: "); FUNC_14(VAR_17->board_type); FUNC_14("\n");
  FUNC_14(VAR_18 ? "  Real serial\n" : "  USB serial\n");
  FUNC_14(VAR_20 ? "  ESP wants bootmode\n" : "  No bootmode\n");


  VAR_17->init();


  FUNC_11();


  if (VAR_18) {


    FUNC_22(&VAR_22, 115200);
  }

  if (FUNC_3()) {
    FUNC_22(&VAR_23, 9600);
  } else {

    FUNC_22(&VAR_23, 115200);
  }

  if(FUNC_4()){

    FUNC_22(&VAR_24, 10400);
    VAR_12->CR2 |= VAR_14;
    FUNC_22(&VAR_25, 10400);
    VAR_13->CR2 |= VAR_14;
  }




  VAR_8->PSC = 48-1;
  VAR_8->CR1 = VAR_10;
  VAR_8->EGR = VAR_11;




  int VAR_27 = FUNC_15(VAR_6, 0);
  if (VAR_27 == -1) {
    FUNC_14("Failed to set safety mode\n");
    while (1) {

    }
  }
  VAR_16 = VAR_0;
  FUNC_5();


  FUNC_16();
  FUNC_21(VAR_9, 1464);
  FUNC_0(VAR_7);





  FUNC_23();

  FUNC_14("**** INTERRUPTS ON ****\n");
  FUNC_12();


  uint64_t VAR_28 = 0;

  for (VAR_28=0;;VAR_28++) {
    if (VAR_21 == VAR_5) {
      int VAR_29 = ((VAR_26 == VAR_15) ? 4 : 1);


      for (int VAR_30 = 0; VAR_30 < VAR_29; VAR_30++) {
        for (int VAR_31 = 0; VAR_31 < 1024; VAR_31 += 8) {
          for (int VAR_32 = 0; VAR_32 < (128/VAR_29); VAR_32++) {
            VAR_17->set_led(VAR_4, 1);
            if (VAR_31 < 512) { FUNC_7(VAR_31); } else { FUNC_7(1024-VAR_31); }
            VAR_17->set_led(VAR_4, 0);
            if (VAR_31 < 512) { FUNC_7(512-VAR_31); } else { FUNC_7(VAR_31-512); }
          }
        }
      }
    } else {
      FUNC_1();
    }
  }

  return 0;
}
