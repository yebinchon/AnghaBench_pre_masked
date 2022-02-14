
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cns3xxx_i2c {int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct clk*) ;
 struct clk* FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct cns3xxx_i2c *VAR_7)
{
 struct clk *VAR_8;

 VAR_8 = FUNC_4(VAR_7->dev, "cpu");
 if (FUNC_2(!VAR_8))
  return;


 VAR_3 = 0;


 VAR_5 =
     (((((FUNC_3(VAR_8) / (2 * VAR_0)) -
  1) & 0x3FF) << 8) | (1 << 7) | 0x7F);
 VAR_6 |= 0x3;


 FUNC_1();


 VAR_4 |= (VAR_1 | VAR_2);


 FUNC_0();
}
