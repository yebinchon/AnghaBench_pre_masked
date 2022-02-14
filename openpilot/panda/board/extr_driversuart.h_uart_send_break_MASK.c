
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* uart; } ;
typedef TYPE_2__ uart_ring ;
struct TYPE_4__ {int CR1; } ;


 int VAR_0 ;

void FUNC_0(uart_ring *VAR_1) {
  while ((VAR_1->uart->CR1 & VAR_0) != 0);
  VAR_1->uart->CR1 |= VAR_0;
}
