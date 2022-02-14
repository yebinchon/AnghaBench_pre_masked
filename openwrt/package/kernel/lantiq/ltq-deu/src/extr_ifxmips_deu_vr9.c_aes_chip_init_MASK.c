
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SM; int ENDI; scalar_t__ ARS; scalar_t__ NDC; } ;
struct aes_t {TYPE_1__ controlr; } ;


 scalar_t__ VAR_0 ;

void FUNC_0 (void)
{
    volatile struct aes_t *VAR_1 = (struct aes_t *) VAR_0;


    VAR_1->controlr.SM = 1;
    VAR_1->controlr.NDC = 0;
    asm("sync");
    VAR_1->controlr.ENDI = 1;
    asm("sync");
    VAR_1->controlr.ARS = 0;

}
