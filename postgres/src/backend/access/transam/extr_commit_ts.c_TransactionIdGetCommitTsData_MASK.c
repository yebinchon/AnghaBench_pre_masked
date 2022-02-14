
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int TransactionId ;
typedef int TimestampTz ;
struct TYPE_14__ {int newestCommitTsXid; int oldestCommitTsXid; } ;
struct TYPE_13__ {TYPE_2__* shared; } ;
struct TYPE_9__ {int nodeid; int time; } ;
struct TYPE_12__ {TYPE_1__ dataLastCommit; int xidLastCommit; int commitTsActive; } ;
struct TYPE_11__ {int nodeid; int time; } ;
struct TYPE_10__ {scalar_t__* page_buffer; } ;
typedef int RepOriginId ;
typedef TYPE_3__ CommitTimestampEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_6__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 TYPE_7__* VAR_7 ;
 int FUNC_3 (TYPE_6__*,int,int ) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_5__* VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_3__*,scalar_t__,int) ;

bool
FUNC_14(TransactionId VAR_10, TimestampTz *VAR_11,
        RepOriginId *VAR_12)
{
 int VAR_13 = FUNC_8(VAR_10);
 int VAR_14 = FUNC_7(VAR_10);
 int VAR_15;
 CommitTimestampEntry VAR_16;
 TransactionId VAR_17;
 TransactionId VAR_18;

 if (!FUNC_5(VAR_10))
  FUNC_9(VAR_4,
    (FUNC_10(VAR_3),
     FUNC_11("cannot retrieve commit timestamp for transaction %u", VAR_10)));
 else if (!FUNC_4(VAR_10))
 {

  *VAR_11 = 0;
  if (VAR_12)
   *VAR_12 = 0;
  return 0;
 }

 FUNC_1(VAR_2, VAR_6);


 if (!VAR_9->commitTsActive)
  FUNC_12();





 if (VAR_9->xidLastCommit == VAR_10)
 {
  *VAR_11 = VAR_9->dataLastCommit.time;
  if (VAR_12)
   *VAR_12 = VAR_9->dataLastCommit.nodeid;

  FUNC_2(VAR_2);
  return *VAR_11 != 0;
 }

 VAR_17 = VAR_7->oldestCommitTsXid;
 VAR_18 = VAR_7->newestCommitTsXid;

 FUNC_0(FUNC_5(VAR_17) == FUNC_5(VAR_18));
 FUNC_2(VAR_2);




 if (!FUNC_5(VAR_17) ||
  FUNC_6(VAR_10, VAR_17) ||
  FUNC_6(VAR_18, VAR_10))
 {
  *VAR_11 = 0;
  if (VAR_12)
   *VAR_12 = VAR_5;
  return 0;
 }


 VAR_15 = FUNC_3(VAR_1, VAR_13, VAR_10);
 FUNC_13(&VAR_16,
     VAR_1->shared->page_buffer[VAR_15] +
     VAR_8 * VAR_14,
     VAR_8);

 *VAR_11 = VAR_16.time;
 if (VAR_12)
  *VAR_12 = VAR_16.nodeid;

 FUNC_2(VAR_0);
 return *VAR_11 != 0;
}
