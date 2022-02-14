
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_rw_semaphore {int * read_count; int rss; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct percpu_rw_semaphore *VAR_0)
{




 if (!VAR_0->read_count)
  return;

 FUNC_1(&VAR_0->rss);
 FUNC_0(VAR_0->read_count);
 VAR_0->read_count = ((void*)0);
}
