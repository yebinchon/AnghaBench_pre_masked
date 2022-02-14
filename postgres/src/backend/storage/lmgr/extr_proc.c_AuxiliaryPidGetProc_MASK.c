
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; } ;
typedef TYPE_1__ PGPROC ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

PGPROC *
FUNC_0(int VAR_2)
{
 PGPROC *VAR_3 = ((void*)0);
 int VAR_4;

 if (VAR_2 == 0)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  PGPROC *VAR_5 = &VAR_0[VAR_4];

  if (VAR_5->pid == VAR_2)
  {
   VAR_3 = VAR_5;
   break;
  }
 }
 return VAR_3;
}
