
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ pgsocket ;
struct TYPE_12__ {size_t nevents; size_t nevents_space; int exit_on_postmaster_death; int latch_pos; TYPE_3__* latch; TYPE_2__* events; } ;
typedef TYPE_1__ WaitEventSet ;
struct TYPE_13__ {int pos; int events; int reset; scalar_t__ fd; void* user_data; } ;
typedef TYPE_2__ WaitEvent ;
struct TYPE_14__ {scalar_t__ owner_pid; } ;
typedef TYPE_3__ Latch ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__* VAR_9 ;
 scalar_t__ VAR_10 ;

int
FUNC_5(WaitEventSet *VAR_11, uint32 VAR_12, pgsocket VAR_13, Latch *VAR_14,
      void *VAR_15)
{
 WaitEvent *VAR_16;


 FUNC_0(VAR_11->nevents < VAR_11->nevents_space);

 if (VAR_12 == VAR_5)
 {
  VAR_12 = VAR_7;
  VAR_11->exit_on_postmaster_death = 1;
 }

 if (VAR_14)
 {
  if (VAR_14->owner_pid != VAR_2)
   FUNC_4(VAR_1, "cannot wait on a latch owned by another process");
  if (VAR_11->latch)
   FUNC_4(VAR_1, "cannot wait on more than one latch");
  if ((VAR_12 & VAR_6) != VAR_6)
   FUNC_4(VAR_1, "latch events only support being set");
 }
 else
 {
  if (VAR_12 & VAR_6)
   FUNC_4(VAR_1, "cannot wait on latch without a specified latch");
 }


 if (VAR_13 == VAR_3 && (VAR_12 & VAR_8))
  FUNC_4(VAR_1, "cannot wait on socket event without a socket");

 VAR_16 = &VAR_11->events[VAR_11->nevents];
 VAR_16->pos = VAR_11->nevents++;
 VAR_16->fd = VAR_13;
 VAR_16->events = VAR_12;
 VAR_16->user_data = VAR_15;




 if (VAR_12 == VAR_6)
 {
  VAR_11->latch = VAR_14;
  VAR_11->latch_pos = VAR_16->pos;

  VAR_16->fd = VAR_10;

 }
 else if (VAR_12 == VAR_7)
 {

  VAR_16->fd = VAR_9[VAR_4];

 }
 return VAR_16->pos;
}
