
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma16; int dma8; int base; } ;
typedef TYPE_1__ SB16 ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ,int ) ;

void FUNC_1(SB16* VAR_1)
{
 unsigned char VAR_2,VAR_3,VAR_4=FUNC_0(VAR_1->base,VAR_0);
  VAR_2=VAR_4&0xE0;
  VAR_3=VAR_4&0x0B;
  if(VAR_2==0x80) VAR_1->dma16=7;
  if(VAR_2==0x40) VAR_1->dma16=6;
  if(VAR_2==0x20) VAR_1->dma16=5;

  if(VAR_3==0x08) VAR_1->dma8=3;
  if(VAR_3==0x02) VAR_1->dma8=1;
  if(VAR_3==0x01) VAR_1->dma8=0;
}
