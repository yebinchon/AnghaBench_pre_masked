
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {scalar_t__* active_links; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct tipc_node *VAR_1)
{
 return VAR_1->active_links[0] != VAR_0;
}
