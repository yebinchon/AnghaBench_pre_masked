
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlpm_node {struct tlpm_node* next; } ;


 int FUNC_0 (struct tlpm_node*) ;

__attribute__((used)) static void FUNC_1(struct tlpm_node *VAR_0)
{
 struct tlpm_node *VAR_1;



 while ((VAR_1 = VAR_0)) {
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
