
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch_tree {int index; int refcount; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct dsa_switch_tree* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct dsa_switch_tree *FUNC_4(int VAR_2)
{
 struct dsa_switch_tree *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->index = VAR_2;

 FUNC_0(&VAR_3->list);
 FUNC_3(&VAR_3->list, &VAR_1);

 FUNC_1(&VAR_3->refcount);

 return VAR_3;
}
