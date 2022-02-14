
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sighand_struct {int siglock; TYPE_2__* action; } ;
struct TYPE_3__ {scalar_t__ sa_handler; int sa_flags; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct sighand_struct *VAR_3)
{
 int VAR_4;
 FUNC_0(&VAR_3->siglock);
 VAR_4 = (VAR_3->action[VAR_1-1].sa.sa_handler == VAR_2) ||
       (VAR_3->action[VAR_1-1].sa.sa_flags & VAR_0);
 FUNC_1(&VAR_3->siglock);
 return VAR_4;
}
