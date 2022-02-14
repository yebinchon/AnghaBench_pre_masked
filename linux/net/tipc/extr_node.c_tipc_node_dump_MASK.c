
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int link; } ;
struct tipc_node {TYPE_2__ bc_entry; TYPE_1__* links; int keepalive_intv; int capabilities; int working_links; int link_cnt; int sync_point; int failover_sent; int action_flags; int * active_links; int state; int addr; } ;
struct TYPE_3__ {int inputq; int link; int maddr; int mtu; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 scalar_t__ FUNC_3 (char*,size_t,int *) ;

int FUNC_4(struct tipc_node *VAR_3, bool VAR_4, char *VAR_5)
{
 int VAR_6 = 0;
 size_t VAR_7 = (VAR_4) ? VAR_0 : VAR_1;

 if (!VAR_3) {
  VAR_6 += FUNC_0(VAR_5, VAR_7, "node data: (null)\n");
  return VAR_6;
 }

 VAR_6 += FUNC_0(VAR_5, VAR_7, "node data: %x", VAR_3->addr);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %x", VAR_3->state);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %d", VAR_3->active_links[0]);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %d", VAR_3->active_links[1]);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %x", VAR_3->action_flags);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %u", VAR_3->failover_sent);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %u", VAR_3->sync_point);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %d", VAR_3->link_cnt);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %u", VAR_3->working_links);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %x", VAR_3->capabilities);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " %lu\n", VAR_3->keepalive_intv);

 if (!VAR_4)
  return VAR_6;

 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, "link_entry[0]:\n");
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " mtu: %u\n", VAR_3->links[0].mtu);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " media: ");
 VAR_6 += FUNC_3(VAR_5 + VAR_6, VAR_7 - VAR_6, &VAR_3->links[0].maddr);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, "\n");
 VAR_6 += FUNC_1(VAR_3->links[0].link, VAR_2, VAR_5 + VAR_6);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " inputq: ");
 VAR_6 += FUNC_2(&VAR_3->links[0].inputq, 0, VAR_5 + VAR_6);

 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, "link_entry[1]:\n");
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " mtu: %u\n", VAR_3->links[1].mtu);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " media: ");
 VAR_6 += FUNC_3(VAR_5 + VAR_6, VAR_7 - VAR_6, &VAR_3->links[1].maddr);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, "\n");
 VAR_6 += FUNC_1(VAR_3->links[1].link, VAR_2, VAR_5 + VAR_6);
 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, " inputq: ");
 VAR_6 += FUNC_2(&VAR_3->links[1].inputq, 0, VAR_5 + VAR_6);

 VAR_6 += FUNC_0(VAR_5 + VAR_6, VAR_7 - VAR_6, "bclink:\n ");
 VAR_6 += FUNC_1(VAR_3->bc_entry.link, VAR_2, VAR_5 + VAR_6);

 return VAR_6;
}
