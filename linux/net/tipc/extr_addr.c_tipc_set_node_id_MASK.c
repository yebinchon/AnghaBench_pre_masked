
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tipc_net {int trial_addr; int net_id; int node_id_string; int node_id; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 struct tipc_net* FUNC_2 (struct net*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct net*) ;

void FUNC_5(struct net *VAR_1, u8 *VAR_2)
{
 struct tipc_net *VAR_3 = FUNC_2(VAR_1);
 u32 *VAR_4 = (u32 *)VAR_2;

 FUNC_0(VAR_3->node_id, VAR_2, VAR_0);
 FUNC_3(VAR_3->node_id_string, VAR_2);
 VAR_3->trial_addr = VAR_4[0] ^ VAR_4[1] ^ VAR_4[2] ^ VAR_4[3];
 FUNC_1("Own node identity %s, cluster identity %u\n",
  FUNC_4(VAR_1), VAR_3->net_id);
}
