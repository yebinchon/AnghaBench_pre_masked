
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct interface_info {TYPE_2__* client; } ;
typedef int ULONG ;
struct TYPE_6__ {scalar_t__ is_bootp; } ;
struct TYPE_5__ {int * medium; TYPE_1__* config; int interval; int first_sending; int destination; TYPE_3__* active; int xid; int state; } ;
struct TYPE_4__ {int initial_interval; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct interface_info*,TYPE_3__*) ;
 int FUNC_3 (struct interface_info*) ;
 int FUNC_4 (struct interface_info*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(void *VAR_2)
{
 struct interface_info *VAR_3 = VAR_2;
 ULONG VAR_4 = (ULONG) FUNC_0();


 if (!VAR_3->client->active || VAR_3->client->active->is_bootp) {
  FUNC_4(VAR_3);
  return;
 }


 VAR_3->client->state = VAR_0;




 VAR_3->client->xid = FUNC_1(&VAR_4);



 FUNC_2(VAR_3, VAR_3->client->active);
 VAR_3->client->destination = VAR_1;
 FUNC_5(&VAR_3->client->first_sending);
 VAR_3->client->interval = VAR_3->client->config->initial_interval;


 VAR_3->client->medium = ((void*)0);


 FUNC_3(VAR_3);
}
