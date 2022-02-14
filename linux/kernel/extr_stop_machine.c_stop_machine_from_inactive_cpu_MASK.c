
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multi_stop_data {void* data; scalar_t__ num_threads; struct cpumask const* active_cpus; int fn; } ;
struct cpumask {int dummy; } ;
struct cpu_stop_done {int ret; int completion; } ;
typedef int cpu_stop_fn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (struct cpu_stop_done*,scalar_t__) ;
 int FUNC_5 (struct multi_stop_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int (*) (struct multi_stop_data*),struct multi_stop_data*,struct cpu_stop_done*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct multi_stop_data*,int ) ;
 int VAR_2 ;

int FUNC_12(cpu_stop_fn_t VAR_3, void *VAR_4,
      const struct cpumask *VAR_5)
{
 struct multi_stop_data VAR_6 = { .fn = VAR_3, .data = VAR_4,
         .active_cpus = VAR_5 };
 struct cpu_stop_done VAR_7;
 int VAR_8;


 FUNC_0(FUNC_2(FUNC_10()));
 VAR_6.num_threads = FUNC_8() + 1;


 while (!FUNC_6(&VAR_2))
  FUNC_3();


 FUNC_11(&VAR_6, VAR_0);
 FUNC_4(&VAR_7, FUNC_8());
 FUNC_9(VAR_1, FUNC_5, &VAR_6,
        &VAR_7);
 VAR_8 = FUNC_5(&VAR_6);


 while (!FUNC_1(&VAR_7.completion))
  FUNC_3();

 FUNC_7(&VAR_2);
 return VAR_8 ?: VAR_7.ret;
}
