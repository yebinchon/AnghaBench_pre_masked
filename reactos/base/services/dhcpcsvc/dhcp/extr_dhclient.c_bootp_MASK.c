
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct packet {int client_addr; TYPE_4__* interface; TYPE_1__* raw; } ;
struct iaddrlist {int addr; struct iaddrlist* next; } ;
struct TYPE_8__ {TYPE_3__* client; } ;
struct TYPE_7__ {TYPE_2__* config; } ;
struct TYPE_6__ {struct iaddrlist* reject_list; } ;
struct TYPE_5__ {scalar_t__ op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct packet*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct packet *VAR_1)
{
 struct iaddrlist *VAR_2;

 if (VAR_1->raw->op != VAR_0)
  return;



 for (VAR_2 = VAR_1->interface->client->config->reject_list;
     VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(VAR_1->client_addr, VAR_2->addr)) {
   FUNC_2("BOOTREPLY from %s rejected.", FUNC_3(VAR_2->addr));
   return;
  }
 }
 FUNC_1(VAR_1);
}
