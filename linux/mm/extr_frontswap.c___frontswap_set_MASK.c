
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int frontswap_pages; int frontswap_map; } ;
typedef int pgoff_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct swap_info_struct *VAR_0,
       pgoff_t VAR_1)
{
 FUNC_1(VAR_1, VAR_0->frontswap_map);
 FUNC_0(&VAR_0->frontswap_pages);
}
