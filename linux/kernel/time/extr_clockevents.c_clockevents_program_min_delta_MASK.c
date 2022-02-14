
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {unsigned long long mult; unsigned long long shift; scalar_t__ (* set_next_event ) (unsigned long,struct clock_event_device*) ;int retries; int next_event; scalar_t__ min_delta_ns; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long,struct clock_event_device*) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_1)
{
 unsigned long long VAR_2;
 int64_t VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  VAR_3 += VAR_1->min_delta_ns;
  VAR_1->next_event = FUNC_1(FUNC_2(), VAR_3);

  if (FUNC_0(VAR_1))
   return 0;

  VAR_1->retries++;
  VAR_2 = ((unsigned long long) VAR_3 * VAR_1->mult) >> VAR_1->shift;
  if (VAR_1->set_next_event((unsigned long) VAR_2, VAR_1) == 0)
   return 0;
 }
 return -VAR_0;
}
