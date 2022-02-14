
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct fib6_table* fib6_main_tbl; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_table {int dummy; } ;



struct fib6_table *FUNC_0(struct net *VAR_0, u32 VAR_1)
{
   return VAR_0->ipv6.fib6_main_tbl;
}
