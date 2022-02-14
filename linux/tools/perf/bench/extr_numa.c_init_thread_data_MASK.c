
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_data {int bind_cpumask; int bind_node; } ;
typedef int ssize_t ;
struct TYPE_3__ {int nr_tasks; int nr_cpus; } ;
struct TYPE_4__ {TYPE_1__ p; struct thread_data* threads; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct thread_data* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 ssize_t VAR_2 = sizeof(*VAR_1->threads)*VAR_1->p.nr_tasks;
 int VAR_3;

 VAR_1->threads = FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1->p.nr_tasks; VAR_3++) {
  struct thread_data *VAR_4 = VAR_1->threads + VAR_3;
  int VAR_5;


  VAR_4->bind_node = VAR_0;


  FUNC_1(&VAR_4->bind_cpumask);
  for (VAR_5 = 0; VAR_5 < VAR_1->p.nr_cpus; VAR_5++)
   FUNC_0(VAR_5, &VAR_4->bind_cpumask);
 }
}
