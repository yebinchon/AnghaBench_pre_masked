
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int member_0; int PagefileUsage; } ;
typedef TYPE_1__ PROCESS_MEMORY_COUNTERS ;


 int FUNC_0 (TYPE_1__*) ;

uint64_t FUNC_1(void)
{
 PROCESS_MEMORY_COUNTERS VAR_0 = {sizeof(PROCESS_MEMORY_COUNTERS)};
 if (!FUNC_0(&VAR_0))
  return 0;
 return VAR_0.PagefileUsage;
}
