
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sugov_policy {int limits_changed; } ;
struct sugov_cpu {scalar_t__ bw_dl; int cpu; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct sugov_cpu *VAR_0, struct sugov_policy *VAR_1)
{
 if (FUNC_0(FUNC_1(VAR_0->cpu)) > VAR_0->bw_dl)
  VAR_1->limits_changed = 1;
}
