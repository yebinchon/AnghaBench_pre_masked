
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct inline_node {int val; } ;
struct inline_list {char* srcline; int list; struct symbol* symbol; } ;
struct TYPE_2__ {scalar_t__ order; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct inline_list* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct symbol *VAR_2, char *VAR_3,
          struct inline_node *VAR_4)
{
 struct inline_list *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_5->symbol = VAR_2;
 VAR_5->srcline = VAR_3;

 if (VAR_1.order == VAR_0)
  FUNC_1(&VAR_5->list, &VAR_4->val);
 else
  FUNC_0(&VAR_5->list, &VAR_4->val);

 return 0;
}
