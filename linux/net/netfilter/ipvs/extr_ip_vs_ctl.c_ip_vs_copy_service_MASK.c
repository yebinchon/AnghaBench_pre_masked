
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_service_entry {int timeout; int stats; int num_dests; int netmask; int flags; int sched_name; int fwmark; int port; int addr; int protocol; } ;
struct TYPE_2__ {int ip; } ;
struct ip_vs_service {int timeout; int stats; int num_dests; int netmask; int flags; int fwmark; int port; TYPE_1__ addr; int protocol; int scheduler; } ;
struct ip_vs_scheduler {char* name; } ;
struct ip_vs_kstats {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_vs_kstats*,int *) ;
 int FUNC_1 (int *,struct ip_vs_kstats*) ;
 struct ip_vs_scheduler* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct ip_vs_service_entry *VAR_1, struct ip_vs_service *VAR_2)
{
 struct ip_vs_scheduler *VAR_3;
 struct ip_vs_kstats VAR_4;
 char *VAR_5;

 VAR_3 = FUNC_2(VAR_2->scheduler, 1);
 VAR_5 = VAR_3 ? VAR_3->name : "none";
 VAR_1->protocol = VAR_2->protocol;
 VAR_1->addr = VAR_2->addr.ip;
 VAR_1->port = VAR_2->port;
 VAR_1->fwmark = VAR_2->fwmark;
 FUNC_3(VAR_1->sched_name, VAR_5, sizeof(VAR_1->sched_name));
 VAR_1->flags = VAR_2->flags;
 VAR_1->timeout = VAR_2->timeout / VAR_0;
 VAR_1->netmask = VAR_2->netmask;
 VAR_1->num_dests = VAR_2->num_dests;
 FUNC_0(&VAR_4, &VAR_2->stats);
 FUNC_1(&VAR_1->stats, &VAR_4);
}
