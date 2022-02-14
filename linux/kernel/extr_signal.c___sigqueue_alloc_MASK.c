
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_struct {int sigpending; } ;
struct task_struct {int dummy; } ;
struct sigqueue {struct user_struct* user; scalar_t__ flags; int list; } ;
typedef int gfp_t ;
struct TYPE_2__ {int user; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct user_struct*) ;
 struct user_struct* FUNC_6 (int ) ;
 struct sigqueue* FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_1 ;
 scalar_t__ FUNC_11 (struct task_struct*,int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static struct sigqueue *
FUNC_13(int VAR_2, struct task_struct *VAR_3, gfp_t VAR_4, int VAR_5)
{
 struct sigqueue *VAR_6 = ((void*)0);
 struct user_struct *VAR_7;





 FUNC_9();
 VAR_7 = FUNC_6(FUNC_1(VAR_3)->user);
 FUNC_3(&VAR_7->sigpending);
 FUNC_10();

 if (VAR_5 ||
     FUNC_4(&VAR_7->sigpending) <=
   FUNC_11(VAR_3, VAR_0)) {
  VAR_6 = FUNC_7(VAR_1, VAR_4);
 } else {
  FUNC_8(VAR_2);
 }

 if (FUNC_12(VAR_6 == ((void*)0))) {
  FUNC_2(&VAR_7->sigpending);
  FUNC_5(VAR_7);
 } else {
  FUNC_0(&VAR_6->list);
  VAR_6->flags = 0;
  VAR_6->user = VAR_7;
 }

 return VAR_6;
}
