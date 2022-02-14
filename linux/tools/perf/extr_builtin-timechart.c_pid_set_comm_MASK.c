
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {int dummy; } ;
struct per_pidcomm {struct per_pidcomm* next; void* comm; } ;
struct per_pid {struct per_pidcomm* all; struct per_pidcomm* current; } ;


 int FUNC_0 (int ) ;
 struct per_pid* FUNC_1 (struct timechart*,int) ;
 scalar_t__ FUNC_2 (void*,char*) ;
 void* FUNC_3 (char*) ;
 struct per_pidcomm* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct timechart *VAR_0, int VAR_1, char *VAR_2)
{
 struct per_pid *VAR_3;
 struct per_pidcomm *VAR_4;
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_4 = VAR_3->all;
 while (VAR_4) {
  if (VAR_4->comm && FUNC_2(VAR_4->comm, VAR_2) == 0) {
   VAR_3->current = VAR_4;
   return;
  }
  if (!VAR_4->comm) {
   VAR_4->comm = FUNC_3(VAR_2);
   VAR_3->current = VAR_4;
   return;
  }
  VAR_4 = VAR_4->next;
 }
 VAR_4 = FUNC_4(sizeof(*VAR_4));
 FUNC_0(VAR_4 != ((void*)0));
 VAR_4->comm = FUNC_3(VAR_2);
 VAR_3->current = VAR_4;
 VAR_4->next = VAR_3->all;
 VAR_3->all = VAR_4;
}
