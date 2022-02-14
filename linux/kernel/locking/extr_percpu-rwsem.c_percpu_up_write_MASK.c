
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_rw_semaphore {int rss; int rw_sem; int readers_block; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct percpu_rw_semaphore *VAR_0)
{
 FUNC_1(&VAR_0->readers_block, 0);




 FUNC_2(&VAR_0->rw_sem);






 FUNC_0(&VAR_0->rss);
}
