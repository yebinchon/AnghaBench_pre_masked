
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sigqueue {int flags; int list; } ;
typedef int spinlock_t ;
struct TYPE_4__ {TYPE_1__* sighand; } ;
struct TYPE_3__ {int siglock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sigqueue*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct sigqueue *VAR_2)
{
 unsigned long VAR_3;
 spinlock_t *VAR_4 = &VAR_1->sighand->siglock;

 FUNC_0(!(VAR_2->flags & VAR_0));





 FUNC_3(VAR_4, VAR_3);
 VAR_2->flags &= ~VAR_0;




 if (!FUNC_2(&VAR_2->list))
  VAR_2 = ((void*)0);
 FUNC_4(VAR_4, VAR_3);

 if (VAR_2)
  FUNC_1(VAR_2);
}
