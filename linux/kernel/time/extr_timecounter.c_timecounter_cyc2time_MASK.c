
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct timecounter {int cycle_last; int nsec; int frac; int mask; TYPE_1__* cc; } ;
struct TYPE_3__ {int mask; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,int*) ;

u64 FUNC_2(struct timecounter *VAR_0,
    u64 VAR_1)
{
 u64 VAR_2 = (VAR_1 - VAR_0->cycle_last) & VAR_0->cc->mask;
 u64 VAR_3 = VAR_0->nsec, VAR_4 = VAR_0->frac;






 if (VAR_2 > VAR_0->cc->mask / 2) {
  VAR_2 = (VAR_0->cycle_last - VAR_1) & VAR_0->cc->mask;
  VAR_3 -= FUNC_0(VAR_0->cc, VAR_2, VAR_0->mask, VAR_4);
 } else {
  VAR_3 += FUNC_1(VAR_0->cc, VAR_2, VAR_0->mask, &VAR_4);
 }

 return VAR_3;
}
