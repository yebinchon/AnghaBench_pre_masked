
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint16_t ;
struct TYPE_6__ {int dma_rx; unsigned int w_ptr_rx; unsigned int rx_fifo_size; unsigned int r_ptr_rx; int (* callback ) (TYPE_2__*) ;int * elems_rx; TYPE_1__* uart; } ;
typedef TYPE_2__ uart_ring ;
struct TYPE_5__ {int DR; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(uart_ring *VAR_0){

  if (VAR_0->dma_rx == 0) {
    FUNC_0();


    uint8_t VAR_1 = VAR_0->uart->DR;

    uint16_t VAR_2 = (VAR_0->w_ptr_rx + 1U) % VAR_0->rx_fifo_size;

    if (VAR_2 != VAR_0->r_ptr_rx) {
      VAR_0->elems_rx[VAR_0->w_ptr_rx] = VAR_1;
      VAR_0->w_ptr_rx = VAR_2;
      if (VAR_0->callback != ((void*)0)) {
        VAR_0->callback(VAR_0);
      }
    }

    FUNC_1();
  }
}
