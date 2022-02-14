
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct timechart {int dummy; } ;
struct per_pid {int ppid; TYPE_1__* current; void* start_time; } ;
struct TYPE_2__ {void* state_since; void* start_time; scalar_t__ comm; } ;


 struct per_pid* FUNC_0 (struct timechart*,int) ;
 int FUNC_1 (struct timechart*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct timechart *VAR_0, int VAR_1, int VAR_2, u64 VAR_3)
{
 struct per_pid *VAR_4, *VAR_5;
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_5 = FUNC_0(VAR_0, VAR_2);
 VAR_4->ppid = VAR_2;
 if (VAR_5->current && VAR_5->current->comm && !VAR_4->current)
  FUNC_1(VAR_0, VAR_1, VAR_5->current->comm);

 VAR_4->start_time = VAR_3;
 if (VAR_4->current && !VAR_4->current->start_time) {
  VAR_4->current->start_time = VAR_3;
  VAR_4->current->state_since = VAR_3;
 }
}
