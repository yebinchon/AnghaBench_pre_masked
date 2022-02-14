
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pageno; int oldestXid; } ;
typedef TYPE_2__ xl_commit_ts_truncate ;
struct TYPE_9__ {int nodeid; int timestamp; int mainxid; } ;
typedef TYPE_3__ xl_commit_ts_set ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int TransactionId ;
struct TYPE_10__ {TYPE_1__* shared; } ;
struct TYPE_7__ {int latest_page_number; int * page_dirty; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_7 ;
 int FUNC_6 (int ,int,int*,int ,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,char*,scalar_t__) ;
 int FUNC_13 (int*,int,int) ;
 int* FUNC_14 (int) ;
 int FUNC_15 (int*) ;

void
FUNC_16(XLogReaderState *VAR_9)
{
 uint8 VAR_10 = FUNC_9(VAR_9) & ~VAR_8;


 FUNC_1(!FUNC_10(VAR_9));

 if (VAR_10 == VAR_2)
 {
  int VAR_11;
  int VAR_12;

  FUNC_13(&VAR_11, FUNC_7(VAR_9), sizeof(int));

  FUNC_2(VAR_3, VAR_5);

  VAR_12 = FUNC_11(VAR_11, 0);
  FUNC_5(VAR_4, VAR_12);
  FUNC_1(!VAR_4->shared->page_dirty[VAR_12]);

  FUNC_3(VAR_3);
 }
 else if (VAR_10 == VAR_1)
 {
  xl_commit_ts_truncate *VAR_13 = (xl_commit_ts_truncate *) FUNC_7(VAR_9);

  FUNC_0(VAR_13->oldestXid);





  VAR_4->shared->latest_page_number = VAR_13->pageno;

  FUNC_4(VAR_4, VAR_13->pageno);
 }
 else if (VAR_10 == VAR_0)
 {
  xl_commit_ts_set *VAR_14 = (xl_commit_ts_set *) FUNC_7(VAR_9);
  int VAR_15;
  TransactionId *VAR_16;

  VAR_15 = ((FUNC_8(VAR_9) - VAR_7) /
     sizeof(TransactionId));
  if (VAR_15 > 0)
  {
   VAR_16 = FUNC_14(sizeof(TransactionId) * VAR_15);
   FUNC_13(VAR_16,
       FUNC_7(VAR_9) + VAR_7,
       sizeof(TransactionId) * VAR_15);
  }
  else
   VAR_16 = ((void*)0);

  FUNC_6(VAR_14->mainxid, VAR_15, VAR_16,
            VAR_14->timestamp, VAR_14->nodeid, 1);
  if (VAR_16)
   FUNC_15(VAR_16);
 }
 else
  FUNC_12(VAR_6, "commit_ts_redo: unknown op code %u", VAR_10);
}
