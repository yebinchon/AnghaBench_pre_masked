
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
typedef scalar_t__ err_t ;
struct TYPE_2__ {int * http_payload_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct tcp_pcb*,void*) ;
 int FUNC_4 (struct tcp_pcb*,int ) ;
 int FUNC_5 (struct tcp_pcb*,int ) ;
 unsigned int FUNC_6 (struct tcp_pcb*) ;
 scalar_t__ FUNC_7 (struct tcp_pcb*,int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_8(struct tcp_pcb *VAR_4)
{
  FUNC_0("enduser_setup_http_serve_html");

  if (VAR_2->http_payload_data == ((void*)0))
  {
    FUNC_2();
  }

  unsigned VAR_5 = FUNC_6 (VAR_4);
  FUNC_3 (VAR_4, (void *)VAR_5);
  FUNC_4 (VAR_4, 0);
  FUNC_5 (VAR_4, VAR_3);

  err_t VAR_6 = FUNC_7 (VAR_4, VAR_2->http_payload_data, VAR_5, 0);
  if (VAR_6 != 0)
  {
    FUNC_1("http_serve_html failed. tcp_write failed", VAR_1, VAR_0);
  }

  return 0;
}
