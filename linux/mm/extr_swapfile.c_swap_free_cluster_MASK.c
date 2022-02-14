
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {scalar_t__ swap_map; } ;
struct swap_cluster_info {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct swap_cluster_info*,int ,int ) ;
 int FUNC_1 (struct swap_info_struct*,unsigned long) ;
 struct swap_cluster_info* FUNC_2 (struct swap_info_struct*,unsigned long) ;
 int FUNC_3 (scalar_t__,int ,unsigned long) ;
 int FUNC_4 (struct swap_info_struct*,unsigned long,unsigned long) ;
 int FUNC_5 (struct swap_cluster_info*) ;

__attribute__((used)) static void FUNC_6(struct swap_info_struct *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_2 * VAR_0;
 struct swap_cluster_info *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 FUNC_3(VAR_1->swap_map + VAR_3, 0, VAR_0);
 FUNC_0(VAR_4, 0, 0);
 FUNC_1(VAR_1, VAR_2);
 FUNC_5(VAR_4);
 FUNC_4(VAR_1, VAR_3, VAR_0);
}
