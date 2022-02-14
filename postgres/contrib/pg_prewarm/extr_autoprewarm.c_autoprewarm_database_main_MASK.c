
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_11__ {int prewarm_start_idx; int prewarm_stop_idx; int prewarmed_blocks; int database; int block_info_handle; } ;
struct TYPE_10__ {scalar_t__ database; scalar_t__ filenode; scalar_t__ forknum; scalar_t__ blocknum; int tablespace; } ;
struct TYPE_9__ {int rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int Datum ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;
typedef TYPE_2__ BlockInfoRecord ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*,scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 TYPE_5__* VAR_8 ;
 int VAR_9 ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_23 (int ,scalar_t__) ;
 TYPE_1__* FUNC_24 (int ,int ) ;

void
FUNC_25(Datum VAR_10)
{
 int VAR_11;
 BlockInfoRecord *VAR_12;
 Relation VAR_13 = ((void*)0);
 BlockNumber VAR_14 = 0;
 BlockInfoRecord *VAR_15 = ((void*)0);
 dsm_segment *VAR_16;


 FUNC_21(VAR_7, VAR_9);
 FUNC_2();


 FUNC_13();
 VAR_16 = FUNC_14(VAR_8->block_info_handle);
 if (VAR_16 == ((void*)0))
  FUNC_17(VAR_2,
    (FUNC_18(VAR_1),
     FUNC_19("could not map dynamic shared memory segment")));
 FUNC_1(VAR_8->database, VAR_4, 0);
 VAR_12 = (BlockInfoRecord *) FUNC_16(VAR_16);
 VAR_11 = VAR_8->prewarm_start_idx;





 while (VAR_11 < VAR_8->prewarm_stop_idx && FUNC_20())
 {
  BlockInfoRecord *VAR_17 = &VAR_12[VAR_11++];
  Buffer VAR_18;

  FUNC_4();





  if (VAR_15 != ((void*)0) && VAR_15->database != VAR_17->database &&
   VAR_15->database != 0)
   break;






  if (VAR_15 != ((void*)0) && VAR_15->filenode != VAR_17->filenode &&
   VAR_13 != ((void*)0))
  {
   FUNC_22(VAR_13, VAR_0);
   VAR_13 = ((void*)0);
   FUNC_5();
  }





  if (VAR_15 == ((void*)0) || VAR_15->filenode != VAR_17->filenode)
  {
   Oid VAR_19;

   FUNC_0(VAR_13 == ((void*)0));
   FUNC_12();
   VAR_19 = FUNC_11(VAR_17->tablespace, VAR_17->filenode);
   if (FUNC_6(VAR_19))
    VAR_13 = FUNC_24(VAR_19, VAR_0);

   if (!VAR_13)
    FUNC_5();
  }
  if (!VAR_13)
  {
   VAR_15 = VAR_17;
   continue;
  }


  if (VAR_15 == ((void*)0) ||
   VAR_15->filenode != VAR_17->filenode ||
   VAR_15->forknum != VAR_17->forknum)
  {
   FUNC_9(VAR_13);





   if (VAR_17->forknum > VAR_3 &&
    VAR_17->forknum <= VAR_5 &&
    FUNC_23(VAR_13->rd_smgr, VAR_17->forknum))
    VAR_14 = FUNC_8(VAR_13, VAR_17->forknum);
   else
    VAR_14 = 0;
  }


  if (VAR_17->blocknum >= VAR_14)
  {

   VAR_15 = VAR_17;
   continue;
  }


  VAR_18 = FUNC_7(VAR_13, VAR_17->forknum, VAR_17->blocknum, VAR_6,
         ((void*)0));
  if (FUNC_3(VAR_18))
  {
   VAR_8->prewarmed_blocks++;
   FUNC_10(VAR_18);
  }

  VAR_15 = VAR_17;
 }

 FUNC_15(VAR_16);


 if (VAR_13)
 {
  FUNC_22(VAR_13, VAR_0);
  FUNC_5();
 }
}
