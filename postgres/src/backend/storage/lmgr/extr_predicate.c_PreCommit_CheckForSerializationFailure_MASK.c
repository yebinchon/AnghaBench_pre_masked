
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ LastSxactCommitSeqNo; } ;
struct TYPE_11__ {int flags; scalar_t__ prepareSeqNo; int inConflicts; } ;
struct TYPE_10__ {int inLink; TYPE_2__* sxactOut; } ;
typedef TYPE_1__* RWConflict ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_7__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int VAR_10 ;
 int FUNC_15 (int ,int ) ;

void
FUNC_16(void)
{
 RWConflict VAR_11;

 if (VAR_4 == VAR_2)
  return;

 FUNC_0(FUNC_1());

 FUNC_2(VAR_9, VAR_3);


 if (FUNC_6(VAR_4))
 {
  FUNC_0(!FUNC_7(VAR_4));
  FUNC_3(VAR_9);
  FUNC_10(VAR_1,
    (FUNC_11(VAR_0),
     FUNC_14("could not serialize access due to read/write dependencies among transactions"),
     FUNC_12("Reason code: Canceled on identification as a pivot, during commit attempt."),
     FUNC_13("The transaction might succeed if retried.")));
 }

 VAR_11 = (RWConflict)
  FUNC_4(&VAR_4->inConflicts,
      &VAR_4->inConflicts,
      FUNC_15(VAR_6, VAR_10));
 while (VAR_11)
 {
  if (!FUNC_5(VAR_11->sxactOut)
   && !FUNC_6(VAR_11->sxactOut))
  {
   RWConflict VAR_12;

   VAR_12 = (RWConflict)
    FUNC_4(&VAR_11->sxactOut->inConflicts,
        &VAR_11->sxactOut->inConflicts,
        FUNC_15(VAR_6, VAR_10));
   while (VAR_12)
   {
    if (VAR_12->sxactOut == VAR_4
     || (!FUNC_5(VAR_12->sxactOut)
      && !FUNC_9(VAR_12->sxactOut)
      && !FUNC_6(VAR_12->sxactOut)))
    {






     if (FUNC_8(VAR_11->sxactOut))
     {
      FUNC_3(VAR_9);
      FUNC_10(VAR_1,
        (FUNC_11(VAR_0),
         FUNC_14("could not serialize access due to read/write dependencies among transactions"),
         FUNC_12("Reason code: Canceled on commit attempt with conflict in from prepared pivot."),
         FUNC_13("The transaction might succeed if retried.")));
     }
     VAR_11->sxactOut->flags |= VAR_7;
     break;
    }
    VAR_12 = (RWConflict)
     FUNC_4(&VAR_11->sxactOut->inConflicts,
         &VAR_12->inLink,
         FUNC_15(VAR_6, VAR_10));
   }
  }

  VAR_11 = (RWConflict)
   FUNC_4(&VAR_4->inConflicts,
       &VAR_11->inLink,
       FUNC_15(VAR_6, VAR_10));
 }

 VAR_4->prepareSeqNo = ++(VAR_5->LastSxactCommitSeqNo);
 VAR_4->flags |= VAR_8;

 FUNC_3(VAR_9);
}
