
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oldestXid; int pageno; } ;
typedef TYPE_1__ xl_commit_ts_truncate ;
struct TYPE_4__ {int mainxid; int nodeid; int timestamp; } ;
typedef TYPE_2__ xl_commit_ts_set ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int TransactionId ;
typedef int StringInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int*,char*,int) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int ) ;

void
FUNC_8(StringInfo VAR_5, XLogReaderState *VAR_6)
{
 char *VAR_7 = FUNC_0(VAR_6);
 uint8 VAR_8 = FUNC_2(VAR_6) & ~VAR_4;

 if (VAR_8 == VAR_2)
 {
  int VAR_9;

  FUNC_4(&VAR_9, VAR_7, sizeof(int));
  FUNC_3(VAR_5, "%d", VAR_9);
 }
 else if (VAR_8 == VAR_1)
 {
  xl_commit_ts_truncate *VAR_10 = (xl_commit_ts_truncate *) VAR_7;

  FUNC_3(VAR_5, "pageno %d, oldestXid %u",
       VAR_10->pageno, VAR_10->oldestXid);
 }
 else if (VAR_8 == VAR_0)
 {
  xl_commit_ts_set *VAR_11 = (xl_commit_ts_set *) VAR_7;
  int VAR_12;

  FUNC_3(VAR_5, "set %s/%d for: %u",
       FUNC_7(VAR_11->timestamp),
       VAR_11->nodeid,
       VAR_11->mainxid);
  VAR_12 = ((FUNC_1(VAR_6) - VAR_3) /
     sizeof(TransactionId));
  if (VAR_12 > 0)
  {
   int VAR_13;
   TransactionId *VAR_14;

   VAR_14 = FUNC_5(sizeof(TransactionId) * VAR_12);
   FUNC_4(VAR_14,
       FUNC_0(VAR_6) + VAR_3,
       sizeof(TransactionId) * VAR_12);
   for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
    FUNC_3(VAR_5, ", %u", VAR_14[VAR_13]);
   FUNC_6(VAR_14);
  }
 }
}
