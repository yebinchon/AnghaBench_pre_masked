
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct interface_info {TYPE_3__* client; } ;
struct TYPE_4__ {int xid; } ;
struct TYPE_6__ {TYPE_2__* config; int interval; int first_sending; int state; int destination; TYPE_1__ packet; int xid; int active; } ;
struct TYPE_5__ {int initial_interval; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct interface_info*,int ) ;
 int FUNC_2 (struct interface_info*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

void
FUNC_4(void *VAR_4)
{
 struct interface_info *VAR_5 = VAR_4;

 FUNC_0(VAR_3, VAR_0);



 FUNC_1(VAR_5, VAR_5->client->active);
 VAR_5->client->xid = VAR_5->client->packet.xid;
 VAR_5->client->destination = VAR_2;
 VAR_5->client->state = VAR_1;
 FUNC_3(&VAR_5->client->first_sending);
 VAR_5->client->interval = VAR_5->client->config->initial_interval;



 FUNC_2(VAR_5);
}
