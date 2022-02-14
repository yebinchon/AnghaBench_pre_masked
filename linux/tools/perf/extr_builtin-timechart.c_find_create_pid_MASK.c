
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {struct per_pid* all_data; } ;
struct per_pid {int pid; struct per_pid* next; } ;


 int FUNC_0 (int ) ;
 struct per_pid* FUNC_1 (int) ;

__attribute__((used)) static struct per_pid *FUNC_2(struct timechart *VAR_0, int VAR_1)
{
 struct per_pid *VAR_2 = VAR_0->all_data;

 while (VAR_2) {
  if (VAR_2->pid == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }
 VAR_2 = FUNC_1(sizeof(*VAR_2));
 FUNC_0(VAR_2 != ((void*)0));
 VAR_2->pid = VAR_1;
 VAR_2->next = VAR_0->all_data;
 VAR_0->all_data = VAR_2;
 return VAR_2;
}
