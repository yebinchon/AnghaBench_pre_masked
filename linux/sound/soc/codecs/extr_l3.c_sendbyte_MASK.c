
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l3_pins {int clock_high; int (* setclk ) (struct l3_pins*,int) ;int data_setup; int (* setdat ) (struct l3_pins*,unsigned int) ;int data_hold; } ;


 int FUNC_0 (struct l3_pins*,int) ;
 int FUNC_1 (struct l3_pins*,unsigned int) ;
 int FUNC_2 (struct l3_pins*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct l3_pins *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_0->setclk(VAR_0, 0);
  FUNC_3(VAR_0->data_hold);
  VAR_0->setdat(VAR_0, VAR_1 & 1);
  FUNC_3(VAR_0->data_setup);
  VAR_0->setclk(VAR_0, 1);
  FUNC_3(VAR_0->clock_high);
  VAR_1 >>= 1;
 }
}
