
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct func_node {int bbs; } ;
struct bb_node {int idx; } ;
struct TYPE_2__ {int l; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bb_node* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct func_node*) ;

__attribute__((used)) static bool FUNC_2(struct func_node *VAR_2)
{
 struct bb_node *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->bbs);
 if (!VAR_3)
  return 1;
 VAR_3->idx = VAR_0;

 VAR_3 = FUNC_0(&FUNC_1(VAR_2)->l);
 if (!VAR_3)
  return 1;
 VAR_3->idx = VAR_1;

 return 0;
}
