
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genradix_node {struct genradix_node** children; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct genradix_node*) ;

__attribute__((used)) static void FUNC_1(struct genradix_node *VAR_1, unsigned VAR_2)
{
 if (VAR_2) {
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   if (VAR_1->children[VAR_3])
    FUNC_1(VAR_1->children[VAR_3], VAR_2 - 1);
 }

 FUNC_0(VAR_1);
}
