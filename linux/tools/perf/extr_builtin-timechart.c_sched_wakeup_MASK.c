
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct wake_event {int waker; char const* backtrace; int wakee; struct wake_event* next; void* time; } ;
struct timechart {struct wake_event* wake_events; } ;
struct per_pid {TYPE_1__* current; int pid; } ;
struct TYPE_2__ {scalar_t__ state; void* state_since; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 struct per_pid* FUNC_0 (struct timechart*,int) ;
 int FUNC_1 (struct timechart*,int ,scalar_t__,int,void*,void*,int *) ;
 struct wake_event* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct timechart *VAR_5, int VAR_6, u64 VAR_7,
    int VAR_8, int VAR_9, u8 VAR_10, const char *VAR_11)
{
 struct per_pid *VAR_12;
 struct wake_event *VAR_13 = FUNC_2(sizeof(*VAR_13));

 if (!VAR_13)
  return;

 VAR_13->time = VAR_7;
 VAR_13->waker = VAR_8;
 VAR_13->backtrace = VAR_11;

 if ((VAR_10 & VAR_0) || (VAR_10 & VAR_1))
  VAR_13->waker = -1;

 VAR_13->wakee = VAR_9;
 VAR_13->next = VAR_5->wake_events;
 VAR_5->wake_events = VAR_13;
 VAR_12 = FUNC_0(VAR_5, VAR_13->wakee);

 if (VAR_12 && VAR_12->current && VAR_12->current->state == VAR_3) {
  VAR_12->current->state_since = VAR_7;
  VAR_12->current->state = VAR_4;
 }
 if (VAR_12 && VAR_12->current && VAR_12->current->state == VAR_2) {
  FUNC_1(VAR_5, VAR_12->pid, VAR_12->current->state, VAR_6,
          VAR_12->current->state_since, VAR_7, ((void*)0));
  VAR_12->current->state_since = VAR_7;
  VAR_12->current->state = VAR_4;
 }
}
