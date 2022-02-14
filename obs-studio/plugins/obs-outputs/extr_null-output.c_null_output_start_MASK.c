
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct null_output {int output; int stop_thread; scalar_t__ stop_thread_active; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(void *VAR_0)
{
 struct null_output *VAR_1 = VAR_0;

 if (!FUNC_1(VAR_1->output, 0))
  return 0;
 if (!FUNC_2(VAR_1->output, 0))
  return 0;

 if (VAR_1->stop_thread_active)
  FUNC_3(VAR_1->stop_thread, ((void*)0));

 FUNC_0(VAR_1->output, 0);
 return 1;
}
