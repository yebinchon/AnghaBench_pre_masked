
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct packet {int packet_type; int client_addr; TYPE_3__* interface; } ;
struct iaddrlist {int addr; struct iaddrlist* next; } ;
struct TYPE_6__ {TYPE_2__* client; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_4__ {struct iaddrlist* reject_list; } ;





 scalar_t__ FUNC_0 (int ,int ) ;
 void FUNC_1 (struct packet*) ;
 void FUNC_2 (struct packet*) ;
 void FUNC_3 (struct packet*) ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (int ) ;
 void FUNC_6 (struct packet*) ;

void
FUNC_7(struct packet *VAR_0)
{
 struct iaddrlist *VAR_1;
 void (*VAR_2)(struct packet *);
 char *VAR_3;

 switch (VAR_0->packet_type) {
 case 128:
  VAR_2 = FUNC_3;
  VAR_3 = "DHCPOFFER";
  break;
 case 129:
  VAR_2 = FUNC_2;
  VAR_3 = "DHCPNACK";
  break;
 case 130:
  VAR_2 = FUNC_1;
  VAR_3 = "DHCPACK";
  break;
 default:
  return;
 }



 for (VAR_1 = VAR_0->interface->client->config->reject_list;
     VAR_1; VAR_1 = VAR_1->next) {
  if (FUNC_0(VAR_0->client_addr, VAR_1->addr)) {
   FUNC_4("%s from %s rejected.", VAR_3, FUNC_5(VAR_1->addr));
   return;
  }
 }
 (*VAR_2)(VAR_0);
}
