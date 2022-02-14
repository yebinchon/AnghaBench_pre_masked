
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_event {int waker; int wakee; scalar_t__ time; struct wake_event* next; int backtrace; } ;
struct timechart {struct per_pid* all_data; struct wake_event* wake_events; } ;
struct per_pidcomm {int Y; scalar_t__ start_time; scalar_t__ end_time; struct per_pidcomm* next; int comm; } ;
struct per_pid {int pid; struct per_pid* next; struct per_pidcomm* all; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (scalar_t__,int,char*,int,char*,int ) ;
 int FUNC_7 (scalar_t__,int,int,int ) ;

__attribute__((used)) static void FUNC_8(struct timechart *VAR_0)
{
 struct wake_event *VAR_1;
 struct per_pid *VAR_2;
 struct per_pidcomm *VAR_3;

 VAR_1 = VAR_0->wake_events;
 while (VAR_1) {
  int VAR_4 = 0, VAR_5 = 0;
  char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);


  VAR_2 = VAR_0->all_data;
  while (VAR_2) {
   if (VAR_2->pid == VAR_1->waker || VAR_2->pid == VAR_1->wakee) {
    VAR_3 = VAR_2->all;
    while (VAR_3) {
     if (VAR_3->Y && VAR_3->start_time <= VAR_1->time && VAR_3->end_time >= VAR_1->time) {
      if (VAR_2->pid == VAR_1->waker && !VAR_4) {
       VAR_4 = VAR_3->Y;
       VAR_6 = FUNC_4(VAR_3->comm);
      }
      if (VAR_2->pid == VAR_1->wakee && !VAR_5) {
       VAR_5 = VAR_3->Y;
       VAR_7 = FUNC_4(VAR_3->comm);
      }
     }
     VAR_3 = VAR_3->next;
    }
    VAR_3 = VAR_2->all;
    while (VAR_3) {
     if (VAR_2->pid == VAR_1->waker && !VAR_4) {
      VAR_4 = VAR_3->Y;
      VAR_6 = FUNC_4(VAR_3->comm);
     }
     if (VAR_2->pid == VAR_1->wakee && !VAR_5) {
      VAR_5 = VAR_3->Y;
      VAR_7 = FUNC_4(VAR_3->comm);
     }
     VAR_3 = VAR_3->next;
    }
   }
   VAR_2 = VAR_2->next;
  }

  if (!VAR_6) {
   VAR_6 = FUNC_2(40);
   FUNC_3(VAR_6, "[%i]", VAR_1->waker);
  }
  if (!VAR_7) {
   VAR_7 = FUNC_2(40);
   FUNC_3(VAR_7, "[%i]", VAR_1->wakee);
  }

  if (VAR_1->waker == -1)
   FUNC_5(VAR_1->time, VAR_5, VAR_1->backtrace);
  else if (VAR_4 && VAR_5 && FUNC_0(VAR_4 - VAR_5) == 1)
   FUNC_7(VAR_1->time, VAR_4, VAR_5, VAR_1->backtrace);
  else
   FUNC_6(VAR_1->time, VAR_4, VAR_6, VAR_5,
          VAR_7, VAR_1->backtrace);
  VAR_1 = VAR_1->next;

  FUNC_1(VAR_6);
  FUNC_1(VAR_7);
 }
}
