
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_runtime {int run_stats; } ;
struct thread {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct thread*,struct thread_runtime*) ;
 struct thread_runtime* FUNC_2 (int) ;

__attribute__((used)) static struct thread_runtime *FUNC_3(struct thread *VAR_0)
{
 struct thread_runtime *VAR_1;

 VAR_1 = FUNC_2(sizeof(struct thread_runtime));
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->run_stats);
 FUNC_1(VAR_0, VAR_1);

 return VAR_1;
}
