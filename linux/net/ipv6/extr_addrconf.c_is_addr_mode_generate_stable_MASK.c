
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ addr_gen_mode; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct inet6_dev *VAR_2)
{
 return VAR_2->cnf.addr_gen_mode == VAR_1 ||
        VAR_2->cnf.addr_gen_mode == VAR_0;
}
