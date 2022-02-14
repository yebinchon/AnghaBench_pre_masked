
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_rw_semaphore {int rw_sem; int * read_count; int readers_block; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct percpu_rw_semaphore*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

int FUNC_9(struct percpu_rw_semaphore *VAR_0, int VAR_1)
{
 FUNC_7();





 if (FUNC_3(!FUNC_6(&VAR_0->readers_block)))
  return 1;





 FUNC_1(VAR_0);

 if (VAR_1)
  return 0;





 FUNC_5();




 FUNC_0(&VAR_0->rw_sem);
 FUNC_8(*VAR_0->read_count);
 FUNC_2(&VAR_0->rw_sem);

 FUNC_4();
 return 1;
}
