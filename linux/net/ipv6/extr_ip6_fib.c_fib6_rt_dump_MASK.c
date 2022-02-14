
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fib6_info {int dummy; } ;
struct fib6_dump_arg {TYPE_2__* net; int nb; } ;
struct TYPE_3__ {struct fib6_info* fib6_null_entry; } ;
struct TYPE_4__ {TYPE_1__ ipv6; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ,struct fib6_info*) ;

__attribute__((used)) static void FUNC_1(struct fib6_info *VAR_1, struct fib6_dump_arg *VAR_2)
{
 if (VAR_1 == VAR_2->net->ipv6.fib6_null_entry)
  return;
 FUNC_0(VAR_2->nb, VAR_2->net, VAR_0, VAR_1);
}
