
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nextMulti; int oldestMulti; int oldestMultiDB; int nextMultiOffset; int nextOid; int oldestXid; int oldestXidDB; int oldestCommitTsXid; int newestCommitTsXid; int nextFullXid; int ThisTimeLineID; } ;
struct TYPE_4__ {int xlog_seg_size; TYPE_1__ checkPointCopy; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_5(void)
{
 char VAR_12[VAR_1];


 FUNC_4(FUNC_3("\n\nValues to be changed:\n\n"));

 FUNC_1(VAR_12, VAR_0.checkPointCopy.ThisTimeLineID,
     VAR_3, VAR_2);
 FUNC_4(FUNC_3("First log segment after reset:        %s\n"), VAR_12);

 if (VAR_4 != 0)
 {
  FUNC_4(FUNC_3("NextMultiXactId:                      %u\n"),
      VAR_0.checkPointCopy.nextMulti);
  FUNC_4(FUNC_3("OldestMultiXid:                       %u\n"),
      VAR_0.checkPointCopy.oldestMulti);
  FUNC_4(FUNC_3("OldestMulti's DB:                     %u\n"),
      VAR_0.checkPointCopy.oldestMultiDB);
 }

 if (VAR_5 != -1)
 {
  FUNC_4(FUNC_3("NextMultiOffset:                      %u\n"),
      VAR_0.checkPointCopy.nextMultiOffset);
 }

 if (VAR_7 != 0)
 {
  FUNC_4(FUNC_3("NextOID:                              %u\n"),
      VAR_0.checkPointCopy.nextOid);
 }

 if (VAR_10 != 0)
 {
  FUNC_4(FUNC_3("NextXID:                              %u\n"),
      FUNC_2(VAR_0.checkPointCopy.nextFullXid));
  FUNC_4(FUNC_3("OldestXID:                            %u\n"),
      VAR_0.checkPointCopy.oldestXid);
  FUNC_4(FUNC_3("OldestXID's DB:                       %u\n"),
      VAR_0.checkPointCopy.oldestXidDB);
 }

 if (VAR_11 != -1)
 {
  FUNC_4(FUNC_3("NextXID epoch:                        %u\n"),
      FUNC_0(VAR_0.checkPointCopy.nextFullXid));
 }

 if (VAR_8 != 0)
 {
  FUNC_4(FUNC_3("oldestCommitTsXid:                    %u\n"),
      VAR_0.checkPointCopy.oldestCommitTsXid);
 }
 if (VAR_6 != 0)
 {
  FUNC_4(FUNC_3("newestCommitTsXid:                    %u\n"),
      VAR_0.checkPointCopy.newestCommitTsXid);
 }

 if (VAR_9 != 0)
 {
  FUNC_4(FUNC_3("Bytes per WAL segment:                %u\n"),
      VAR_0.xlog_seg_size);
 }
}
