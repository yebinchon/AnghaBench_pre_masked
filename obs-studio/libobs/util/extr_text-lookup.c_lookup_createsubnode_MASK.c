
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_node {struct text_node* first_subnode; int str; struct text_node* next; struct text_leaf* leaf; } ;
struct text_leaf {int dummy; } ;


 struct text_node* FUNC_0 (int) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, struct text_leaf *VAR_1,
     struct text_node *VAR_2)
{
 struct text_node *VAR_3 = FUNC_0(sizeof(struct text_node));
 VAR_3->leaf = VAR_1;
 VAR_3->next = VAR_2->first_subnode;
 FUNC_1(&VAR_3->str, VAR_0);

 VAR_2->first_subnode = VAR_3;
}
