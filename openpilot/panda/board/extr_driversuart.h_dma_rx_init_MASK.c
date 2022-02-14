
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {TYPE_1__* uart; int rx_fifo_size; scalar_t__ elems_rx; } ;
typedef TYPE_2__ uart_ring ;
struct TYPE_10__ {int CR; int NDTR; void* M0AR; void* PAR; int FCR; } ;
struct TYPE_9__ {int DR; } ;
struct TYPE_7__ {int CR1; int CR3; } ;


 TYPE_6__* VAR_0 ;
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
 int FUNC_0 (int ) ;
 TYPE_5__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_14 ;

void FUNC_2(uart_ring *VAR_15) {

  if(VAR_15 == &VAR_14){



    VAR_0->FCR &= ~VAR_10;


    VAR_0->PAR = (uint32_t)&(VAR_11->DR);
    VAR_0->M0AR = (uint32_t)VAR_15->elems_rx;
    VAR_0->NDTR = VAR_15->rx_fifo_size;



    VAR_0->CR = VAR_2 | VAR_7 | VAR_3 | VAR_6 | VAR_8 | VAR_9 | VAR_4 | VAR_5;


    VAR_15->uart->CR3 |= VAR_13;


    VAR_15->uart->CR1 |= VAR_12;


    FUNC_0(VAR_1);
  } else {
    FUNC_1("Tried to initialize RX DMA for an unsupported UART\n");
  }
}
