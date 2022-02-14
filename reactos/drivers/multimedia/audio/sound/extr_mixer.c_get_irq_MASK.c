
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int irq; int base; } ;
typedef TYPE_1__ SB16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

unsigned char FUNC_1(SB16* VAR_1)
{
 unsigned char VAR_2;
 VAR_2=(FUNC_0(VAR_1->base,VAR_0)&0x0f);

 if(VAR_2==1) VAR_1->irq=2;
 if(VAR_2==2) VAR_1->irq=5;
 if(VAR_2==4) VAR_1->irq=7;
 if(VAR_2==8) VAR_1->irq=10;
 return 0;
}
