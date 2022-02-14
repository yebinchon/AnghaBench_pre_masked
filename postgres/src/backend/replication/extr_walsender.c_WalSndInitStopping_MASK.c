
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_3__ {scalar_t__ pid; int mutex; } ;
typedef TYPE_1__ WalSnd ;
struct TYPE_4__ {TYPE_1__* walsnds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

void
FUNC_3(void)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  WalSnd *VAR_5 = &VAR_2->walsnds[VAR_4];
  pid_t VAR_6;

  FUNC_1(&VAR_5->mutex);
  VAR_6 = VAR_5->pid;
  FUNC_2(&VAR_5->mutex);

  if (VAR_6 == 0)
   continue;

  FUNC_0(VAR_6, VAR_1, VAR_0);
 }
}
