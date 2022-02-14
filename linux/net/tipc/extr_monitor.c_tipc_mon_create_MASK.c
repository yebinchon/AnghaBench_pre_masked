
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_peer {int peer_cnt; int is_up; int is_head; scalar_t__ timer_intv; int timer; int list; int addr; struct tipc_peer* domain; struct tipc_peer* self; struct net* net; int lock; } ;
struct tipc_net {int random; struct tipc_peer** monitors; } ;
struct tipc_monitor {int peer_cnt; int is_up; int is_head; scalar_t__ timer_intv; int timer; int list; int addr; struct tipc_monitor* domain; struct tipc_monitor* self; struct net* net; int lock; } ;
struct tipc_mon_domain {int peer_cnt; int is_up; int is_head; scalar_t__ timer_intv; int timer; int list; int addr; struct tipc_mon_domain* domain; struct tipc_mon_domain* self; struct net* net; int lock; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct tipc_peer*) ;
 struct tipc_peer* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 struct tipc_net* FUNC_7 (struct net*) ;
 int FUNC_8 (struct net*) ;

int FUNC_9(struct net *VAR_5, int VAR_6)
{
 struct tipc_net *VAR_7 = FUNC_7(VAR_5);
 struct tipc_monitor *VAR_8;
 struct tipc_peer *VAR_9;
 struct tipc_mon_domain *VAR_10;

 if (VAR_7->monitors[VAR_6])
  return 0;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_8 || !VAR_9 || !VAR_10) {
  FUNC_1(VAR_8);
  FUNC_1(VAR_9);
  FUNC_1(VAR_10);
  return -VAR_0;
 }
 VAR_7->monitors[VAR_6] = VAR_8;
 FUNC_5(&VAR_8->lock);
 VAR_8->net = VAR_5;
 VAR_8->peer_cnt = 1;
 VAR_8->self = VAR_9;
 VAR_9->domain = VAR_10;
 VAR_9->addr = FUNC_8(VAR_5);
 VAR_9->is_up = 1;
 VAR_9->is_head = 1;
 FUNC_0(&VAR_9->list);
 FUNC_6(&VAR_8->timer, VAR_4, 0);
 VAR_8->timer_intv = FUNC_4(VAR_2 + (VAR_7->random & 0xffff));
 FUNC_3(&VAR_8->timer, VAR_3 + VAR_8->timer_intv);
 return 0;
}
