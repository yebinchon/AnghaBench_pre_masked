
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_pcb {int dummy; } ;
struct TYPE_2__ {int espconn_http_tcp; int http_pcb; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int VAR_10 ;
 int FUNC_3 (int ,int,int ) ;
 TYPE_1__* VAR_11 ;
 int FUNC_4 (struct tcp_pcb*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct tcp_pcb*,int ,int) ;
 int FUNC_7 (struct tcp_pcb*) ;
 struct tcp_pcb* FUNC_8 () ;

__attribute__((used)) static int FUNC_9(void)
{
  FUNC_0("enduser_setup_http_start");
  struct tcp_pcb *VAR_12 = FUNC_8 ();
  if (VAR_12 == ((void*)0))
  {
    FUNC_1("http_start failed. Memory allocation failed (http_pcb == NULL).", VAR_4, VAR_1);
  }

  if (FUNC_6 (VAR_12, VAR_8, 80) != VAR_6)
  {
    FUNC_1("http_start bind failed", VAR_5, VAR_1);
  }

  VAR_11->http_pcb = FUNC_7 (VAR_12);
  if (!VAR_11->http_pcb)
  {
    FUNC_4(VAR_12);
    FUNC_1("http_start listen failed", VAR_5, VAR_1);
  }

  FUNC_5 (VAR_11->http_pcb, VAR_9);
  int VAR_13 = FUNC_2();
  if (VAR_13 == 1)
  {
    FUNC_0("enduser_setup_http_start info. Loaded default HTML.");
  }
  else if (VAR_13 == 2)
  {
    FUNC_1("http_start failed. Unable to allocate memory for HTTP payload.", VAR_4, VAR_1);
  }

  return 0;
}
