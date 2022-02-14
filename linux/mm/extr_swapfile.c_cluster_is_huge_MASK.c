
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_cluster_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct swap_cluster_info *VAR_2)
{
 if (FUNC_0(VAR_1))
  return VAR_2->flags & VAR_0;
 return 0;
}
