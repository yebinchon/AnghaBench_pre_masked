
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int * swap_map; } ;
struct swap_cluster_info {int dummy; } ;
struct page {int dummy; } ;


 struct swap_info_struct* FUNC_0 (TYPE_1__) ;
 struct swap_cluster_info* FUNC_1 (struct swap_info_struct*,unsigned long) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (TYPE_1__) ;
 int FUNC_5 (struct swap_info_struct*,struct swap_cluster_info*) ;

int FUNC_6(struct page *VAR_0)
{
 int VAR_1 = 0;
 struct swap_info_struct *VAR_2;
 struct swap_cluster_info *VAR_3;
 swp_entry_t VAR_4;
 unsigned long VAR_5;

 VAR_4.val = FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_4);
 if (VAR_2) {
  VAR_5 = FUNC_4(VAR_4);
  VAR_3 = FUNC_1(VAR_2, VAR_5);
  VAR_1 = FUNC_3(VAR_2->swap_map[VAR_5]);
  FUNC_5(VAR_2, VAR_3);
 }
 return VAR_1;
}
