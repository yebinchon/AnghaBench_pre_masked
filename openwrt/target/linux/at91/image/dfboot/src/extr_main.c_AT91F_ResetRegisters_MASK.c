
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int PMC_PCDR; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 volatile int VAR_9 = 0;





 *VAR_7 = 0xFFFFFFFF;
 *VAR_8 = 0xFFFFFFFF;


 FUNC_0 (VAR_4, VAR_6);



 VAR_5->PMC_PCDR = 0xFFFFFFFC;


 __asm__ ("msr CPSR_c, #0xDF");

 *VAR_2 = 0xffffffff;


 VAR_9 = *VAR_3;
 VAR_9 = *VAR_1;


 *VAR_0 = 0;

 return 1;
}
