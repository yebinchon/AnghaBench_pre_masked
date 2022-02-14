
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct he_stat {scalar_t__ weight; scalar_t__ nr_events; scalar_t__ period_guest_us; scalar_t__ period_guest_sys; scalar_t__ period_us; scalar_t__ period_sys; scalar_t__ period; } ;



__attribute__((used)) static void FUNC_0(struct he_stat *VAR_0, struct he_stat *VAR_1)
{
 VAR_0->period += VAR_1->period;
 VAR_0->period_sys += VAR_1->period_sys;
 VAR_0->period_us += VAR_1->period_us;
 VAR_0->period_guest_sys += VAR_1->period_guest_sys;
 VAR_0->period_guest_us += VAR_1->period_guest_us;
 VAR_0->nr_events += VAR_1->nr_events;
 VAR_0->weight += VAR_1->weight;
}
