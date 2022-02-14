
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16_t ;
struct tcp_pcb {int dummy; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct tcp_pcb*) ;

__attribute__((used)) static err_t FUNC_2 (void *VAR_1, struct tcp_pcb *VAR_2, u16_t VAR_3)
{
  FUNC_0("close_once_sent");

  (void)VAR_1; (void)VAR_3;
  FUNC_1 (VAR_2);
  return VAR_0;
}
