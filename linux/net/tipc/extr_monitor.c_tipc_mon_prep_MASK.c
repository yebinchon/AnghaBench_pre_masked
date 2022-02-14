
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int len; } ;
struct tipc_monitor {int dom_gen; int lock; TYPE_1__ cache; } ;
struct tipc_mon_state {int acked_gen; int peer_gen; } ;
struct tipc_mon_domain {void* ack_gen; scalar_t__ member_cnt; void* gen; void* len; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct tipc_mon_domain*,int ) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*,TYPE_1__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net*,struct tipc_monitor*) ;
 struct tipc_monitor* FUNC_8 (struct net*,int) ;

void FUNC_9(struct net *VAR_0, void *VAR_1, int *VAR_2,
     struct tipc_mon_state *VAR_3, int VAR_4)
{
 struct tipc_monitor *VAR_5 = FUNC_8(VAR_0, VAR_4);
 struct tipc_mon_domain *VAR_6 = VAR_1;
 u16 VAR_7 = VAR_5->dom_gen;
 u16 VAR_8;


 if (!FUNC_7(VAR_0, VAR_5)) {
  VAR_6->len = 0;
  return;
 }


 if (FUNC_2(VAR_3->acked_gen == VAR_7)) {
  VAR_8 = FUNC_0(VAR_6, 0);
  *VAR_2 = VAR_8;
  VAR_6->len = FUNC_1(VAR_8);
  VAR_6->gen = FUNC_1(VAR_7);
  VAR_6->ack_gen = FUNC_1(VAR_3->peer_gen);
  VAR_6->member_cnt = 0;
  return;
 }

 FUNC_5(&VAR_5->lock);
 VAR_8 = FUNC_4(VAR_5->cache.len);
 *VAR_2 = VAR_8;
 FUNC_3(VAR_1, &VAR_5->cache, VAR_8);
 FUNC_6(&VAR_5->lock);
 VAR_6->ack_gen = FUNC_1(VAR_3->peer_gen);
}
