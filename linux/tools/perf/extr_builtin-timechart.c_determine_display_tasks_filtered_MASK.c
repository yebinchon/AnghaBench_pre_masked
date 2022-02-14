
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {int first_time; scalar_t__ last_time; struct per_pid* all_data; } ;
struct per_pidcomm {int display; int start_time; scalar_t__ end_time; struct per_pidcomm* next; } ;
struct per_pid {int display; int start_time; scalar_t__ end_time; struct per_pid* next; struct per_pidcomm* all; } ;


 scalar_t__ FUNC_0 (struct per_pid*,struct per_pidcomm*) ;

__attribute__((used)) static int FUNC_1(struct timechart *VAR_0)
{
 struct per_pid *VAR_1;
 struct per_pidcomm *VAR_2;
 int VAR_3 = 0;

 VAR_1 = VAR_0->all_data;
 while (VAR_1) {
  VAR_1->display = 0;
  if (VAR_1->start_time == 1)
   VAR_1->start_time = VAR_0->first_time;


  if (VAR_1->end_time == 0)
   VAR_1->end_time = VAR_0->last_time;

  VAR_2 = VAR_1->all;

  while (VAR_2) {
   VAR_2->display = 0;

   if (VAR_2->start_time == 1)
    VAR_2->start_time = VAR_0->first_time;

   if (FUNC_0(VAR_1, VAR_2)) {
    VAR_2->display = 1;
    VAR_1->display = 1;
    VAR_3++;
   }

   if (VAR_2->end_time == 0)
    VAR_2->end_time = VAR_0->last_time;

   VAR_2 = VAR_2->next;
  }
  VAR_1 = VAR_1->next;
 }
 return VAR_3;
}
