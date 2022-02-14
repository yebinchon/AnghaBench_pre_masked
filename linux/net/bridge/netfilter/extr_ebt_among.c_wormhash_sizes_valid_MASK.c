
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebt_mac_wormhash {int dummy; } ;
struct ebt_among_info {int dummy; } ;


 int FUNC_0 (struct ebt_mac_wormhash const*) ;

__attribute__((used)) static bool FUNC_1(const struct ebt_mac_wormhash *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_1 == 0)
  VAR_1 = sizeof(struct ebt_among_info);

 return FUNC_0(VAR_0) + VAR_1 == VAR_2;
}
