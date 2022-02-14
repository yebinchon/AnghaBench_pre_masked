
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_top {scalar_t__ drop; scalar_t__ lost; scalar_t__ guest_us_samples; scalar_t__ guest_kernel_samples; scalar_t__ exact_samples; scalar_t__ kernel_samples; scalar_t__ us_samples; scalar_t__ samples; } ;



void FUNC_0(struct perf_top *VAR_0)
{
 VAR_0->samples = VAR_0->us_samples = VAR_0->kernel_samples =
 VAR_0->exact_samples = VAR_0->guest_kernel_samples =
 VAR_0->guest_us_samples = VAR_0->lost = VAR_0->drop = 0;
}
