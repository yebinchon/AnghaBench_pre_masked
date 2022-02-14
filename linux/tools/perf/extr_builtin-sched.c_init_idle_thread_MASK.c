
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_2__ {int run_stats; } ;
struct idle_thread_runtime {int cursor; int callchain; TYPE_1__ tr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*,int ,int ) ;
 int FUNC_4 (struct thread*,struct idle_thread_runtime*) ;
 struct idle_thread_runtime* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct thread *VAR_2)
{
 struct idle_thread_runtime *VAR_3;

 FUNC_3(VAR_2, VAR_1, 0);

 VAR_3 = FUNC_5(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_2(&VAR_3->tr.run_stats);
 FUNC_1(&VAR_3->callchain);
 FUNC_0(&VAR_3->cursor);
 FUNC_4(VAR_2, VAR_3);

 return 0;
}
