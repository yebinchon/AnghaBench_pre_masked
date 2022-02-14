
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * proc; } ;
struct TYPE_4__ {int lastBackend; TYPE_2__* procState; } ;
typedef TYPE_1__ SISeg ;
typedef TYPE_2__ ProcState ;
typedef int PGPROC ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

PGPROC *
FUNC_2(int VAR_3)
{
 PGPROC *VAR_4 = ((void*)0);
 SISeg *VAR_5 = VAR_2;


 FUNC_0(VAR_1, VAR_0);

 if (VAR_3 > 0 && VAR_3 <= VAR_5->lastBackend)
 {
  ProcState *VAR_6 = &VAR_5->procState[VAR_3 - 1];

  VAR_4 = VAR_6->proc;
 }

 FUNC_1(VAR_1);

 return VAR_4;
}
