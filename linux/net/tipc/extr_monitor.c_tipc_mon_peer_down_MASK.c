
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_peer {int applied; int is_head; int is_up; int is_local; scalar_t__ down_cnt; struct tipc_mon_domain* domain; } ;
struct tipc_monitor {int lock; } ;
struct tipc_mon_domain {int dummy; } ;
struct net {int dummy; } ;


 struct tipc_peer* FUNC_0 (struct tipc_monitor*,int ) ;
 struct tipc_peer* FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct tipc_mon_domain*) ;
 int FUNC_3 (struct tipc_monitor*,struct tipc_peer*) ;
 int FUNC_4 (struct tipc_peer*,struct tipc_mon_domain*,int) ;
 int FUNC_5 (struct tipc_monitor*) ;
 struct tipc_peer* FUNC_6 (struct tipc_peer*) ;
 int FUNC_7 (char*,int ,int) ;
 struct tipc_monitor* FUNC_8 (struct net*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct net *VAR_0, u32 VAR_1, int VAR_2)
{
 struct tipc_monitor *VAR_3 = FUNC_8(VAR_0, VAR_2);
 struct tipc_peer *VAR_4 = FUNC_1(VAR_0, VAR_2);
 struct tipc_peer *VAR_5, *VAR_6;
 struct tipc_mon_domain *VAR_7;
 int VAR_8;

 FUNC_9(&VAR_3->lock);
 VAR_5 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_5) {
  FUNC_7("Mon: unknown link %x/%u DOWN\n", VAR_1, VAR_2);
  goto exit;
 }
 VAR_8 = VAR_5->applied;
 VAR_5->applied = 0;
 VAR_7 = VAR_5->domain;
 VAR_5->domain = ((void*)0);
 if (VAR_5->is_head)
  FUNC_4(VAR_5, VAR_7, VAR_8);
 FUNC_2(VAR_7);
 VAR_5->is_up = 0;
 VAR_5->is_head = 0;
 VAR_5->is_local = 0;
 VAR_5->down_cnt = 0;
 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6 == VAR_4)
  FUNC_5(VAR_3);
 FUNC_3(VAR_3, VAR_6);
exit:
 FUNC_10(&VAR_3->lock);
}
