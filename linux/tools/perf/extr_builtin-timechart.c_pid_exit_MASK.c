
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct timechart {int dummy; } ;
struct per_pid {TYPE_1__* current; void* end_time; } ;
struct TYPE_2__ {void* end_time; } ;


 struct per_pid* FUNC_0 (struct timechart*,int) ;

__attribute__((used)) static void FUNC_1(struct timechart *VAR_0, int VAR_1, u64 VAR_2)
{
 struct per_pid *VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_3->end_time = VAR_2;
 if (VAR_3->current)
  VAR_3->current->end_time = VAR_2;
}
