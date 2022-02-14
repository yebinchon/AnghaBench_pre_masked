
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct espconn* udp; } ;
struct espconn {int local_port; int state; int type; TYPE_1__ proto; } ;
typedef scalar_t__ int8_t ;
typedef struct espconn esp_udp ;
struct TYPE_4__ {struct espconn* espconn_dns_udp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct espconn*) ;
 scalar_t__ FUNC_3 (struct espconn*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct espconn*,int ,int) ;
 TYPE_2__* VAR_10 ;

__attribute__((used)) static int FUNC_6(void)
{
  FUNC_0("enduser_setup_dns_start");

  if (VAR_10->espconn_dns_udp != ((void*)0))
  {
    FUNC_1("dns_start failed. Appears to already be started (espconn_dns_udp != NULL).", VAR_0, VAR_1);
  }
  VAR_10->espconn_dns_udp = (struct espconn *) FUNC_4(sizeof(struct espconn));
  if (VAR_10->espconn_dns_udp == ((void*)0))
  {
    FUNC_1("dns_start failed. Memory allocation failed (espconn_dns_udp == NULL).", VAR_2, VAR_1);
  }

  esp_udp *VAR_11 = (esp_udp *) FUNC_4(sizeof(esp_udp));
  if (VAR_11 == ((void*)0))
  {
    FUNC_1("dns_start failed. Memory allocation failed (esp_udp == NULL).", VAR_2, VAR_1);
  }

  FUNC_5(VAR_10->espconn_dns_udp, 0, sizeof(struct espconn));
  FUNC_5(VAR_11, 0, sizeof(esp_udp));
  VAR_10->espconn_dns_udp->proto.udp = VAR_11;
  VAR_10->espconn_dns_udp->type = VAR_8;
  VAR_10->espconn_dns_udp->state = VAR_7;
  VAR_11->local_port = 53;

  int8_t VAR_12;
  VAR_12 = FUNC_3(VAR_10->espconn_dns_udp, VAR_9);
  if (VAR_12 != 0)
  {
    FUNC_1("dns_start failed. Couldn't add receive callback, unknown error.", VAR_4, VAR_1);
  }

  VAR_12 = FUNC_2(VAR_10->espconn_dns_udp);
  if (VAR_12 == VAR_5)
  {
    FUNC_1("dns_start failed. Couldn't create connection, already listening for that connection.", VAR_3, VAR_1);
  }
  else if (VAR_12 == VAR_6)
  {
    FUNC_1("dns_start failed. Couldn't create connection, out of memory.", VAR_2, VAR_1);
  }
  else if (VAR_12 != 0)
  {
    FUNC_1("dns_start failed. Couldn't create connection, unknown error.", VAR_4, VAR_1);
  }

  return 0;
}
