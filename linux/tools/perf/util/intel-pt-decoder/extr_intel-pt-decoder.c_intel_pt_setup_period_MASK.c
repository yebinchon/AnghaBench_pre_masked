
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_decoder {scalar_t__ period_type; int period_mask; int period_ticks; int period; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_decoder *VAR_1)
{
 if (VAR_1->period_type == VAR_0) {
  uint64_t VAR_2;

  VAR_2 = FUNC_0(VAR_1->period);
  VAR_1->period_mask = ~(VAR_2 - 1);
  VAR_1->period_ticks = VAR_2;
 }
}
