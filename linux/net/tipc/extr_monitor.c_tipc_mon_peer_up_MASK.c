
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_peer {int is_up; } ;
struct tipc_monitor {int lock; } ;
struct net {int dummy; } ;


 struct tipc_peer* FUNC_0 (struct tipc_monitor*,int ) ;
 struct tipc_peer* FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct tipc_monitor*,struct tipc_peer*) ;
 int FUNC_3 (struct tipc_monitor*) ;
 struct tipc_peer* FUNC_4 (struct tipc_peer*) ;
 int FUNC_5 (struct tipc_monitor*,int ,struct tipc_peer**) ;
 struct tipc_monitor* FUNC_6 (struct net*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct net *VAR_0, u32 VAR_1, int VAR_2)
{
 struct tipc_monitor *VAR_3 = FUNC_6(VAR_0, VAR_2);
 struct tipc_peer *VAR_4 = FUNC_1(VAR_0, VAR_2);
 struct tipc_peer *VAR_5, *VAR_6;

 FUNC_7(&VAR_3->lock);
 VAR_5 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_5 && !FUNC_5(VAR_3, VAR_1, &VAR_5))
  goto exit;
 VAR_5->is_up = 1;
 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == VAR_4)
  FUNC_3(VAR_3);
 FUNC_2(VAR_3, VAR_6);
exit:
 FUNC_8(&VAR_3->lock);
}
