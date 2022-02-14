
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timechart {scalar_t__ last_time; struct per_pid* all_data; } ;
struct per_pidcomm {int display; scalar_t__ total_bytes; scalar_t__ end_time; struct per_pidcomm* next; } ;
struct per_pid {scalar_t__ end_time; struct per_pid* next; struct per_pidcomm* all; } ;



__attribute__((used)) static int FUNC_0(struct timechart *VAR_0, u64 VAR_1)
{
 struct per_pid *VAR_2;
 struct per_pidcomm *VAR_3;
 int VAR_4 = 0;

 VAR_2 = VAR_0->all_data;
 while (VAR_2) {

  if (VAR_2->end_time == 0)
   VAR_2->end_time = VAR_0->last_time;

  VAR_3 = VAR_2->all;

  while (VAR_3) {
   VAR_3->display = 0;

   if (VAR_3->total_bytes >= VAR_1) {
    VAR_3->display = 1;
    VAR_4++;
   }

   if (VAR_3->end_time == 0)
    VAR_3->end_time = VAR_0->last_time;

   VAR_3 = VAR_3->next;
  }
  VAR_2 = VAR_2->next;
 }
 return VAR_4;
}
