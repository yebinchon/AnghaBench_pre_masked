
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int dummy; } ;
struct swap_cluster_info {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct swap_info_struct*,unsigned long) ;
 int FUNC_2 (struct swap_cluster_info*) ;
 scalar_t__ FUNC_3 (struct swap_cluster_info*) ;
 int FUNC_4 (struct swap_cluster_info*,int) ;

__attribute__((used)) static void FUNC_5(struct swap_info_struct *VAR_1,
 struct swap_cluster_info *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_3 / VAR_0;

 if (!VAR_2)
  return;
 if (FUNC_3(&VAR_2[VAR_4]))
  FUNC_1(VAR_1, VAR_4);

 FUNC_0(FUNC_2(&VAR_2[VAR_4]) >= VAR_0);
 FUNC_4(&VAR_2[VAR_4],
  FUNC_2(&VAR_2[VAR_4]) + 1);
}
