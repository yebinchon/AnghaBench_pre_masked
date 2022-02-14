
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebt_mac_wormhash_tuple {int dummy; } ;
struct ebt_mac_wormhash {int poolsize; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct ebt_mac_wormhash *VAR_1)
{
 return VAR_1 && VAR_1->poolsize >= (VAR_0 / sizeof(struct ebt_mac_wormhash_tuple));
}
