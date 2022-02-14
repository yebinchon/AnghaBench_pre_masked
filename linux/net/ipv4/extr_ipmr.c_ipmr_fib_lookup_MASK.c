
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mr_table* mrt; } ;
struct net {TYPE_1__ ipv4; } ;
struct mr_table {int dummy; } ;
struct flowi4 {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct net *VAR_0, struct flowi4 *VAR_1,
      struct mr_table **VAR_2)
{
 *VAR_2 = VAR_0->ipv4.mrt;
 return 0;
}
