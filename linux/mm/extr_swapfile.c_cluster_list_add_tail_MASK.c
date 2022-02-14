
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_cluster_list {int tail; int head; } ;
struct swap_cluster_info {int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct swap_cluster_list*) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct swap_cluster_info*,unsigned int) ;
 int FUNC_3 (int *,unsigned int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct swap_cluster_list *VAR_1,
      struct swap_cluster_info *VAR_2,
      unsigned int VAR_3)
{
 if (FUNC_0(VAR_1)) {
  FUNC_3(&VAR_1->head, VAR_3, 0);
  FUNC_3(&VAR_1->tail, VAR_3, 0);
 } else {
  struct swap_cluster_info *VAR_4;
  unsigned int VAR_5 = FUNC_1(&VAR_1->tail);





  VAR_4 = VAR_2 + VAR_5;
  FUNC_4(&VAR_4->lock, VAR_0);
  FUNC_2(VAR_4, VAR_3);
  FUNC_5(&VAR_4->lock);
  FUNC_3(&VAR_1->tail, VAR_3, 0);
 }
}
