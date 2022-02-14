
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {TYPE_1__* entry; } ;
struct TYPE_3__ {int expected_time_between_calls; } ;


 TYPE_2__* FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(const char *VAR_1,
      uint64_t VAR_2)
{
 if (!FUNC_1())
  return;

 FUNC_0(VAR_1)->entry->expected_time_between_calls =
  (VAR_2 + 500) / 1000;
 FUNC_2(&VAR_0);
}
