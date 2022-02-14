
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct perf_tsc_conversion {int time_mult; int time_zero; int time_shift; } ;
struct jit_buf_desc {TYPE_2__* session; int use_arch_timestamp; } ;
struct TYPE_3__ {int time_zero; int time_mult; int time_shift; } ;
struct TYPE_4__ {TYPE_1__ time_conv; } ;


 int FUNC_0 (int ,struct perf_tsc_conversion*) ;

__attribute__((used)) static uint64_t FUNC_1(struct jit_buf_desc *VAR_0, uint64_t VAR_1)
{
 struct perf_tsc_conversion VAR_2;

 if (!VAR_0->use_arch_timestamp)
  return VAR_1;

 VAR_2.time_shift = VAR_0->session->time_conv.time_shift;
 VAR_2.time_mult = VAR_0->session->time_conv.time_mult;
 VAR_2.time_zero = VAR_0->session->time_conv.time_zero;

 if (!VAR_2.time_mult)
  return 0;

 return FUNC_0(VAR_1, &VAR_2);
}
