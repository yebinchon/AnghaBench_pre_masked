
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {struct per_pid* all_data; } ;
struct per_pid {scalar_t__ ppid; scalar_t__ pid; struct per_pid* next; } ;



__attribute__((used)) static void FUNC_0(struct timechart *VAR_0)
{
 struct per_pid *VAR_1, *VAR_2, *VAR_3, *VAR_4;


 VAR_1 = ((void*)0);

 while (VAR_0->all_data) {
  VAR_2 = VAR_0->all_data;
  VAR_0->all_data = VAR_2->next;
  VAR_2->next = ((void*)0);

  if (VAR_1 == ((void*)0)) {
   VAR_1 = VAR_2;
   VAR_2->next = ((void*)0);
   continue;
  }
  VAR_4 = ((void*)0);
  VAR_3 = VAR_1;
  while (VAR_3) {
   if (VAR_3->ppid > VAR_2->ppid ||
    (VAR_3->ppid == VAR_2->ppid && VAR_3->pid > VAR_2->pid)) {

    if (VAR_4) {
     VAR_2->next = VAR_4->next;
     VAR_4->next = VAR_2;
     VAR_3 = ((void*)0);
     continue;
    } else {
     VAR_2->next = VAR_1;
     VAR_1 = VAR_2;
     VAR_3 = ((void*)0);
     continue;
    }
   }

   VAR_4 = VAR_3;
   VAR_3 = VAR_3->next;
   if (!VAR_3)
    VAR_4->next = VAR_2;
  }
 }
 VAR_0->all_data = VAR_1;
}
