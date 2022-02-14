
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {int link_cnt; struct tipc_link_entry* links; } ;
struct tipc_link_entry {int * link; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tipc_node *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct tipc_link_entry *VAR_3 = &VAR_1->links[VAR_2];

  if (VAR_3->link) {
   FUNC_0(VAR_3->link);
   VAR_3->link = ((void*)0);
   VAR_1->link_cnt--;
  }
 }
}
