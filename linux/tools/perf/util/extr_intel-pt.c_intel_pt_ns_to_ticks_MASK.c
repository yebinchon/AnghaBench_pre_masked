
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int time_mult; int time_shift; } ;
struct intel_pt {TYPE_1__ tc; } ;



__attribute__((used)) static u64 FUNC_0(const struct intel_pt *VAR_0, u64 VAR_1)
{
 u64 VAR_2, VAR_3;

 VAR_2 = VAR_1 / VAR_0->tc.time_mult;
 VAR_3 = VAR_1 % VAR_0->tc.time_mult;
 return (VAR_2 << VAR_0->tc.time_shift) + (VAR_3 << VAR_0->tc.time_shift) /
  VAR_0->tc.time_mult;
}
