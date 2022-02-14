
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_cluster_info {int dummy; } ;
struct swap_cluster_list {struct swap_cluster_info head; struct swap_cluster_info tail; } ;


 unsigned int FUNC_0 (struct swap_cluster_info*) ;
 int FUNC_1 (struct swap_cluster_info*,unsigned int,int ) ;
 int FUNC_2 (struct swap_cluster_info*) ;

__attribute__((used)) static unsigned int FUNC_3(struct swap_cluster_list *VAR_0,
        struct swap_cluster_info *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->head);
 if (FUNC_0(&VAR_0->tail) == VAR_2) {
  FUNC_2(&VAR_0->head);
  FUNC_2(&VAR_0->tail);
 } else
  FUNC_1(&VAR_0->head,
          FUNC_0(&VAR_1[VAR_2]), 0);

 return VAR_2;
}
