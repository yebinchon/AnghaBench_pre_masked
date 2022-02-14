
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* PIO_CODR; void* PIO_OER; void* PIO_PER; } ;
struct TYPE_3__ {int SPI_MR; int SPI_CR; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(int VAR_7) {
 switch(VAR_7) {
 case 0:
  VAR_1->SPI_MR &= 0xFFF0FFFF;
  VAR_1->SPI_MR |= ((VAR_4 << 16) & VAR_3);
  break;
 case 3:

  VAR_0->PIO_PER = VAR_2;
  VAR_0->PIO_OER = VAR_2;

  VAR_0->PIO_CODR = VAR_2;

  VAR_1->SPI_MR &= 0xFFF0FFFF;
  VAR_1->SPI_MR |= ((VAR_5<<16) & VAR_3);
  break;
 }


 VAR_1->SPI_CR = VAR_6;
}
