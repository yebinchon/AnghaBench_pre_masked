
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int relOid; int dbOid; int xid; } ;
typedef TYPE_3__ xl_standby_lock ;
typedef int TransactionId ;
struct TYPE_18__ {TYPE_5__* allPgXact; } ;
struct TYPE_12__ {scalar_t__ locktag_type; int locktag_field2; int locktag_field1; } ;
struct TYPE_17__ {TYPE_2__ tag; } ;
struct TYPE_16__ {size_t pgprocno; } ;
struct TYPE_15__ {int xid; } ;
struct TYPE_11__ {TYPE_7__* myLock; TYPE_6__* myProc; } ;
struct TYPE_14__ {int holdMask; TYPE_1__ tag; } ;
typedef TYPE_4__ PROCLOCK ;
typedef TYPE_5__ PGXACT ;
typedef TYPE_6__ PGPROC ;
typedef TYPE_7__ LOCK ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__* VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 TYPE_3__* FUNC_9 (int) ;

xl_standby_lock *
FUNC_10(int *VAR_6)
{
 xl_standby_lock *VAR_7;
 PROCLOCK *VAR_8;
 HASH_SEQ_STATUS VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;






 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  FUNC_2(FUNC_4(VAR_10), VAR_2);


 VAR_12 = FUNC_6(VAR_3);





 VAR_7 = FUNC_9(VAR_12 * sizeof(xl_standby_lock));


 FUNC_7(&VAR_9, VAR_3);
 VAR_11 = 0;
 while ((VAR_8 = (PROCLOCK *) FUNC_8(&VAR_9)))
 {

  if ((VAR_8->holdMask & FUNC_1(VAR_0)) &&
   VAR_8->tag.myLock->tag.locktag_type == VAR_1)
  {
   PGPROC *VAR_13 = VAR_8->tag.myProc;
   PGXACT *VAR_14 = &VAR_5->allPgXact[VAR_13->pgprocno];
   LOCK *VAR_15 = VAR_8->tag.myLock;
   TransactionId VAR_16 = VAR_14->xid;







   if (!FUNC_5(VAR_16))
    continue;

   VAR_7[VAR_11].xid = VAR_16;
   VAR_7[VAR_11].dbOid = VAR_15->tag.locktag_field1;
   VAR_7[VAR_11].relOid = VAR_15->tag.locktag_field2;

   VAR_11++;
  }
 }

 FUNC_0(VAR_11 <= VAR_12);
 for (VAR_10 = VAR_4; --VAR_10 >= 0;)
  FUNC_3(FUNC_4(VAR_10));

 *VAR_6 = VAR_11;
 return VAR_7;
}
