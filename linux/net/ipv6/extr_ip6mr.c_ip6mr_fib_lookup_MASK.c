
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mr_table* mrt6; } ;
struct net {TYPE_1__ ipv6; } ;
struct mr_table {int dummy; } ;
struct flowi6 {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct net *VAR_0, struct flowi6 *VAR_1,
       struct mr_table **VAR_2)
{
 *VAR_2 = VAR_0->ipv6.mrt6;
 return 0;
}
