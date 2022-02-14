
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_node {scalar_t__ count; scalar_t__ nr_values; int private_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xa_node*,int ) ;
 int FUNC_2 (struct xa_node*,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;

void FUNC_7(struct xa_node *VAR_2)
{
 FUNC_0(!FUNC_3());

 if (VAR_2->count && VAR_2->count == VAR_2->nr_values) {
  if (FUNC_4(&VAR_2->private_list)) {
   FUNC_5(&VAR_1, &VAR_2->private_list);
   FUNC_2(VAR_2, VAR_0);
  }
 } else {
  if (!FUNC_4(&VAR_2->private_list)) {
   FUNC_6(&VAR_1, &VAR_2->private_list);
   FUNC_1(VAR_2, VAR_0);
  }
 }
}
