
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_stop_work {void* arg; struct cpu_stop_done* done; int fn; } ;
struct cpu_stop_done {int ret; int completion; } ;
typedef int cpu_stop_fn_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct cpu_stop_done*,int) ;
 int FUNC_2 (unsigned int,struct cpu_stop_work*) ;
 int FUNC_3 (int *) ;

int FUNC_4(unsigned int VAR_1, cpu_stop_fn_t VAR_2, void *VAR_3)
{
 struct cpu_stop_done VAR_4;
 struct cpu_stop_work VAR_5 = { .fn = VAR_2, .arg = VAR_3, .done = &VAR_4 };

 FUNC_1(&VAR_4, 1);
 if (!FUNC_2(VAR_1, &VAR_5))
  return -VAR_0;




 FUNC_0();
 FUNC_3(&VAR_4.completion);
 return VAR_4.ret;
}
