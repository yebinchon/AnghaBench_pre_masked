
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {scalar_t__ irq; int adaptor; scalar_t__ divisor; int old_divisor_lsb; int old_divisor_msb; int old_line_ctrl_reg; scalar_t__ base; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct snd_uart16550*) ;

__attribute__((used)) static void FUNC_3(struct snd_uart16550 * VAR_12)
{
 if (VAR_12->irq < 0)
  FUNC_2(VAR_12);





 FUNC_1((0 & VAR_3)
      |(0 & VAR_4)
      ,VAR_12->base + VAR_2);

 switch (VAR_12->adaptor) {
 default:
  FUNC_1((0 & VAR_11)
       |(0 & VAR_9)
       |(0 & VAR_10)
       ,VAR_12->base + VAR_8);
   break;
 case 128:
 case 129:


  FUNC_1(VAR_11 | (0&VAR_9) | (0&VAR_10),
       VAR_12->base + VAR_8);
  break;
 case 130:


  FUNC_1(VAR_11 | VAR_9 | (0&VAR_10),
       VAR_12->base + VAR_8);
  break;
 }

 FUNC_0(VAR_12->base + VAR_5);


 if (VAR_12->divisor != 0) {
  FUNC_1(VAR_7
       ,VAR_12->base + VAR_6);
  FUNC_1(VAR_12->old_divisor_lsb
       ,VAR_12->base + VAR_0);
  FUNC_1(VAR_12->old_divisor_msb
       ,VAR_12->base + VAR_1);

  FUNC_1(VAR_12->old_line_ctrl_reg
       ,VAR_12->base + VAR_6);
 }
}
