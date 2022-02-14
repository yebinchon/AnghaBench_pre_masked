
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_peer {int dummy; } ;
struct tipc_monitor {int peer_cnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tipc_monitor*,struct tipc_peer*) ;
 struct tipc_peer* FUNC_2 (struct tipc_peer*) ;

__attribute__((used)) static void FUNC_3(struct tipc_monitor *VAR_0,
     struct tipc_peer *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0->peer_cnt);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_1(VAR_0, VAR_1);
  VAR_1 = FUNC_2(VAR_1);
 }
}
