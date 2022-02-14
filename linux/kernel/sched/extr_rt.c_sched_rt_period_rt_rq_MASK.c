
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt_rq {int dummy; } ;
struct rt_bandwidth {int dummy; } ;
struct TYPE_2__ {struct rt_rq rt; } ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static inline
struct rt_rq *FUNC_1(struct rt_bandwidth *VAR_0, int VAR_1)
{
 return &FUNC_0(VAR_1)->rt;
}
