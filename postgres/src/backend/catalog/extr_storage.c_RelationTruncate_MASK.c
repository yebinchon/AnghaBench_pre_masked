
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xlrec ;
struct TYPE_11__ {int flags; int rnode; int blkno; } ;
typedef TYPE_1__ xl_smgr_truncate ;
typedef int XLogRecPtr ;
struct TYPE_13__ {void* smgr_vm_nblocks; void* smgr_fsm_nblocks; void* smgr_targblock; } ;
struct TYPE_12__ {TYPE_4__* rd_smgr; int rd_node; } ;
typedef TYPE_2__* Relation ;
typedef int ForkNumber ;
typedef int BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,void*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int *,int,int *) ;
 int FUNC_11 (TYPE_2__*,int ) ;

void
FUNC_12(Relation VAR_9, BlockNumber VAR_10)
{
 bool VAR_11;
 bool VAR_12;
 bool VAR_13 = 0;
 ForkNumber VAR_14[VAR_3];
 BlockNumber VAR_15[VAR_3];
 int VAR_16 = 0;


 FUNC_4(VAR_9);




 VAR_9->rd_smgr->smgr_targblock = VAR_1;
 VAR_9->rd_smgr->smgr_fsm_nblocks = VAR_1;
 VAR_9->rd_smgr->smgr_vm_nblocks = VAR_1;


 VAR_14[VAR_16] = VAR_2;
 VAR_15[VAR_16] = VAR_10;
 VAR_16++;


 VAR_11 = FUNC_9(VAR_9->rd_smgr, VAR_0);
 if (VAR_11)
 {
  VAR_15[VAR_16] = FUNC_1(VAR_9, VAR_10);
  if (FUNC_0(VAR_15[VAR_16]))
  {
   VAR_14[VAR_16] = VAR_0;
   VAR_16++;
   VAR_13 = 1;
  }
 }


 VAR_12 = FUNC_9(VAR_9->rd_smgr, VAR_6);
 if (VAR_12)
 {
  VAR_15[VAR_16] = FUNC_11(VAR_9, VAR_10);
  if (FUNC_0(VAR_15[VAR_16]))
  {
   VAR_14[VAR_16] = VAR_6;
   VAR_16++;
  }
 }
 if (FUNC_3(VAR_9))
 {



  XLogRecPtr VAR_17;
  xl_smgr_truncate VAR_18;

  VAR_18.blkno = VAR_10;
  VAR_18.rnode = VAR_9->rd_node;
  VAR_18.flags = VAR_5;

  FUNC_5();
  FUNC_8((char *) &VAR_18, sizeof(VAR_18));

  VAR_17 = FUNC_7(VAR_4,
       VAR_7 | VAR_8);
  if (VAR_11 || VAR_12)
   FUNC_6(VAR_17);
 }


 FUNC_10(VAR_9->rd_smgr, VAR_14, VAR_16, VAR_15);






 if (VAR_13)
  FUNC_2(VAR_9, VAR_10, VAR_1);
}
