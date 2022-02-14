
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int array; } ;
struct text_node {struct text_node* next; TYPE_1__ str; struct text_node* first_subnode; } ;


 scalar_t__ FUNC_0 (int ,char const*,int ) ;

__attribute__((used)) static struct text_node *FUNC_1(struct text_node *VAR_0,
       const char *VAR_1)
{
 struct text_node *VAR_2 = VAR_0->first_subnode;

 while (VAR_2) {
  if (FUNC_0(VAR_2->str.array, VAR_1, VAR_2->str.len) == 0)
   return VAR_2;

  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
