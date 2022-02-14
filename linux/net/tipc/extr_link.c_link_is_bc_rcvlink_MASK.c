
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {struct tipc_link* bc_rcvlink; } ;


 int FUNC_0 (struct tipc_link*) ;

__attribute__((used)) static bool FUNC_1(struct tipc_link *VAR_0)
{
 return ((VAR_0->bc_rcvlink == VAR_0) && !FUNC_0(VAR_0));
}
