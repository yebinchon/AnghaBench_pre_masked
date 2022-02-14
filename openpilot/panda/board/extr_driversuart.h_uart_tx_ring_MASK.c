
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t w_ptr_tx; size_t r_ptr_tx; unsigned int tx_fifo_size; TYPE_1__* uart; int * elems_tx; } ;
typedef TYPE_2__ uart_ring ;
struct TYPE_4__ {int SR; int CR1; int DR; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(uart_ring *VAR_2){
  FUNC_0();

  if (VAR_2->w_ptr_tx != VAR_2->r_ptr_tx) {

    if ((VAR_2->uart->SR & VAR_1) != 0) {
      VAR_2->uart->DR = VAR_2->elems_tx[VAR_2->r_ptr_tx];
      VAR_2->r_ptr_tx = (VAR_2->r_ptr_tx + 1U) % VAR_2->tx_fifo_size;
    }


    if(VAR_2->r_ptr_tx != VAR_2->w_ptr_tx){
      VAR_2->uart->CR1 |= VAR_0;
    } else {
      VAR_2->uart->CR1 &= ~VAR_0;
    }
  }
  FUNC_1();
}
