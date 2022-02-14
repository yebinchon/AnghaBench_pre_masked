
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {unsigned int rx_fifo_size; unsigned int r_ptr_rx; unsigned int w_ptr_rx; } ;
typedef TYPE_1__ uart_ring ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int VAR_0 ;

void FUNC_2(uart_ring *VAR_1, uint32_t VAR_2) {
  FUNC_0();
  uint32_t VAR_3 = (VAR_1->rx_fifo_size - VAR_2);


  if (VAR_3 != VAR_0){

    if (
      ((VAR_0 < VAR_1->r_ptr_rx) && (VAR_1->r_ptr_rx <= VAR_3)) ||
      ((VAR_3 < VAR_0) && ((VAR_1->r_ptr_rx <= VAR_3) || (VAR_0 < VAR_1->r_ptr_rx)))
    ){

      VAR_1->r_ptr_rx = (VAR_3 + 1U) % VAR_1->rx_fifo_size;
    }


    VAR_1->w_ptr_rx = VAR_3;
  }

  VAR_0 = VAR_3;
  FUNC_1();
}
