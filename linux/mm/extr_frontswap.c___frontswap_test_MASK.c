
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {scalar_t__ frontswap_map; } ;
typedef int pgoff_t ;


 int FUNC_0 (int ,scalar_t__) ;

bool FUNC_1(struct swap_info_struct *VAR_0,
    pgoff_t VAR_1)
{
 if (VAR_0->frontswap_map)
  return FUNC_0(VAR_1, VAR_0->frontswap_map);
 return 0;
}
