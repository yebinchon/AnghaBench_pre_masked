
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {scalar_t__ comm_set; int tid; } ;
struct popup_action {int fn; struct thread* thread; } ;
struct hist_browser {TYPE_1__* hists; } ;
struct TYPE_2__ {scalar_t__ thread_filter; } ;


 int FUNC_0 (char**,char*,char*,char*,...) ;
 struct thread* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct thread*) ;
 char* FUNC_2 (struct thread*) ;

__attribute__((used)) static int
FUNC_3(struct hist_browser *VAR_2, struct popup_action *VAR_3,
        char **VAR_4, struct thread *VAR_5)
{
 int VAR_6;

 if ((!FUNC_1(VAR_2->hists, VAR_5) &&
      !FUNC_1(VAR_2->hists, VAR_0)) || VAR_5 == ((void*)0))
  return 0;

 if (FUNC_1(VAR_2->hists, VAR_5)) {
  VAR_6 = FUNC_0(VAR_4, "Zoom %s %s(%d) thread",
          VAR_2->hists->thread_filter ? "out of" : "into",
          VAR_5->comm_set ? FUNC_2(VAR_5) : "",
          VAR_5->tid);
 } else {
  VAR_6 = FUNC_0(VAR_4, "Zoom %s %s thread",
          VAR_2->hists->thread_filter ? "out of" : "into",
          VAR_5->comm_set ? FUNC_2(VAR_5) : "");
 }
 if (VAR_6 < 0)
  return 0;

 VAR_3->thread = VAR_5;
 VAR_3->fn = VAR_1;
 return 1;
}
