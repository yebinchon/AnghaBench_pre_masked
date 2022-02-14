
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct tipc_peer {scalar_t__ addr; int is_up; scalar_t__ applied; struct tipc_mon_domain* domain; } ;
struct tipc_mon_domain {scalar_t__ up_map; scalar_t__ len; scalar_t__ member_cnt; scalar_t__* members; scalar_t__ gen; } ;
struct tipc_monitor {scalar_t__ dom_gen; int peer_cnt; struct tipc_mon_domain cache; struct tipc_peer* self; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct tipc_mon_domain*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__,int ) ;
 int FUNC_6 (struct tipc_monitor*,struct tipc_peer*) ;
 struct tipc_peer* FUNC_7 (struct tipc_peer*) ;

__attribute__((used)) static void FUNC_8(struct tipc_monitor *VAR_0)
{
 struct tipc_peer *VAR_1 = VAR_0->self;
 struct tipc_mon_domain *VAR_2 = &VAR_0->cache;
 struct tipc_mon_domain *VAR_3 = VAR_1->domain;
 struct tipc_peer *VAR_4 = VAR_1;
 u64 VAR_5 = VAR_3->up_map;
 u16 VAR_6, VAR_7;
 bool VAR_8;


 VAR_6 = FUNC_2(VAR_0->peer_cnt) - 1;
 VAR_1->applied = VAR_6;


 VAR_3->len = FUNC_1(VAR_3, VAR_6);
 VAR_8 = VAR_3->member_cnt != VAR_6;
 VAR_3->member_cnt = VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_4 = FUNC_7(VAR_4);
  VAR_8 |= VAR_3->members[VAR_7] != VAR_4->addr;
  VAR_3->members[VAR_7] = VAR_4->addr;
  FUNC_5(&VAR_3->up_map, VAR_7, VAR_4->is_up);
  VAR_2->members[VAR_7] = FUNC_3(VAR_4->addr);
 }
 VAR_8 |= VAR_3->up_map != VAR_5;
 if (!VAR_8)
  return;
 VAR_3->gen = ++VAR_0->dom_gen;
 VAR_2->len = FUNC_4(VAR_3->len);
 VAR_2->gen = FUNC_4(VAR_3->gen);
 VAR_2->member_cnt = FUNC_4(VAR_6);
 VAR_2->up_map = FUNC_0(VAR_3->up_map);
 FUNC_6(VAR_0, VAR_1);
}
