
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ last_id_allocated; } ;
struct net {TYPE_1__ nexthop; } ;


 int FUNC_0 (struct net*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct net *VAR_0)
{
 u32 VAR_1 = VAR_0->nexthop.last_id_allocated;

 while (1) {
  VAR_0->nexthop.last_id_allocated++;
  if (VAR_0->nexthop.last_id_allocated == VAR_1)
   break;

  if (!FUNC_0(VAR_0, VAR_0->nexthop.last_id_allocated))
   return VAR_0->nexthop.last_id_allocated;
 }
 return 0;
}
