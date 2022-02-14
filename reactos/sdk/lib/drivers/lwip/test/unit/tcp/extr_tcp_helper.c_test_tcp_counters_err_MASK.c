
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tcp_counters {int last_err; int err_calls; } ;
typedef int err_t ;


 int FUNC_0 (int ) ;

void
FUNC_1(void* VAR_0, err_t VAR_1)
{
  struct test_tcp_counters* VAR_2 = VAR_0;
  FUNC_0(VAR_0 != ((void*)0));
  VAR_2->err_calls++;
  VAR_2->last_err = VAR_1;
}
