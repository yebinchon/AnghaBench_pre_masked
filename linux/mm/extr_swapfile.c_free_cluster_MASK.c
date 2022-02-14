
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int flags; struct swap_cluster_info* cluster_info; } ;
struct swap_cluster_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct swap_info_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (struct swap_cluster_info*) ;
 int FUNC_3 (struct swap_info_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct swap_info_struct *VAR_2, unsigned long VAR_3)
{
 struct swap_cluster_info *VAR_4 = VAR_2->cluster_info + VAR_3;

 FUNC_0(FUNC_2(VAR_4) != 0);





 if ((VAR_2->flags & (VAR_1 | VAR_0)) ==
     (VAR_1 | VAR_0)) {
  FUNC_3(VAR_2, VAR_3);
  return;
 }

 FUNC_1(VAR_2, VAR_3);
}
