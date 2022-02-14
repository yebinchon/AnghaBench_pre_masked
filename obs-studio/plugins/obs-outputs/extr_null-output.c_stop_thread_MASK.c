
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct null_output {int stop_thread_active; int output; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(void *VAR_0)
{
 struct null_output *VAR_1 = VAR_0;
 FUNC_0(VAR_1->output);
 VAR_1->stop_thread_active = 0;
 return ((void*)0);
}
