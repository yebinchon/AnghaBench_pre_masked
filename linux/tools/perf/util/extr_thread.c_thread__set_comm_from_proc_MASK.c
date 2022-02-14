
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int pid_; int tid; } ;
typedef int path ;


 scalar_t__ FUNC_0 (char*,char**,size_t*) ;
 int FUNC_1 (char*,int,char*,int,int) ;
 int FUNC_2 (struct thread*,char*,int ) ;

int FUNC_3(struct thread *VAR_0)
{
 char VAR_1[64];
 char *VAR_2 = ((void*)0);
 size_t VAR_3;
 int VAR_4 = -1;

 if (!(FUNC_1(VAR_1, sizeof(VAR_1), "%d/task/%d/comm",
         VAR_0->pid_, VAR_0->tid) >= (int)sizeof(VAR_1)) &&
     FUNC_0(VAR_1, &VAR_2, &VAR_3) == 0) {
  VAR_2[VAR_3 - 1] = '\0';
  VAR_4 = FUNC_2(VAR_0, VAR_2, 0);
 }

 return VAR_4;
}
