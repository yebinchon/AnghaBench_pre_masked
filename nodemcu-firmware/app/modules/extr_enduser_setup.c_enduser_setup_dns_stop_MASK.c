
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * espconn_dns_udp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
  FUNC_0("enduser_setup_dns_stop");

  if (VAR_0 != ((void*)0) && VAR_0->espconn_dns_udp != ((void*)0))
  {
    FUNC_1(VAR_0->espconn_dns_udp);
  }
}
