
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
typedef int err_t ;
struct TYPE_2__ {int http_pcb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct tcp_pcb*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tcp_pcb*) ;
 int FUNC_4 (struct tcp_pcb*,int ) ;

__attribute__((used)) static err_t FUNC_5(void *VAR_4, struct tcp_pcb *VAR_5, err_t VAR_6)
{
  FUNC_0("enduser_setup_http_connectcb");

  if (!VAR_3)
  {
    FUNC_0("connect callback but no state?!");
    FUNC_1 (VAR_5);
    return VAR_0;
  }

  FUNC_2 (VAR_3->http_pcb);
  FUNC_4 (VAR_5, VAR_2);
  FUNC_3 (VAR_5);
  return VAR_1;
}
