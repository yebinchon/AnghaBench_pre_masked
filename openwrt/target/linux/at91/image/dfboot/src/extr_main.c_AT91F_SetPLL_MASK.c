
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int CKGR_PLLAR; } ;
struct TYPE_5__ {int PMC_IDR; int PMC_MCKR; } ;
typedef int AT91_REG ;
typedef TYPE_1__* AT91PS_PMC ;
typedef TYPE_2__* AT91PS_CKGR ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static unsigned int FUNC_0(void)
{
 AT91_REG VAR_6;
 AT91PS_PMC VAR_7 = VAR_1;
 AT91PS_CKGR VAR_8 = VAR_0;

 VAR_7->PMC_IDR = 0xFFFFFFFF;


 VAR_8->CKGR_PLLAR = VAR_2;

 while (!(*VAR_5 & VAR_3));


 VAR_6 = VAR_7->PMC_MCKR;

 if (VAR_6 & 0x0000001C) {
  VAR_6 = (VAR_6 & ~0x0000001C);
  VAR_7->PMC_MCKR = VAR_6;
  while (!(*VAR_5 & VAR_4));
 }
 if (VAR_6 != 0x00000202) {
  VAR_7->PMC_MCKR = 0x00000202;
  if ((VAR_6 & 0x00000003) != 0x00000002)
   while (!(*VAR_5 & VAR_4));
 }

 return 1;
}
