
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint32 ;
typedef int instr_time ;
typedef int XLogRecPtr ;
struct TYPE_25__ {int shared_blks_written; int blk_write_time; } ;
struct TYPE_19__ {int blockNum; int forkNum; int rnode; } ;
struct TYPE_24__ {TYPE_1__ tag; } ;
struct TYPE_23__ {struct TYPE_23__* previous; void* arg; int callback; } ;
struct TYPE_20__ {int relNode; int dbNode; int spcNode; } ;
struct TYPE_21__ {TYPE_2__ node; } ;
struct TYPE_22__ {TYPE_3__ smgr_rnode; } ;
typedef TYPE_4__* SMgrRelation ;
typedef int Page ;
typedef TYPE_5__ ErrorContextCallback ;
typedef TYPE_6__ BufferDesc ;
typedef scalar_t__ Block ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_6__*) ;
 char* FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ) ;
 int FUNC_11 (TYPE_6__*,int,int ) ;
 int FUNC_12 (TYPE_6__*,int) ;
 int FUNC_13 (int ) ;
 TYPE_5__* VAR_3 ;
 TYPE_9__ VAR_4 ;
 int FUNC_14 (int ) ;
 int VAR_5 ;
 TYPE_4__* FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_4__*,int ,int ,char*,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_17(BufferDesc *VAR_7, SMgrRelation VAR_8)
{
 XLogRecPtr VAR_9;
 ErrorContextCallback VAR_10;
 instr_time VAR_11,
    VAR_12;
 Block VAR_13;
 char *VAR_14;
 uint32 VAR_15;






 if (!FUNC_8(VAR_7, 0))
  return;


 VAR_10.callback = VAR_5;
 VAR_10.arg = (void *) VAR_7;
 VAR_10.previous = VAR_3;
 VAR_3 = &VAR_10;


 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_15(VAR_7->tag.rnode, VAR_2);

 FUNC_10(VAR_7->tag.forkNum,
          VAR_7->tag.blockNum,
          VAR_8->smgr_rnode.node.spcNode,
          VAR_8->smgr_rnode.node.dbNode,
          VAR_8->smgr_rnode.node.relNode);

 VAR_15 = FUNC_6(VAR_7);





 VAR_9 = FUNC_1(VAR_7);


 VAR_15 &= ~VAR_0;
 FUNC_12(VAR_7, VAR_15);
 if (VAR_15 & VAR_1)
  FUNC_13(VAR_9);






 VAR_13 = FUNC_0(VAR_7);






 VAR_14 = FUNC_7((Page) VAR_13, VAR_7->tag.blockNum);

 if (VAR_6)
  FUNC_4(VAR_11);




 FUNC_16(VAR_8,
     VAR_7->tag.forkNum,
     VAR_7->tag.blockNum,
     VAR_14,
     0);

 if (VAR_6)
 {
  FUNC_4(VAR_12);
  FUNC_5(VAR_12, VAR_11);
  FUNC_14(FUNC_3(VAR_12));
  FUNC_2(VAR_4.blk_write_time, VAR_12);
 }

 VAR_4.shared_blks_written++;





 FUNC_11(VAR_7, 1, 0);

 FUNC_9(VAR_7->tag.forkNum,
            VAR_7->tag.blockNum,
            VAR_8->smgr_rnode.node.spcNode,
            VAR_8->smgr_rnode.node.dbNode,
            VAR_8->smgr_rnode.node.relNode);


 VAR_3 = VAR_10.previous;
}
