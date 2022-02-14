
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_bc_base {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct tipc_bc_base* bcbase; } ;


 TYPE_1__* FUNC_0 (struct net*) ;

__attribute__((used)) static struct tipc_bc_base *FUNC_1(struct net *VAR_0)
{
 return FUNC_0(VAR_0)->bcbase;
}
