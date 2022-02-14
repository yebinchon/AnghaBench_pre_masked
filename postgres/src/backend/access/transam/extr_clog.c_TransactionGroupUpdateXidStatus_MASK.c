
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32 ;
typedef int XidStatus ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
struct TYPE_7__ {int xids; } ;
struct TYPE_10__ {int clogGroupMember; int clogGroupMemberPage; int sem; int clogGroupNext; int clogGroupMemberLsn; int clogGroupMemberXidStatus; TYPE_1__ subxids; int clogGroupMemberXid; scalar_t__ pgprocno; } ;
struct TYPE_9__ {int nxids; int overflowed; } ;
struct TYPE_8__ {TYPE_4__* allProcs; TYPE_3__* allPgXact; int clogGroupFirst; } ;
typedef TYPE_2__ PROC_HDR ;
typedef TYPE_3__ PGXACT ;
typedef TYPE_4__ PGPROC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int *,size_t*,size_t) ;
 size_t FUNC_8 (int *,size_t) ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (int *,size_t) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;

__attribute__((used)) static bool
FUNC_14(TransactionId VAR_6, XidStatus VAR_7,
        XLogRecPtr VAR_8, int VAR_9)
{
 volatile PROC_HDR *VAR_10 = VAR_4;
 PGPROC *VAR_11 = VAR_3;
 uint32 VAR_12;
 uint32 VAR_13;


 FUNC_0(FUNC_5(VAR_6));





 VAR_11->clogGroupMember = 1;
 VAR_11->clogGroupMemberXid = VAR_6;
 VAR_11->clogGroupMemberXidStatus = VAR_7;
 VAR_11->clogGroupMemberPage = VAR_9;
 VAR_11->clogGroupMemberLsn = VAR_8;

 VAR_12 = FUNC_9(&VAR_10->clogGroupFirst);

 while (1)
 {
  if (VAR_12 != VAR_1 &&
   VAR_4->allProcs[VAR_12].clogGroupMemberPage != VAR_11->clogGroupMemberPage)
  {
   VAR_11->clogGroupMember = 0;
   return 0;
  }

  FUNC_10(&VAR_11->clogGroupNext, VAR_12);

  if (FUNC_7(&VAR_10->clogGroupFirst,
             &VAR_12,
             (uint32) VAR_11->pgprocno))
   break;
 }







 if (VAR_12 != VAR_1)
 {
  int VAR_14 = 0;


  FUNC_13(VAR_5);
  for (;;)
  {

   FUNC_3(VAR_11->sem);
   if (!VAR_11->clogGroupMember)
    break;
   VAR_14++;
  }
  FUNC_12();

  FUNC_0(FUNC_9(&VAR_11->clogGroupNext) == VAR_1);


  while (VAR_14-- > 0)
   FUNC_4(VAR_11->sem);
  return 1;
 }


 FUNC_1(VAR_0, VAR_2);






 VAR_12 = FUNC_8(&VAR_10->clogGroupFirst,
          VAR_1);


 VAR_13 = VAR_12;


 while (VAR_12 != VAR_1)
 {
  PGPROC *VAR_15 = &VAR_4->allProcs[VAR_12];
  PGXACT *VAR_16 = &VAR_4->allPgXact[VAR_12];





  FUNC_0(!VAR_16->overflowed);

  FUNC_6(VAR_15->clogGroupMemberXid,
             VAR_16->nxids,
             VAR_15->subxids.xids,
             VAR_15->clogGroupMemberXidStatus,
             VAR_15->clogGroupMemberLsn,
             VAR_15->clogGroupMemberPage);


  VAR_12 = FUNC_9(&VAR_15->clogGroupNext);
 }


 FUNC_2(VAR_0);






 while (VAR_13 != VAR_1)
 {
  PGPROC *VAR_17 = &VAR_4->allProcs[VAR_13];

  VAR_13 = FUNC_9(&VAR_17->clogGroupNext);
  FUNC_10(&VAR_17->clogGroupNext, VAR_1);


  FUNC_11();

  VAR_17->clogGroupMember = 0;

  if (VAR_17 != VAR_3)
   FUNC_4(VAR_17->sem);
 }

 return 1;
}
