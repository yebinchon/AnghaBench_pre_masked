
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ array; } ;
struct text_node {struct text_leaf* leaf; TYPE_1__ str; struct text_node* first_subnode; } ;
struct text_leaf {int dummy; } ;


 struct text_node* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (char const*,struct text_leaf*,struct text_node*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, size_t VAR_1,
        struct text_leaf *VAR_2, struct text_node *VAR_3)
{
 struct text_node *VAR_4 = FUNC_0(sizeof(struct text_node));

 FUNC_1(&VAR_4->str, VAR_3->str.array + VAR_1);
 VAR_4->leaf = VAR_3->leaf;
 VAR_4->first_subnode = VAR_3->first_subnode;
 VAR_3->first_subnode = VAR_4;

 FUNC_2(&VAR_3->str, VAR_1);

 if (VAR_0[VAR_1] != 0) {
  VAR_3->leaf = ((void*)0);
  FUNC_3(VAR_0 + VAR_1, VAR_2, VAR_3);
 } else {
  VAR_3->leaf = VAR_2;
 }
}
