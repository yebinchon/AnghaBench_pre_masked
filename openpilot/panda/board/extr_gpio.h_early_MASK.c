
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_14__ {unsigned int IDCODE; } ;
struct TYPE_13__ {scalar_t__ PUPDR; scalar_t__ ODR; scalar_t__ MODER; } ;
struct TYPE_12__ {scalar_t__ PUPDR; scalar_t__ ODR; scalar_t__ MODER; } ;
struct TYPE_11__ {scalar_t__ PUPDR; scalar_t__ ODR; scalar_t__ MODER; } ;
struct TYPE_10__ {int AHB1ENR; } ;
struct TYPE_9__ {scalar_t__ VTOR; } ;
struct TYPE_8__ {int (* set_led ) (int ,int) ;int (* set_esp_gps_mode ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_7__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 TYPE_3__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

void FUNC_8(void) {

  VAR_18 = 0;


  FUNC_3();


  if ((VAR_16 != VAR_0) &&
      (VAR_16 != VAR_2) &&
      (VAR_16 != VAR_3)) {
    VAR_16 = VAR_0;
    FUNC_0();
  }


  volatile unsigned int VAR_20 = VAR_1->IDCODE;





    if ((VAR_20 & 0xFFFU) != 0x411U) {
      VAR_16 = VAR_2;
    }



  VAR_14->VTOR = (uint32_t)&VAR_17;


  VAR_10->AHB1ENR = VAR_11 | VAR_12 | VAR_13;

  VAR_6->MODER = 0; VAR_7->MODER = 0; VAR_8->MODER = 0;
  VAR_6->ODR = 0; VAR_7->ODR = 0; VAR_8->ODR = 0;
  VAR_6->PUPDR = 0; VAR_7->PUPDR = 0; VAR_8->PUPDR = 0;

  FUNC_2();
  FUNC_1();
  if (VAR_16 == VAR_2) {



    VAR_15->set_led(VAR_9, 1);
    FUNC_4();
  }

  if (VAR_19) {
    VAR_16 = VAR_3;
  }
}
