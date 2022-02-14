
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_sync_test {int stop_signal; int thread; scalar_t__ initialized; } ;


 int FUNC_0 (struct async_sync_test*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct async_sync_test *VAR_1 = VAR_0;

 if (VAR_1->initialized) {
  FUNC_2(VAR_1->stop_signal);
  FUNC_3(VAR_1->thread, ((void*)0));
 }

 FUNC_1(VAR_1->stop_signal);
 FUNC_0(VAR_1);
}
