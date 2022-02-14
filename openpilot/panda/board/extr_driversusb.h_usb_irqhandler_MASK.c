
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_8__ {unsigned int GINTSTS; unsigned int GOTGINT; unsigned int GRXSTSP; } ;
struct TYPE_7__ {unsigned int DAINT; int DCTL; int DIEPEMPMSK; } ;
struct TYPE_6__ {int DIEPINT; int DTXFSTS; } ;
struct TYPE_5__ {int DOEPINT; int DOEPCTL; unsigned int DOEPTSIZ; } ;


 size_t FUNC_0 (unsigned int,int) ;
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
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int volatile VAR_24 ;
 unsigned int volatile VAR_25 ;
 unsigned int volatile VAR_26 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (void*,size_t,int) ;
 TYPE_4__* VAR_27 ;
 TYPE_3__* VAR_28 ;
 TYPE_2__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int) ;
 int VAR_29 ;
 void* VAR_30 ;
 unsigned int VAR_31 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (unsigned int volatile) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 size_t FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_34 ;

void FUNC_13(void) {


  unsigned int VAR_35 = VAR_27->GINTSTS;
  unsigned int VAR_36 = VAR_27->GOTGINT;
  unsigned int VAR_37 = VAR_28->DAINT;
  if ((VAR_35 & VAR_14) != 0) {
    FUNC_7("connector ID status change\n");
  }

  if ((VAR_35 & VAR_16) != 0) {
    FUNC_7("ESUSP detected\n");
  }

  if ((VAR_35 & VAR_23) != 0) {
    FUNC_7("USB reset\n");
    FUNC_11();
  }

  if ((VAR_35 & VAR_15) != 0) {
    FUNC_7("enumeration done");


    FUNC_7("\n");
  }

  if ((VAR_35 & VAR_20) != 0) {
    FUNC_7("OTG int:");
    FUNC_6(VAR_27->GOTGINT);
    FUNC_7("\n");



  }


  if ((VAR_35 & VAR_21) != 0) {

    volatile unsigned int VAR_38 = VAR_27->GRXSTSP;
    int VAR_39 = (VAR_38 & VAR_26) >> 17;
    if (VAR_39 == VAR_0) {
      int VAR_40 = (VAR_38 & VAR_25);
      int VAR_41 = (VAR_38 & VAR_24) >> 4;
      (void)FUNC_1(&VAR_34, VAR_41);







      if (VAR_40 == 2) {
        FUNC_9(VAR_34, VAR_41, 1);
      }

      if (VAR_40 == 3) {
        FUNC_10(VAR_34, VAR_41, 1);
      }
    } else if (VAR_39 == VAR_1) {
      (void)FUNC_1(&VAR_33, 8);





    } else {

    }
  }
  if ((VAR_35 & VAR_13) || (VAR_35 & VAR_17)) {




    VAR_28->DCTL |= VAR_3 | VAR_2;
  }

  if ((VAR_35 & VAR_22) != 0) {







  }


  if ((VAR_35 & VAR_19) != 0) {
    if ((FUNC_4(2)->DOEPINT & VAR_9) != 0) {



      FUNC_4(2)->DOEPTSIZ = (1U << 19) | 0x40U;
      FUNC_4(2)->DOEPCTL |= VAR_7 | VAR_6;
    }

    if ((FUNC_4(3)->DOEPINT & VAR_9) != 0) {



      FUNC_4(3)->DOEPTSIZ = (1U << 19) | 0x40U;
      FUNC_4(3)->DOEPCTL |= VAR_7 | VAR_6;
    } else if ((FUNC_4(3)->DOEPINT & 0x2000) != 0) {




      FUNC_4(3)->DOEPTSIZ = (1U << 19) | 0x40U;
      FUNC_4(3)->DOEPCTL |= VAR_6;
    } else if ((FUNC_4(3)->DOEPINT) != 0) {
      FUNC_7("OUTEP3 error ");
      FUNC_6(FUNC_4(3)->DOEPINT);
      FUNC_7("\n");
    } else {

    }

    if ((FUNC_4(0)->DOEPINT & VAR_4) != 0) {

      FUNC_4(0)->DOEPTSIZ = VAR_11 | (VAR_10 & (1U << 19)) | (1U << 3);
    }


    if ((FUNC_4(0)->DOEPINT & VAR_8) != 0) {
      FUNC_12();
    }

    FUNC_4(0)->DOEPINT = FUNC_4(0)->DOEPINT;
    FUNC_4(2)->DOEPINT = FUNC_4(2)->DOEPINT;
    FUNC_4(3)->DOEPINT = FUNC_4(3)->DOEPINT;
  }


  if ((VAR_35 & VAR_18) != 0) {
    switch (VAR_29) {
      case 0:

        if ((FUNC_3(1)->DIEPINT & VAR_5) != 0) {




          FUNC_2((void *)VAR_32, FUNC_8(VAR_32, 0x40, 1), 1);
        }
        break;

      case 1:

        if ((FUNC_3(1)->DIEPINT & VAR_5) != 0) {




          int VAR_42 = FUNC_8(VAR_32, 0x40, 1);
          if (VAR_42 > 0) {
            FUNC_2((void *)VAR_32, VAR_42, 1);
          }
        }
        break;
      default:
        FUNC_7("current_int0_alt_setting value invalid\n");
        break;
    }

    if ((FUNC_3(0)->DIEPINT & VAR_5) != 0) {




      if ((VAR_31 != 0U) && ((FUNC_3(0)->DTXFSTS & VAR_12) >= 0x40U)) {
        uint16_t VAR_43 = FUNC_0(VAR_31, 0x40);
        FUNC_2(VAR_30, VAR_43, 0);
        VAR_30 = &VAR_30[VAR_43];
        VAR_31 -= VAR_43;
        if (VAR_31 == 0U) {
          VAR_30 = ((void*)0);
          VAR_28->DIEPEMPMSK &= ~1;
          FUNC_4(0)->DOEPCTL |= VAR_6;
        }
      }
    }


    FUNC_3(0)->DIEPINT = FUNC_3(0)->DIEPINT;
    FUNC_3(1)->DIEPINT = FUNC_3(1)->DIEPINT;
  }


  VAR_28->DAINT = VAR_37;
  VAR_27->GOTGINT = VAR_36;
  VAR_27->GINTSTS = VAR_35;


}
