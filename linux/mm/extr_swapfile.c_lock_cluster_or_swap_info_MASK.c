
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int lock; } ;
struct swap_cluster_info {int dummy; } ;


 struct swap_cluster_info* FUNC_0 (struct swap_info_struct*,unsigned long) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline struct swap_cluster_info *FUNC_2(
  struct swap_info_struct *VAR_0, unsigned long VAR_1)
{
 struct swap_cluster_info *VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  FUNC_1(&VAR_0->lock);

 return VAR_2;
}
