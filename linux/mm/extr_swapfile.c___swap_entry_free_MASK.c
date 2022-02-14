
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int dummy; } ;
struct swap_cluster_info {int dummy; } ;


 unsigned char FUNC_0 (struct swap_info_struct*,unsigned long,unsigned char) ;
 int FUNC_1 (int ) ;
 struct swap_cluster_info* FUNC_2 (struct swap_info_struct*,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct swap_info_struct*,struct swap_cluster_info*) ;

__attribute__((used)) static unsigned char FUNC_5(struct swap_info_struct *VAR_0,
           swp_entry_t VAR_1, unsigned char VAR_2)
{
 struct swap_cluster_info *VAR_3;
 unsigned long VAR_4 = FUNC_3(VAR_1);

 VAR_3 = FUNC_2(VAR_0, VAR_4);
 VAR_2 = FUNC_0(VAR_0, VAR_4, VAR_2);
 FUNC_4(VAR_0, VAR_3);
 if (!VAR_2)
  FUNC_1(VAR_1);

 return VAR_2;
}
