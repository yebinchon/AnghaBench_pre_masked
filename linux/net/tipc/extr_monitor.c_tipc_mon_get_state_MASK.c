
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_peer {int down_cnt; int is_local; int is_head; } ;
struct tipc_monitor {scalar_t__ list_gen; scalar_t__ dom_gen; int lock; } ;
struct tipc_mon_state {int probing; int monitoring; scalar_t__ list_gen; scalar_t__ acked_gen; int reset; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct tipc_peer* FUNC_0 (struct tipc_monitor*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net*,struct tipc_monitor*) ;
 struct tipc_monitor* FUNC_4 (struct net*,int) ;

void FUNC_5(struct net *VAR_1, u32 VAR_2,
   struct tipc_mon_state *VAR_3,
   int VAR_4)
{
 struct tipc_monitor *VAR_5 = FUNC_4(VAR_1, VAR_4);
 struct tipc_peer *VAR_6;

 if (!FUNC_3(VAR_1, VAR_5)) {
  VAR_3->probing = 0;
  VAR_3->monitoring = 1;
  return;
 }


 if (!VAR_3->probing &&
     (VAR_3->list_gen == VAR_5->list_gen) &&
     (VAR_3->acked_gen == VAR_5->dom_gen))
  return;

 FUNC_1(&VAR_5->lock);
 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6) {
  VAR_3->probing = VAR_3->acked_gen != VAR_5->dom_gen;
  VAR_3->probing |= VAR_6->down_cnt;
  VAR_3->reset |= VAR_6->down_cnt >= VAR_0;
  VAR_3->monitoring = VAR_6->is_local;
  VAR_3->monitoring |= VAR_6->is_head;
  VAR_3->list_gen = VAR_5->list_gen;
 }
 FUNC_2(&VAR_5->lock);
}
