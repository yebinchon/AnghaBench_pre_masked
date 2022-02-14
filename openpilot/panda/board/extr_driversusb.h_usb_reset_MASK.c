
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int GRXFSIZ; int DIEPTXF0_HNPTXFSIZ; int* DIEPTXF; int GRSTCTL; } ;
struct TYPE_7__ {int DAINT; int DAINTMSK; int DIEPMSK; int DOEPMSK; int DCTL; int DCFG; } ;
struct TYPE_6__ {int DIEPINT; } ;
struct TYPE_5__ {int DOEPINT; unsigned int DOEPTSIZ; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

void FUNC_2(void) {

  VAR_8->DAINT = 0xFFFFFFFF;
  VAR_8->DAINTMSK = 0xFFFFFFFF;





  VAR_8->DIEPMSK = 0xFFFFFFFF;
  VAR_8->DOEPMSK = 0xFFFFFFFF;


  FUNC_0(0)->DIEPINT = 0xFF;
  FUNC_1(0)->DOEPINT = 0xFF;


  VAR_8->DCFG &= ~VAR_0;



  VAR_7->GRXFSIZ = 0x40;


  VAR_7->DIEPTXF0_HNPTXFSIZ = (0x40U << 16) | 0x40U;


  VAR_7->DIEPTXF[0] = (0x40U << 16) | 0x80U;


  VAR_7->GRSTCTL = VAR_5 | VAR_6;
  while ((VAR_7->GRSTCTL & VAR_5) == VAR_5);

  VAR_7->GRSTCTL = VAR_4;
  while ((VAR_7->GRSTCTL & VAR_4) == VAR_4);


  VAR_8->DCTL |= VAR_1;


  FUNC_1(0)->DOEPTSIZ = VAR_3 | (VAR_2 & (1U << 19)) | (3U << 3);
}
