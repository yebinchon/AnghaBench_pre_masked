
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l3_pins {int (* setmode ) (struct l3_pins*,int) ;int (* setdat ) (struct l3_pins*,int) ;int (* setclk ) (struct l3_pins*,int) ;int mode_hold; int mode_setup; int mode; } ;


 int FUNC_0 (struct l3_pins*,int ) ;
 int FUNC_1 (struct l3_pins*,int *,int) ;
 int FUNC_2 (struct l3_pins*,int) ;
 int FUNC_3 (struct l3_pins*,int) ;
 int FUNC_4 (struct l3_pins*,int) ;
 int FUNC_5 (struct l3_pins*,int) ;
 int FUNC_6 (struct l3_pins*,int) ;
 int FUNC_7 (struct l3_pins*,int) ;
 int FUNC_8 (struct l3_pins*,int) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct l3_pins *VAR_0, u8 VAR_1, u8 *VAR_2, int VAR_3)
{
 VAR_0->setclk(VAR_0, 1);
 VAR_0->setdat(VAR_0, 1);
 VAR_0->setmode(VAR_0, 1);
 FUNC_9(VAR_0->mode);

 VAR_0->setmode(VAR_0, 0);
 FUNC_9(VAR_0->mode_setup);
 FUNC_0(VAR_0, VAR_1);
 FUNC_9(VAR_0->mode_hold);

 FUNC_1(VAR_0, VAR_2, VAR_3);

 VAR_0->setclk(VAR_0, 1);
 VAR_0->setdat(VAR_0, 1);
 VAR_0->setmode(VAR_0, 0);

 return VAR_3;
}
