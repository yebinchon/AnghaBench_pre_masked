
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_peer {int applied; } ;
struct tipc_monitor {scalar_t__ timer_intv; int timer; int lock; struct tipc_peer* self; int peer_cnt; } ;
struct timer_list {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tipc_monitor* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct tipc_monitor* VAR_1 ;
 int FUNC_3 (struct tipc_monitor*,struct tipc_peer*) ;
 int FUNC_4 (struct tipc_monitor*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct tipc_monitor *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct tipc_peer *VAR_5;
 int VAR_6 = FUNC_0(VAR_4->peer_cnt) - 1;

 FUNC_5(&VAR_4->lock);
 VAR_5 = VAR_4->self;
 if (VAR_5 && (VAR_6 != VAR_5->applied)) {
  FUNC_4(VAR_4);
  FUNC_3(VAR_4, VAR_5);
 }
 FUNC_6(&VAR_4->lock);
 FUNC_2(&VAR_4->timer, VAR_0 + VAR_4->timer_intv);
}
