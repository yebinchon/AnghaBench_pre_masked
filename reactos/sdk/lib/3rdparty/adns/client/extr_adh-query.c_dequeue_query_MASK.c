
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_node {struct query_node* owner; struct query_node* id; } ;


 int FUNC_0 (int ,struct query_node*) ;
 int FUNC_1 (struct query_node*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct query_node *VAR_1) {
  FUNC_0(VAR_0,VAR_1);
  FUNC_1(VAR_1->id);
  FUNC_1(VAR_1->owner);
  FUNC_1(VAR_1);
}
