
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vacuumFlags; } ;
struct TYPE_5__ {scalar_t__ persistency; int xmin; } ;
struct TYPE_6__ {scalar_t__ active_pid; int active_cv; int mutex; TYPE_1__ data; int effective_xmin; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;

void
FUNC_9(void)
{
 ReplicationSlot *VAR_8 = VAR_3;

 FUNC_0(VAR_8 != ((void*)0) && VAR_8->active_pid != 0);

 if (VAR_8->data.persistency == VAR_6)
 {





  FUNC_4();
 }







 if (!FUNC_8(VAR_8->data.xmin) &&
  FUNC_8(VAR_8->effective_xmin))
 {
  FUNC_6(&VAR_8->mutex);
  VAR_8->effective_xmin = VAR_0;
  FUNC_7(&VAR_8->mutex);
  FUNC_5(0);
 }

 if (VAR_8->data.persistency == VAR_7)
 {




  FUNC_6(&VAR_8->mutex);
  VAR_8->active_pid = 0;
  FUNC_7(&VAR_8->mutex);
  FUNC_1(&VAR_8->active_cv);
 }

 VAR_3 = ((void*)0);


 FUNC_2(VAR_5, VAR_1);
 VAR_2->vacuumFlags &= ~VAR_4;
 FUNC_3(VAR_5);
}
