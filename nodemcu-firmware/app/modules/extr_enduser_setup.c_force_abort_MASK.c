
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_pcb {int dummy; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct tcp_pcb*) ;
 int FUNC_2 (struct tcp_pcb*,int ,int ) ;

__attribute__((used)) static err_t FUNC_3 (void *VAR_1, struct tcp_pcb *VAR_2)
{
  FUNC_0("force_abort");

  (void)VAR_1;
  FUNC_2 (VAR_2, 0, 0);
  FUNC_1 (VAR_2);
  return VAR_0;
}
