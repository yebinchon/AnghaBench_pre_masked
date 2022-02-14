
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dma_rx; TYPE_2__* uart; } ;
typedef TYPE_1__ uart_ring ;
struct TYPE_10__ {int CR1; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

void FUNC_3(uart_ring *VAR_11, int VAR_12) {

  FUNC_2(VAR_11->uart, VAR_12);
  VAR_11->uart->CR1 = VAR_10 | VAR_9 | VAR_8;


  if(VAR_11->uart == VAR_2){
    FUNC_0(VAR_3);
  } else if (VAR_11->uart == VAR_4){
    FUNC_0(VAR_5);
  } else if (VAR_11->uart == VAR_6){
    FUNC_0(VAR_7);
  } else if (VAR_11->uart == VAR_0){
    FUNC_0(VAR_1);
  } else {

  }


  if(VAR_11->dma_rx){
    FUNC_1(VAR_11);
  }
}
