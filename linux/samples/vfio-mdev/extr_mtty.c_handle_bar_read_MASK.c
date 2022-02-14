
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mdev_state {TYPE_2__* s; int rxtx_lock; } ;
struct TYPE_3__ {size_t head; size_t tail; int* fifo; int count; } ;
struct TYPE_4__ {int divisor; int* uart_reg; int max_fifo_size; TYPE_1__ rxtx; int overrun; int intr_trigger_level; int dlab; } ;


 int FUNC_0 (size_t) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;


 int FUNC_1 (struct mdev_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_21, struct mdev_state *VAR_22,
       u16 VAR_23, u8 *VAR_24, u32 VAR_25)
{

 switch (VAR_23) {
 case 129:

  if (VAR_22->s[VAR_21].dlab) {
   *VAR_24 = (u8)VAR_22->s[VAR_21].divisor;
   break;
  }

  FUNC_2(&VAR_22->rxtx_lock);

  if (VAR_22->s[VAR_21].rxtx.head !=
     VAR_22->s[VAR_21].rxtx.tail) {
   *VAR_24 = VAR_22->s[VAR_21].rxtx.fifo[
      VAR_22->s[VAR_21].rxtx.tail];
   VAR_22->s[VAR_21].rxtx.count--;
   FUNC_0(VAR_22->s[VAR_21].rxtx.tail);
  }

  if (VAR_22->s[VAR_21].rxtx.head ==
    VAR_22->s[VAR_21].rxtx.tail) {







   if (VAR_22->s[VAR_21].uart_reg[135] &
        VAR_3)
    FUNC_1(VAR_22);
  }
  FUNC_3(&VAR_22->rxtx_lock);

  break;

 case 135:
  if (VAR_22->s[VAR_21].dlab) {
   *VAR_24 = (u8)(VAR_22->s[VAR_21].divisor >> 8);
   break;
  }
  *VAR_24 = VAR_22->s[VAR_21].uart_reg[VAR_23] & 0x0f;
  break;

 case 134:
 {
  u8 VAR_26 = VAR_22->s[VAR_21].uart_reg[135];
  *VAR_24 = 0;

  FUNC_2(&VAR_22->rxtx_lock);

  if ((VAR_26 & VAR_2) && VAR_22->s[VAR_21].overrun)
   *VAR_24 |= VAR_7;


  if ((VAR_26 & VAR_1) &&
      (VAR_22->s[VAR_21].rxtx.count >=
        VAR_22->s[VAR_21].intr_trigger_level))
   *VAR_24 |= VAR_6;


  if ((VAR_26 & VAR_3) &&
      (VAR_22->s[VAR_21].rxtx.head ==
    VAR_22->s[VAR_21].rxtx.tail))
   *VAR_24 |= VAR_8;


  if ((VAR_26 & VAR_0) &&
      (VAR_22->s[VAR_21].uart_reg[131] &
     (VAR_15 | VAR_14)))
   *VAR_24 |= VAR_4;


  if (*VAR_24 == 0)
   *VAR_24 = VAR_5;


  *VAR_24 |= 0xC0;
  FUNC_3(&VAR_22->rxtx_lock);
 }
 break;

 case 133:
 case 131:
  *VAR_24 = VAR_22->s[VAR_21].uart_reg[VAR_23];
  break;

 case 132:
 {
  u8 VAR_27 = 0;

  FUNC_2(&VAR_22->rxtx_lock);

  if (VAR_22->s[VAR_21].rxtx.head !=
     VAR_22->s[VAR_21].rxtx.tail)
   VAR_27 |= VAR_9;


  if (VAR_22->s[VAR_21].overrun)
   VAR_27 |= VAR_10;


  if (VAR_22->s[VAR_21].rxtx.head ==
     VAR_22->s[VAR_21].rxtx.tail)
   VAR_27 |= VAR_11 | VAR_12;

  FUNC_3(&VAR_22->rxtx_lock);
  *VAR_24 = VAR_27;
  break;
 }
 case 130:
  *VAR_24 = VAR_20 | VAR_19 | VAR_17;

  FUNC_2(&VAR_22->rxtx_lock);

  if (VAR_22->s[VAR_21].uart_reg[131] &
       VAR_13) {
   if (VAR_22->s[VAR_21].rxtx.count <
     VAR_22->s[VAR_21].max_fifo_size)
    *VAR_24 |= VAR_16 | VAR_18;
  } else
   *VAR_24 |= VAR_16 | VAR_18;
  FUNC_3(&VAR_22->rxtx_lock);

  break;

 case 128:
  *VAR_24 = VAR_22->s[VAR_21].uart_reg[VAR_23];
  break;

 default:
  break;
 }
}
