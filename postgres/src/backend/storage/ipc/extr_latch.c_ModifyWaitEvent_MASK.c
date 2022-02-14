
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_10__ {int nevents; int * latch; TYPE_2__* events; } ;
typedef TYPE_1__ WaitEventSet ;
struct TYPE_11__ {int events; } ;
typedef TYPE_2__ WaitEvent ;
typedef int Latch ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(WaitEventSet *VAR_4, int VAR_5, uint32 VAR_6, Latch *VAR_7)
{
 WaitEvent *VAR_8;

 FUNC_0(VAR_5 < VAR_4->nevents);

 VAR_8 = &VAR_4->events[VAR_5];







 if (VAR_6 == VAR_8->events &&
  (!(VAR_8->events & VAR_2) || VAR_4->latch == VAR_7))
  return;

 if (VAR_8->events & VAR_2 &&
  VAR_6 != VAR_8->events)
 {

  FUNC_4(VAR_1, "cannot modify latch event");
 }

 if (VAR_8->events & VAR_3)
 {
  FUNC_4(VAR_1, "cannot modify postmaster death event");
 }


 VAR_8->events = VAR_6;

 if (VAR_6 == VAR_2)
 {
  VAR_4->latch = VAR_7;
 }
}
