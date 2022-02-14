
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* replication_slots; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {int active_pid; int active_cv; int mutex; TYPE_1__ data; scalar_t__ in_use; } ;
typedef TYPE_2__ ReplicationSlot ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char const*,...) ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (char const*,int ) ;

void
FUNC_14(const char *VAR_11, bool VAR_12)
{
 ReplicationSlot *VAR_13;
 int VAR_14;
 int VAR_15;

retry:
 FUNC_0(VAR_6 == ((void*)0));






 VAR_14 = 0;
 VAR_13 = ((void*)0);
 FUNC_5(VAR_7, VAR_4);
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
 {
  ReplicationSlot *VAR_16 = &VAR_8->replication_slots[VAR_15];

  if (VAR_16->in_use && FUNC_13(VAR_11, FUNC_7(VAR_16->data.name)) == 0)
  {




   if (VAR_3)
   {





    FUNC_3(&VAR_16->active_cv);

    FUNC_8(&VAR_16->mutex);

    VAR_14 = VAR_16->active_pid;
    if (VAR_14 == 0)
     VAR_14 = VAR_16->active_pid = VAR_5;

    FUNC_9(&VAR_16->mutex);
   }
   else
    VAR_14 = VAR_5;
   VAR_13 = VAR_16;

   break;
  }
 }
 FUNC_6(VAR_7);


 if (VAR_13 == ((void*)0))
  FUNC_10(VAR_2,
    (FUNC_11(VAR_1),
     FUNC_12("replication slot \"%s\" does not exist", VAR_11)));





 if (VAR_14 != VAR_5)
 {
  if (VAR_12)
   FUNC_10(VAR_2,
     (FUNC_11(VAR_0),
      FUNC_12("replication slot \"%s\" is active for PID %d",
       VAR_11, VAR_14)));


  FUNC_4(&VAR_13->active_cv,
          VAR_9);
  FUNC_2();
  goto retry;
 }
 else
  FUNC_2();


 FUNC_1(&VAR_13->active_cv);


 VAR_6 = VAR_13;
}
