
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_stack {unsigned long long kernel_start; struct call_return_processor* crp; int rstate; } ;
struct thread {TYPE_1__* mg; } ;
struct machine {int env; } ;
struct call_return_processor {int dummy; } ;
struct TYPE_2__ {struct machine* machine; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (struct machine*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct thread_stack*) ;

__attribute__((used)) static int FUNC_4(struct thread_stack *VAR_1, struct thread *VAR_2,
         struct call_return_processor *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  return VAR_4;

 if (VAR_2->mg && VAR_2->mg->machine) {
  struct machine *VAR_5 = VAR_2->mg->machine;
  const char *VAR_6 = FUNC_1(VAR_5->env);

  VAR_1->kernel_start = FUNC_0(VAR_5);
  if (!FUNC_2(VAR_6, "x86"))
   VAR_1->rstate = VAR_0;
 } else {
  VAR_1->kernel_start = 1ULL << 63;
 }
 VAR_1->crp = VAR_3;

 return 0;
}
