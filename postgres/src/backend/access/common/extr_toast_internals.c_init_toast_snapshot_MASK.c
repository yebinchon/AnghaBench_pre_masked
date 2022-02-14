
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int whenTaken; int lsn; } ;
typedef TYPE_1__* Snapshot ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__,int ,int ) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(Snapshot VAR_1)
{
 Snapshot VAR_2 = FUNC_0();

 if (VAR_2 == ((void*)0))
  FUNC_2(VAR_0, "no known snapshots");

 FUNC_1(*VAR_1, VAR_2->lsn, VAR_2->whenTaken);
}
