
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tipc_net {int * node_id; int node_id_string; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tipc_net* FUNC_1 (struct net*) ;

__attribute__((used)) static inline u8 *FUNC_2(struct net *VAR_0)
{
 struct tipc_net *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_0(VAR_1->node_id_string))
  return ((void*)0);
 return VAR_1->node_id;
}
