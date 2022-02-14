
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ff_timer {int abort; int cond; int mutexattr; int mutex; int timer_thread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ff_timer *VAR_0)
{
 void *VAR_1;

 FUNC_0(VAR_0 != ((void*)0));

 FUNC_5(&VAR_0->mutex);
 VAR_0->abort = 1;
 FUNC_2(&VAR_0->cond);
 FUNC_6(&VAR_0->mutex);

 FUNC_3(VAR_0->timer_thread, &VAR_1);

 FUNC_4(&VAR_0->mutex);
 FUNC_7(&VAR_0->mutexattr);
 FUNC_1(&VAR_0->cond);
}
