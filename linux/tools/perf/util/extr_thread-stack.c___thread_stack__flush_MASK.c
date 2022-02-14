
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack {scalar_t__ cnt; int last_time; struct call_return_processor* crp; } ;
struct thread {int dummy; } ;
struct call_return_processor {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct thread*,struct thread_stack*,scalar_t__,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct thread *VAR_0, struct thread_stack *VAR_1)
{
 struct call_return_processor *VAR_2 = VAR_1->crp;
 int VAR_3;

 if (!VAR_2) {
  VAR_1->cnt = 0;
  return 0;
 }

 while (VAR_1->cnt) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, --VAR_1->cnt,
      VAR_1->last_time, 0, 1);
  if (VAR_3) {
   FUNC_0("Error flushing thread stack!\n");
   VAR_1->cnt = 0;
   return VAR_3;
  }
 }

 return 0;
}
