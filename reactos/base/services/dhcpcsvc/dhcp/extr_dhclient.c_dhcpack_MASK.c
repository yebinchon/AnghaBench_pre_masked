
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct packet {int client_addr; TYPE_2__* raw; struct interface_info* interface; } ;
struct TYPE_5__ {scalar_t__ hlen; int haddr; } ;
struct interface_info {TYPE_4__* client; TYPE_1__ hw_address; } ;
struct client_lease {int expiry; int renewal; int rebind; int obtained; TYPE_3__* options; } ;
struct TYPE_8__ {scalar_t__ xid; scalar_t__ state; struct client_lease* new; } ;
struct TYPE_7__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_6__ {scalar_t__ xid; scalar_t__ hlen; int chaddr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct interface_info*) ;
 int FUNC_1 (int ,struct interface_info*) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 struct client_lease* FUNC_5 (struct packet*) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int*) ;

void
FUNC_8(struct packet *VAR_10)
{
 struct interface_info *VAR_11 = VAR_10->interface;
 struct client_lease *VAR_12;
        time_t VAR_13;

        FUNC_7(&VAR_13);



 if (VAR_10->interface->client->xid != VAR_10->raw->xid ||
     (VAR_10->interface->hw_address.hlen != VAR_10->raw->hlen) ||
     (FUNC_3(VAR_10->interface->hw_address.haddr,
     VAR_10->raw->chaddr, VAR_10->raw->hlen)))
  return;

 if (VAR_11->client->state != VAR_5 &&
     VAR_11->client->state != VAR_7 &&
     VAR_11->client->state != VAR_6 &&
     VAR_11->client->state != VAR_4)
  return;

 FUNC_4("DHCPACK from %s", FUNC_6(VAR_10->client_addr));

 VAR_12 = FUNC_5(VAR_10);
 if (!VAR_12) {
  FUNC_4("packet_to_lease failed.");
  return;
 }

 VAR_11->client->new = VAR_12;


 FUNC_1(VAR_9, VAR_11);


 if (VAR_11->client->new->options[VAR_1].data)
  VAR_11->client->new->expiry = FUNC_2(
      VAR_11->client->new->options[VAR_1].data);
 else
  VAR_11->client->new->expiry = VAR_0;


 if (VAR_11->client->new->expiry < 0)
  VAR_11->client->new->expiry = VAR_8;

 if (VAR_11->client->new->expiry < 60)
  VAR_11->client->new->expiry = 60;



 if (VAR_11->client->new->options[VAR_3].len)
  VAR_11->client->new->renewal = FUNC_2(
      VAR_11->client->new->options[VAR_3].data);
 else
  VAR_11->client->new->renewal = VAR_11->client->new->expiry / 2;


 if (VAR_11->client->new->options[VAR_2].len)
  VAR_11->client->new->rebind = FUNC_2(
      VAR_11->client->new->options[VAR_2].data);
 else
  VAR_11->client->new->rebind = VAR_11->client->new->renewal +
      VAR_11->client->new->renewal / 2 + VAR_11->client->new->renewal / 4;




 VAR_11->client->new->expiry += VAR_13;

 if (VAR_11->client->new->expiry < VAR_13)
  VAR_11->client->new->expiry = VAR_8;
 VAR_11->client->new->renewal += VAR_13;
 if (VAR_11->client->new->renewal < VAR_13)
  VAR_11->client->new->renewal = VAR_8;
 VAR_11->client->new->rebind += VAR_13;
 if (VAR_11->client->new->rebind < VAR_13)
  VAR_11->client->new->rebind = VAR_8;

 FUNC_0(VAR_11);
}
