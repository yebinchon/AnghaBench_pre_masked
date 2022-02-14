
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct interface_info {TYPE_4__* client; } ;
struct TYPE_12__ {int len; int iabuf; } ;
struct TYPE_11__ {TYPE_2__* options; } ;
struct TYPE_7__ {int xid; } ;
struct TYPE_10__ {int state; TYPE_3__* config; int interval; int first_sending; TYPE_6__ destination; TYPE_5__* active; TYPE_1__ packet; int xid; } ;
struct TYPE_9__ {int initial_interval; } ;
struct TYPE_8__ {int len; int data; } ;


 int FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_1 (struct interface_info*,TYPE_5__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct interface_info*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;

void
FUNC_5(void *VAR_5)
{
 struct interface_info *VAR_6 = VAR_5;

 FUNC_0(VAR_4, VAR_1);


 FUNC_1(VAR_6, VAR_6->client->active);
 VAR_6->client->xid = VAR_6->client->packet.xid;

 if (VAR_6->client->active->options[VAR_0].len == 4) {
  FUNC_2(VAR_6->client->destination.iabuf, VAR_6->client->active->
      options[VAR_0].data, 4);
  VAR_6->client->destination.len = 4;
 } else
  VAR_6->client->destination = VAR_3;

 FUNC_4(&VAR_6->client->first_sending);
 VAR_6->client->interval = VAR_6->client->config->initial_interval;
 VAR_6->client->state = VAR_2;


 FUNC_3(VAR_6);
}
