
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int lock; int cluster_info; int swap_map; int prio; } ;


 int FUNC_0 (struct swap_info_struct*) ;
 int FUNC_1 (struct swap_info_struct*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct swap_info_struct *VAR_1)
{
 FUNC_2(&VAR_0);
 FUNC_2(&VAR_1->lock);
 FUNC_1(VAR_1, VAR_1->prio, VAR_1->swap_map, VAR_1->cluster_info);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->lock);
 FUNC_3(&VAR_0);
}
