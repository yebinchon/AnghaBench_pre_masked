
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interface_info {TYPE_1__* client; } ;
struct client_lease {struct client_lease* next; } ;
struct TYPE_2__ {struct client_lease* active; struct client_lease* leases; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct interface_info*,struct client_lease*,int) ;

void
FUNC_5(struct interface_info *VAR_2)
{
 struct client_lease *VAR_3;

 if (!VAR_0) {
  VAR_0 = FUNC_2(VAR_1, "w");
  if (!VAR_0)
   FUNC_0("can't create %s", VAR_1);
 } else {
  FUNC_1(VAR_0);
  FUNC_3(VAR_0);
 }

 for (VAR_3 = VAR_2->client->leases; VAR_3; VAR_3 = VAR_3->next)
  FUNC_4(VAR_2, VAR_3, 1);
 if (VAR_2->client->active)
  FUNC_4(VAR_2, VAR_2->client->active, 1);

 FUNC_1(VAR_0);
}
