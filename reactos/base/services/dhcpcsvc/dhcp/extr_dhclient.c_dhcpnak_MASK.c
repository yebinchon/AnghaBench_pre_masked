
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct packet {int client_addr; TYPE_2__* raw; struct interface_info* interface; } ;
struct TYPE_4__ {scalar_t__ hlen; int haddr; } ;
struct interface_info {TYPE_3__* client; TYPE_1__ hw_address; } ;
struct TYPE_6__ {scalar_t__ xid; scalar_t__ state; int * active; } ;
struct TYPE_5__ {scalar_t__ xid; scalar_t__ hlen; int chaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct interface_info*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (struct interface_info*) ;

void
FUNC_6(struct packet *VAR_6)
{
 struct interface_info *VAR_7 = VAR_6->interface;



 if (VAR_6->interface->client->xid != VAR_6->raw->xid ||
     (VAR_6->interface->hw_address.hlen != VAR_6->raw->hlen) ||
     (FUNC_2(VAR_6->interface->hw_address.haddr,
     VAR_6->raw->chaddr, VAR_6->raw->hlen)))
  return;

 if (VAR_7->client->state != VAR_2 &&
     VAR_7->client->state != VAR_4 &&
     VAR_7->client->state != VAR_3 &&
     VAR_7->client->state != VAR_1)
  return;

 FUNC_3("DHCPNAK from %s", FUNC_4(VAR_6->client_addr));

 if (!VAR_7->client->active) {
  FUNC_3("DHCPNAK with no active lease.\n");
  return;
 }

 FUNC_1(VAR_7->client->active);
 VAR_7->client->active = ((void*)0);


 FUNC_0(VAR_5, VAR_7);

 VAR_7->client->state = VAR_0;
 FUNC_5(VAR_7);
}
