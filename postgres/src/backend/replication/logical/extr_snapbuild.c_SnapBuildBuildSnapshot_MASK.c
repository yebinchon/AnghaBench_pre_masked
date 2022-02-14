
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_7__ {int xcnt; int xip; } ;
struct TYPE_9__ {scalar_t__ state; TYPE_1__ committed; int xmax; int xmin; int context; } ;
struct TYPE_8__ {int xcnt; int suboverflowed; int takenDuringRecovery; int copied; scalar_t__ regd_count; scalar_t__ active_count; int curcid; int * subxip; scalar_t__ subxcnt; int * xip; int xmax; int xmin; int snapshot_type; } ;
typedef int SnapshotData ;
typedef TYPE_2__* Snapshot ;
typedef TYPE_3__ SnapBuild ;
typedef int Size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static Snapshot
FUNC_5(SnapBuild *VAR_4)
{
 Snapshot VAR_5;
 Size VAR_6;

 FUNC_0(VAR_4->state >= VAR_1);

 VAR_6 = sizeof(SnapshotData)
  + sizeof(TransactionId) * VAR_4->committed.xcnt
  + sizeof(TransactionId) * 1 ;

 VAR_5 = FUNC_1(VAR_4->context, VAR_6);

 VAR_5->snapshot_type = VAR_2;
 FUNC_0(FUNC_2(VAR_4->xmin));
 FUNC_0(FUNC_2(VAR_4->xmax));

 VAR_5->xmin = VAR_4->xmin;
 VAR_5->xmax = VAR_4->xmax;


 VAR_5->xip =
  (TransactionId *) ((char *) VAR_5 + sizeof(SnapshotData));
 VAR_5->xcnt = VAR_4->committed.xcnt;
 FUNC_3(VAR_5->xip,
     VAR_4->committed.xip,
     VAR_4->committed.xcnt * sizeof(TransactionId));


 FUNC_4(VAR_5->xip, VAR_5->xcnt, sizeof(TransactionId), VAR_3);






 VAR_5->subxcnt = 0;
 VAR_5->subxip = ((void*)0);

 VAR_5->suboverflowed = 0;
 VAR_5->takenDuringRecovery = 0;
 VAR_5->copied = 0;
 VAR_5->curcid = VAR_0;
 VAR_5->active_count = 0;
 VAR_5->regd_count = 0;

 return VAR_5;
}
