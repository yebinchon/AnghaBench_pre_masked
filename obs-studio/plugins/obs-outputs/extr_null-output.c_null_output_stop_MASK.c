
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct null_output {int stop_thread_active; int stop_thread; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *,int ,void*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1, uint64_t VAR_2)
{
 struct null_output *VAR_3 = VAR_1;
 FUNC_0(VAR_2);

 VAR_3->stop_thread_active = FUNC_1(&VAR_3->stop_thread,
           ((void*)0), VAR_0,
           VAR_1) == 0;
}
