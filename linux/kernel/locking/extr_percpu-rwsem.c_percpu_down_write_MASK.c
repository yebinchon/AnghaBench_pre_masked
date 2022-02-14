
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_rw_semaphore {int writer; int readers_block; int rw_sem; int rss; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct percpu_rw_semaphore*) ;
 int FUNC_5 () ;

void FUNC_6(struct percpu_rw_semaphore *VAR_0)
{

 FUNC_2(&VAR_0->rss);

 FUNC_1(&VAR_0->rw_sem);





 FUNC_0(VAR_0->readers_block, 1);

 FUNC_5();
 FUNC_3(&VAR_0->writer, FUNC_4(VAR_0));
}
