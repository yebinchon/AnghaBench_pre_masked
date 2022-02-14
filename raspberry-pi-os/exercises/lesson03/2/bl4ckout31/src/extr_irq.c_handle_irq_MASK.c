
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,unsigned int) ;

void FUNC_4(void)
{
 unsigned int VAR_3 = FUNC_0(VAR_1);


 while (VAR_3) {


  if (VAR_3 & VAR_2) {
   FUNC_1();
   VAR_3 &= ~VAR_2;
  } else if (VAR_3 & VAR_0) {
   FUNC_2();
   VAR_3 &= ~VAR_0;
  } else {
   FUNC_3("Unknown pending irq: %x\r\n", VAR_3);
   VAR_3 = 0;
  }
 }
}
