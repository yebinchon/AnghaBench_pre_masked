
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ http_pcb; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
  FUNC_0("enduser_setup_http_stop");

  if (VAR_0 && VAR_0->http_pcb)
  {
    FUNC_1 (VAR_0->http_pcb);
    VAR_0->http_pcb = 0;
  }
}
