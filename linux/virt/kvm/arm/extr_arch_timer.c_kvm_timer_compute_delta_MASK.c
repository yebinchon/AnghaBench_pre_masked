
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct arch_timer_context {scalar_t__ cnt_cval; scalar_t__ cntvoff; } ;
struct TYPE_2__ {int frac; int mask; int cc; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static u64 FUNC_2(struct arch_timer_context *VAR_1)
{
 u64 VAR_2, VAR_3;

 VAR_2 = VAR_1->cnt_cval;
 VAR_3 = FUNC_1() - VAR_1->cntvoff;

 if (VAR_3 < VAR_2) {
  u64 VAR_4;

  VAR_4 = FUNC_0(VAR_0->cc,
      VAR_2 - VAR_3,
      VAR_0->mask,
      &VAR_0->frac);
  return VAR_4;
 }

 return 0;
}
