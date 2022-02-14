
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int PIO_SODR; unsigned int PIO_CODR; } ;
typedef TYPE_1__* AT91PS_PIO ;


 TYPE_1__* VAR_0 ;

void FUNC_0(unsigned int VAR_1)
{
 AT91PS_PIO VAR_2 = VAR_0;
 VAR_2->PIO_SODR = (VAR_1 ^ 0x7) & 0x7;
 VAR_2->PIO_CODR = VAR_1 & 0x7;
}
