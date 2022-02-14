
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_peer {scalar_t__ addr; scalar_t__ applied; int is_up; struct tipc_mon_domain* domain; } ;
struct tipc_monitor {int dummy; } ;
struct tipc_mon_domain {int member_cnt; scalar_t__* members; } ;


 struct tipc_peer* FUNC_0 (struct tipc_peer*) ;

__attribute__((used)) static void FUNC_1(struct tipc_monitor *VAR_0,
        struct tipc_peer *VAR_1)
{
 struct tipc_mon_domain *VAR_2 = VAR_1->domain;
 struct tipc_peer *VAR_3;
 u32 VAR_4;
 int VAR_5;

 if (!VAR_2 || !VAR_1->is_up)
  return;


 VAR_1->applied = 0;
 VAR_3 = FUNC_0(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_2->member_cnt; VAR_5++) {
  VAR_4 = VAR_2->members[VAR_5];
  if (VAR_4 != VAR_3->addr)
   return;
  VAR_1->applied++;
  VAR_3 = FUNC_0(VAR_3);
 }
}
