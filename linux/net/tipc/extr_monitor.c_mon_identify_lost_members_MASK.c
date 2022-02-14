
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_peer {int applied; int down_cnt; scalar_t__ is_local; int is_up; struct tipc_mon_domain* domain; } ;
struct tipc_mon_domain {int up_map; } ;


 int FUNC_0 (int ,int) ;
 struct tipc_peer* FUNC_1 (struct tipc_peer*) ;

__attribute__((used)) static void FUNC_2(struct tipc_peer *VAR_0,
          struct tipc_mon_domain *VAR_1,
          int VAR_2)
{
 struct tipc_peer *VAR_3 = VAR_0;
 struct tipc_mon_domain *VAR_4 = VAR_0->domain;
 int VAR_5 = VAR_0->applied;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_3 = FUNC_1(VAR_3);


  if (!VAR_3->is_up || !FUNC_0(VAR_1->up_map, VAR_6))
   continue;


  if (VAR_3->is_local)
   continue;


  if (!VAR_5 || (VAR_5 < VAR_6)) {
   VAR_3->down_cnt = 1;
   continue;
  }


  if (!FUNC_0(VAR_4->up_map, VAR_6))
   VAR_3->down_cnt++;
 }
}
