
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hists {int * thread_filter; } ;
struct hist_entry {int filtered; int * thread; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct hists *VAR_1,
       struct hist_entry *VAR_2)
{
 if (VAR_1->thread_filter != ((void*)0) &&
     VAR_2->thread != VAR_1->thread_filter) {
  VAR_2->filtered |= (1 << VAR_0);
  return 1;
 }

 return 0;
}
