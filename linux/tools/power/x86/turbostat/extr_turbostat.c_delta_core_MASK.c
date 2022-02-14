
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msr_counter {scalar_t__ format; struct msr_counter* next; } ;
struct core_data {scalar_t__* counter; int core_energy; scalar_t__ mc6_us; int core_temp_c; scalar_t__ c7; scalar_t__ c6; scalar_t__ c3; } ;
struct TYPE_2__ {struct msr_counter* cp; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

void
FUNC_1(struct core_data *VAR_2, struct core_data *VAR_3)
{
 int VAR_4;
 struct msr_counter *VAR_5;

 VAR_3->c3 = VAR_2->c3 - VAR_3->c3;
 VAR_3->c6 = VAR_2->c6 - VAR_3->c6;
 VAR_3->c7 = VAR_2->c7 - VAR_3->c7;
 VAR_3->core_temp_c = VAR_2->core_temp_c;
 VAR_3->mc6_us = VAR_2->mc6_us - VAR_3->mc6_us;

 FUNC_0(VAR_2->core_energy, VAR_3->core_energy);

 for (VAR_4 = 0, VAR_5 = VAR_1.cp; VAR_5; VAR_4++, VAR_5 = VAR_5->next) {
  if (VAR_5->format == VAR_0)
   VAR_3->counter[VAR_4] = VAR_2->counter[VAR_4];
  else
   VAR_3->counter[VAR_4] = VAR_2->counter[VAR_4] - VAR_3->counter[VAR_4];
 }
}
