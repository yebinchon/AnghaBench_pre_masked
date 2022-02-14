
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uart_ring ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uart_ring *FUNC_0(int VAR_4) {
  uart_ring *VAR_5 = ((void*)0);
  switch(VAR_4) {
    case 0:
      VAR_5 = &VAR_0;
      break;
    case 1:
      VAR_5 = &VAR_1;
      break;
    case 2:
      VAR_5 = &VAR_2;
      break;
    case 3:
      VAR_5 = &VAR_3;
      break;
    default:
      VAR_5 = ((void*)0);
      break;
  }
  return VAR_5;
}
