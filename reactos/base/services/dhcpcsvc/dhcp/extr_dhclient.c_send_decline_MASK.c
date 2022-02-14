
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct interface_info {TYPE_1__* client; int name; } ;
struct TYPE_5__ {int sin_port; int sin_addr; } ;
struct TYPE_4__ {int packet_length; int packet; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct interface_info*,int *,int ,int ,TYPE_2__*,int *) ;
 TYPE_2__ VAR_1 ;

void
FUNC_4(void *VAR_2)
{
 struct interface_info *VAR_3 = VAR_2;

 FUNC_1("DHCPDECLINE on %s to %s port %d", VAR_3->name,
     FUNC_0(VAR_1.sin_addr),
     FUNC_2(VAR_1.sin_port));


 (void) FUNC_3(VAR_3, &VAR_3->client->packet, VAR_3->client->packet_length,
     VAR_0, &VAR_1, ((void*)0));
}
