
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int lock; } ;
struct swap_cluster_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct swap_cluster_info*) ;

__attribute__((used)) static inline void FUNC_2(struct swap_info_struct *VAR_0,
            struct swap_cluster_info *VAR_1)
{
 if (VAR_1)
  FUNC_1(VAR_1);
 else
  FUNC_0(&VAR_0->lock);
}
