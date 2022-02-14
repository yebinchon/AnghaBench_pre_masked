
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ r_ptr_rx; scalar_t__ w_ptr_rx; scalar_t__ r_ptr_tx; scalar_t__ w_ptr_tx; } ;
typedef TYPE_1__ uart_ring ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(uart_ring *VAR_0) {
  FUNC_0();
  VAR_0->w_ptr_tx = 0;
  VAR_0->r_ptr_tx = 0;
  VAR_0->w_ptr_rx = 0;
  VAR_0->r_ptr_rx = 0;
  FUNC_1();
}
