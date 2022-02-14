
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int blkno; int rnode; } ;
typedef TYPE_1__ xl_smgr_truncate ;
struct TYPE_9__ {int forkNum; int rnode; } ;
typedef TYPE_2__ xl_smgr_create ;
typedef scalar_t__ uint8 ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_3__ XLogReaderState ;
typedef int SMgrRelation ;
typedef int Relation ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int FUNC_12 (int ,int ,int) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int *,int,int *) ;
 int FUNC_16 (int ,int ) ;

void
FUNC_17(XLogReaderState *VAR_13)
{
 XLogRecPtr VAR_14 = VAR_13->EndRecPtr;
 uint8 VAR_15 = FUNC_8(VAR_13) & ~VAR_12;


 FUNC_0(!FUNC_9(VAR_13));

 if (VAR_15 == VAR_10)
 {
  xl_smgr_create *VAR_16 = (xl_smgr_create *) FUNC_7(VAR_13);
  SMgrRelation VAR_17;

  VAR_17 = FUNC_14(VAR_16->rnode, VAR_1);
  FUNC_12(VAR_17, VAR_16->forkNum, 1);
 }
 else if (VAR_15 == VAR_11)
 {
  xl_smgr_truncate *VAR_18 = (xl_smgr_truncate *) FUNC_7(VAR_13);
  SMgrRelation VAR_19;
  Relation VAR_20;
  ForkNumber VAR_21[VAR_4];
  BlockNumber VAR_22[VAR_4];
  int VAR_23 = 0;
  bool VAR_24 = 0;

  VAR_19 = FUNC_14(VAR_18->rnode, VAR_1);







  FUNC_12(VAR_19, VAR_3, 1);
  FUNC_6(VAR_14);


  if ((VAR_18->flags & VAR_7) != 0)
  {
   VAR_21[VAR_23] = VAR_3;
   VAR_22[VAR_23] = VAR_18->blkno;
   VAR_23++;


   FUNC_10(VAR_18->rnode, VAR_3, VAR_18->blkno);
  }


  VAR_20 = FUNC_2(VAR_18->rnode);

  if ((VAR_18->flags & VAR_6) != 0 &&
   FUNC_13(VAR_19, VAR_0))
  {
   VAR_22[VAR_23] = FUNC_4(VAR_20, VAR_18->blkno);
   if (FUNC_1(VAR_22[VAR_23]))
   {
    VAR_21[VAR_23] = VAR_0;
    VAR_23++;
    VAR_24 = 1;
   }
  }
  if ((VAR_18->flags & VAR_8) != 0 &&
   FUNC_13(VAR_19, VAR_9))
  {
   VAR_22[VAR_23] = FUNC_16(VAR_20, VAR_18->blkno);
   if (FUNC_1(VAR_22[VAR_23]))
   {
    VAR_21[VAR_23] = VAR_9;
    VAR_23++;
   }
  }


  if (VAR_23 > 0)
   FUNC_15(VAR_19, VAR_21, VAR_23, VAR_22);






  if (VAR_24)
   FUNC_5(VAR_20, VAR_18->blkno,
         VAR_2);

  FUNC_3(VAR_20);
 }
 else
  FUNC_11(VAR_5, "smgr_redo: unknown op code %u", VAR_15);
}
