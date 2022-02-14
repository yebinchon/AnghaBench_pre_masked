
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_stack {unsigned int arr_sz; int stack; } ;
struct thread {struct thread_stack* ts; } ;
struct call_return_processor {int dummy; } ;


 struct thread_stack* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct thread_stack*,struct thread_stack*,unsigned int) ;
 unsigned int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct thread_stack*,struct thread*,struct call_return_processor*) ;
 scalar_t__ FUNC_4 (struct thread*) ;
 int FUNC_5 (struct thread_stack**) ;

__attribute__((used)) static struct thread_stack *FUNC_6(struct thread *VAR_0, int VAR_1,
           struct call_return_processor *VAR_2)
{
 struct thread_stack *VAR_3 = VAR_0->ts, *VAR_4;
 unsigned int VAR_5 = VAR_3 ? VAR_3->arr_sz : 0;
 unsigned int VAR_6 = 1;

 if (FUNC_4(VAR_0) && VAR_1 > 0)
  VAR_6 = FUNC_2(VAR_1 + 1);

 if (!VAR_3 || VAR_6 > VAR_5) {
  VAR_4 = FUNC_0(VAR_6, sizeof(*VAR_3));
  if (!VAR_4)
   return ((void*)0);
  if (VAR_3)
   FUNC_1(VAR_4, VAR_3, VAR_5 * sizeof(*VAR_3));
  VAR_4->arr_sz = VAR_6;
  FUNC_5(&VAR_0->ts);
  VAR_0->ts = VAR_4;
  VAR_3 = VAR_4;
 }

 if (FUNC_4(VAR_0) && VAR_1 > 0 &&
     (unsigned int)VAR_1 < VAR_3->arr_sz)
  VAR_3 += VAR_1;

 if (!VAR_3->stack &&
     FUNC_3(VAR_3, VAR_0, VAR_2))
  return ((void*)0);

 return VAR_3;
}
