
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_link {int peer_bearer_id; int bearer_id; } ;



u32 FUNC_0(struct tipc_link *VAR_0)
{
 return VAR_0->peer_bearer_id << 16 | VAR_0->bearer_id;
}
