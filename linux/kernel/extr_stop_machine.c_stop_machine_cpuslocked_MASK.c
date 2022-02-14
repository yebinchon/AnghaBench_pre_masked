
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multi_stop_data {int (* fn ) (void*) ;void* data; int num_threads; struct cpumask const* active_cpus; } ;
struct cpumask {int dummy; } ;
typedef int (* cpu_stop_fn_t ) (void*) ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (struct multi_stop_data*,int ) ;
 int FUNC_7 (int ,int ,struct multi_stop_data*) ;
 int VAR_3 ;
 int FUNC_8 (void*) ;

int FUNC_9(cpu_stop_fn_t VAR_4, void *VAR_5,
       const struct cpumask *VAR_6)
{
 struct multi_stop_data VAR_7 = {
  .fn = VAR_4,
  .data = VAR_5,
  .num_threads = FUNC_5(),
  .active_cpus = VAR_6,
 };

 FUNC_4();

 if (!VAR_3) {





  unsigned long VAR_8;
  int VAR_9;

  FUNC_0(VAR_7.num_threads != 1);

  FUNC_3(VAR_8);
  FUNC_1();
  VAR_9 = (*VAR_4)(VAR_5);
  FUNC_2(VAR_8);

  return VAR_9;
 }


 FUNC_6(&VAR_7, VAR_0);
 return FUNC_7(VAR_1, VAR_2, &VAR_7);
}
