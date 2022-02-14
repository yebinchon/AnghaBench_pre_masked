
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_peer {int is_head; } ;


 struct tipc_peer* FUNC_0 (struct tipc_peer*) ;

__attribute__((used)) static struct tipc_peer *FUNC_1(struct tipc_peer *VAR_0)
{
 while (!VAR_0->is_head)
  VAR_0 = FUNC_0(VAR_0);
 return VAR_0;
}
