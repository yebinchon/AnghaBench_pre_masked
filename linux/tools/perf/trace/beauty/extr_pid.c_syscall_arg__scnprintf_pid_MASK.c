
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {int host; } ;
struct thread {scalar_t__ comm_set; } ;
struct syscall_arg {int val; struct trace* trace; } ;


 struct thread* FUNC_0 (int ,int,int) ;
 size_t FUNC_1 (char*,size_t,char*,int) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;

size_t FUNC_5(char *VAR_0, size_t VAR_1, struct syscall_arg *VAR_2)
{
 int VAR_3 = VAR_2->val;
 struct trace *VAR_4 = VAR_2->trace;
 size_t VAR_5 = FUNC_1(VAR_0, VAR_1, "%d", VAR_3);
 struct thread *VAR_6 = FUNC_0(VAR_4->host, VAR_3, VAR_3);

 if (VAR_6 != ((void*)0)) {
  if (!VAR_6->comm_set)
   FUNC_4(VAR_6);

  if (VAR_6->comm_set)
   VAR_5 += FUNC_1(VAR_0 + VAR_5, VAR_1 - VAR_5,
          " (%s)", FUNC_2(VAR_6));
  FUNC_3(VAR_6);
 }

 return VAR_5;
}
