
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_runtime {int dummy; } ;
struct thread {int dummy; } ;


 int FUNC_0 (char*) ;
 struct thread_runtime* FUNC_1 (struct thread*) ;
 struct thread_runtime* FUNC_2 (struct thread*) ;

__attribute__((used)) static struct thread_runtime *FUNC_3(struct thread *VAR_0)
{
 struct thread_runtime *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0)) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1 == ((void*)0))
   FUNC_0("Failed to malloc memory for runtime data.\n");
 }

 return VAR_1;
}
