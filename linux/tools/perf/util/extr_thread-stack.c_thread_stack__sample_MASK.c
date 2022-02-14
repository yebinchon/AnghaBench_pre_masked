
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct thread_stack {size_t cnt; TYPE_1__* stack; } ;
struct thread {int dummy; } ;
struct ip_callchain {int nr; scalar_t__* ips; } ;
struct TYPE_2__ {scalar_t__ ret_addr; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 struct thread_stack* FUNC_1 (struct thread*,int) ;

void FUNC_2(struct thread *VAR_0, int VAR_1,
     struct ip_callchain *VAR_2,
     size_t VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct thread_stack *VAR_6 = FUNC_1(VAR_0, VAR_1);
 u64 VAR_7 = FUNC_0(VAR_4, VAR_5);
 u64 VAR_8;
 size_t VAR_9, VAR_10;

 if (VAR_3 < 2) {
  VAR_2->nr = 0;
  return;
 }

 VAR_2->ips[0] = VAR_7;
 VAR_2->ips[1] = VAR_4;

 if (!VAR_6) {
  VAR_2->nr = 2;
  return;
 }

 VAR_8 = VAR_7;

 for (VAR_9 = 2, VAR_10 = 1; VAR_9 < VAR_3 && VAR_10 <= VAR_6->cnt; VAR_9++, VAR_10++) {
  VAR_4 = VAR_6->stack[VAR_6->cnt - VAR_10].ret_addr;
  VAR_7 = FUNC_0(VAR_4, VAR_5);
  if (VAR_7 != VAR_8) {
   if (VAR_9 >= VAR_3 - 1)
    break;
   VAR_2->ips[VAR_9++] = VAR_7;
   VAR_8 = VAR_7;
  }
  VAR_2->ips[VAR_9] = VAR_4;
 }

 VAR_2->nr = VAR_9;
}
