
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_uart16550 {int fifo_limit; char divisor; int old_line_ctrl_reg; int old_divisor_lsb; int old_divisor_msb; int adaptor; scalar_t__ irq; scalar_t__ base; scalar_t__ timer_running; scalar_t__ fifo_count; scalar_t__ buff_out; scalar_t__ buff_in; scalar_t__ buff_in_count; } ;


 int const VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 scalar_t__ VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 char VAR_18 ;
 char VAR_19 ;
 char VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_uart16550 * VAR_22)
{
 char VAR_23;


 VAR_22->buff_in_count = 0;
 VAR_22->buff_in = 0;
 VAR_22->buff_out = 0;
 VAR_22->fifo_limit = 1;
 VAR_22->fifo_count = 0;
 VAR_22->timer_running = 0;

 FUNC_1(VAR_6
      | VAR_4
      | VAR_5
      | VAR_7



      ,VAR_22->base + VAR_3);

 if ((FUNC_0(VAR_22->base + VAR_12) & 0xf0) == 0xc0)
  VAR_22->fifo_limit = 16;
 if (VAR_22->divisor != 0) {
  VAR_22->old_line_ctrl_reg = FUNC_0(VAR_22->base + VAR_13);
  FUNC_1(VAR_14
       ,VAR_22->base + VAR_13);
  VAR_22->old_divisor_lsb = FUNC_0(VAR_22->base + VAR_1);
  VAR_22->old_divisor_msb = FUNC_0(VAR_22->base + VAR_2);

  FUNC_1(VAR_22->divisor
       ,VAR_22->base + VAR_1);
  FUNC_1(0
       ,VAR_22->base + VAR_2);

 }

 FUNC_1(VAR_15
      | 0
      | 0
      | 0
      ,VAR_22->base + VAR_13);

 switch (VAR_22->adaptor) {
 default:
  FUNC_1(VAR_20
       | VAR_18
       | VAR_19


       ,VAR_22->base + VAR_17);
  break;
 case 128:
 case 129:


  FUNC_1(VAR_20 | (0&VAR_18) | VAR_19,
       VAR_22->base + VAR_17);
  break;
 case 130:


  FUNC_1(VAR_20 | VAR_18 | VAR_19,
       VAR_22->base + VAR_17);
  break;
 }

 if (VAR_22->irq < 0) {
  VAR_23 = (0 & VAR_10)
      |(0 & VAR_11)
      ;
 } else if (VAR_22->adaptor == 128) {
  VAR_23 = VAR_10
      | VAR_9
      ;
 } else if (VAR_22->adaptor == VAR_0) {
  VAR_23 = VAR_10
      | VAR_9
      | VAR_11
      ;
 } else {
  VAR_23 = VAR_10
      | VAR_11
      ;
 }
 FUNC_1(VAR_23, VAR_22->base + VAR_8);

 FUNC_0(VAR_22->base + VAR_16);
 FUNC_0(VAR_22->base + VAR_12);
 FUNC_0(VAR_22->base + VAR_21);
}
