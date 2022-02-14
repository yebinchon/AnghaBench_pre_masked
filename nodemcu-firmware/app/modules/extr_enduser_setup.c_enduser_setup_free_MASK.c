
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* udp; } ;
struct TYPE_5__ {struct TYPE_5__* http_payload_data; struct TYPE_5__* espconn_dns_udp; TYPE_1__ proto; int shutdown_timer; int check_station_timer; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_4(void)
{
  FUNC_0("enduser_setup_free");

  if (VAR_0 == ((void*)0))
  {
    return;
  }


  FUNC_3(&(VAR_0->check_station_timer));
  FUNC_3(&(VAR_0->shutdown_timer));

  if (VAR_0->espconn_dns_udp != ((void*)0))
  {
    if (VAR_0->espconn_dns_udp->proto.udp != ((void*)0))
    {
      FUNC_1(VAR_0->espconn_dns_udp->proto.udp);
    }
    FUNC_1(VAR_0->espconn_dns_udp);
  }

  FUNC_1(VAR_0->http_payload_data);

  FUNC_2 ();

  FUNC_1(VAR_0);
  VAR_0 = ((void*)0);
}
