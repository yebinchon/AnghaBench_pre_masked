
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_node {int* active_links; TYPE_1__* links; } ;
struct tipc_link {int dummy; } ;
struct TYPE_2__ {struct tipc_link* link; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct tipc_link *FUNC_1(struct tipc_node *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->active_links[VAR_2 & 1];

 if (FUNC_0(VAR_3 == VAR_0))
  return ((void*)0);

 return VAR_1->links[VAR_3].link;
}
