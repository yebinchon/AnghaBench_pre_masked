
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ w_ptr_tx; scalar_t__ r_ptr_tx; } ;
typedef TYPE_1__ uart_ring ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(uart_ring *VAR_0) {

  while (VAR_0->w_ptr_tx != VAR_0->r_ptr_tx) {
    FUNC_0(VAR_0);
  }
}
