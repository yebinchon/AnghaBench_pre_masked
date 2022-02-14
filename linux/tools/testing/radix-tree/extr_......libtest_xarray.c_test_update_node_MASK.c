
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_node {scalar_t__ count; scalar_t__ nr_values; int private_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct xa_node *VAR_1)
{
 if (VAR_1->count && VAR_1->count == VAR_1->nr_values) {
  if (FUNC_2(&VAR_1->private_list))
   FUNC_0(&VAR_0, &VAR_1->private_list);
 } else {
  if (!FUNC_2(&VAR_1->private_list))
   FUNC_1(&VAR_1->private_list);
 }
}
