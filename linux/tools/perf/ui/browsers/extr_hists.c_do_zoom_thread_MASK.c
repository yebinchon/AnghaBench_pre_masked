
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {scalar_t__ comm_set; int tid; } ;
struct popup_action {struct thread* thread; } ;
struct hist_browser {TYPE_1__* hists; int pstack; } ;
struct TYPE_3__ {scalar_t__ thread_filter; } ;


 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_0 (struct hist_browser*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct thread*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 char* FUNC_6 (struct thread*) ;
 scalar_t__ FUNC_7 (struct thread*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(struct hist_browser *VAR_2, struct popup_action *VAR_3)
{
 struct thread *VAR_4 = VAR_3->thread;

 if ((!FUNC_2(VAR_2->hists, VAR_4) &&
      !FUNC_2(VAR_2->hists, VAR_1)) || VAR_4 == ((void*)0))
  return 0;

 if (VAR_2->hists->thread_filter) {
  FUNC_5(VAR_2->pstack, &VAR_2->hists->thread_filter);
  FUNC_3(VAR_0, 0);
  FUNC_8(VAR_2->hists->thread_filter);
  FUNC_10();
 } else {
  if (FUNC_2(VAR_2->hists, VAR_4)) {
   FUNC_9("To zoom out press ESC or ENTER + \"Zoom out of %s(%d) thread\"",
        VAR_4->comm_set ? FUNC_6(VAR_4) : "",
        VAR_4->tid);
  } else {
   FUNC_9("To zoom out press ESC or ENTER + \"Zoom out of %s thread\"",
        VAR_4->comm_set ? FUNC_6(VAR_4) : "");
  }

  VAR_2->hists->thread_filter = FUNC_7(VAR_4);
  FUNC_3(VAR_0, 0);
  FUNC_4(VAR_2->pstack, &VAR_2->hists->thread_filter);
 }

 FUNC_1(VAR_2->hists);
 FUNC_0(VAR_2);
 return 0;
}
