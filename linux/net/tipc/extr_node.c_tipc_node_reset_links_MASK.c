
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct tipc_node*,int,int) ;
 int FUNC_2 (struct tipc_node*,int,char*) ;

__attribute__((used)) static void FUNC_3(struct tipc_node *VAR_1)
{
 int VAR_2;

 FUNC_0("Resetting all links to %x\n", VAR_1->addr);

 FUNC_2(VAR_1, 1, " ");
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(VAR_1, VAR_2, 0);
 }
}
