
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_5__ {scalar_t__ pid_using_dumpfile; int prewarm_start_idx; int prewarm_stop_idx; int prewarmed_blocks; int lock; int block_info_handle; scalar_t__ database; } ;
struct TYPE_4__ {scalar_t__ database; unsigned int forknum; int blocknum; int filenode; int tablespace; } ;
typedef scalar_t__ Oid ;
typedef int FILE ;
typedef TYPE_1__ BlockInfoRecord ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 () ;
 TYPE_3__* VAR_10 ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,unsigned long,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (int *,char*,...) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void
FUNC_16(void)
{
 FILE *VAR_12 = ((void*)0);
 int VAR_13,
    VAR_14;
 BlockInfoRecord *VAR_15;
 dsm_segment *VAR_16;





 FUNC_3(&VAR_10->lock, VAR_7);
 if (VAR_10->pid_using_dumpfile == VAR_5)
  VAR_10->pid_using_dumpfile = VAR_8;
 else
 {
  FUNC_4(&VAR_10->lock);
  FUNC_10(VAR_6,
    (FUNC_12("skipping prewarm because block dump file is being written by PID %lu",
      (unsigned long) VAR_10->pid_using_dumpfile)));
  return;
 }
 FUNC_4(&VAR_10->lock);





 VAR_12 = FUNC_0(VAR_0, "r");
 if (!VAR_12)
 {
  if (VAR_11 == VAR_2)
  {
   FUNC_3(&VAR_10->lock, VAR_7);
   VAR_10->pid_using_dumpfile = VAR_5;
   FUNC_4(&VAR_10->lock);
   return;
  }
  FUNC_10(VAR_3,
    (FUNC_11(),
     FUNC_12("could not read file \"%s\": %m",
      VAR_0)));
 }


 if (FUNC_13(VAR_12, "<<%d>>\n", &VAR_13) != 1)
  FUNC_10(VAR_3,
    (FUNC_11(),
     FUNC_12("could not read from file \"%s\": %m",
      VAR_0)));


 VAR_16 = FUNC_6(sizeof(BlockInfoRecord) * VAR_13, 0);
 VAR_15 = (BlockInfoRecord *) FUNC_8(VAR_16);


 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
 {
  unsigned VAR_17;

  if (FUNC_13(VAR_12, "%u,%u,%u,%u,%u\n", &VAR_15[VAR_14].database,
       &VAR_15[VAR_14].tablespace, &VAR_15[VAR_14].filenode,
       &VAR_17, &VAR_15[VAR_14].blocknum) != 5)
   FUNC_10(VAR_3,
     (FUNC_12("autoprewarm block dump file is corrupted at line %d",
       VAR_14 + 1)));
  VAR_15[VAR_14].forknum = VAR_17;
 }

 FUNC_2(VAR_12);


 FUNC_15(VAR_15, VAR_13, sizeof(BlockInfoRecord),
    VAR_9);


 VAR_10->block_info_handle = FUNC_9(VAR_16);
 VAR_10->prewarm_start_idx = VAR_10->prewarm_stop_idx = 0;
 VAR_10->prewarmed_blocks = 0;


 while (VAR_10->prewarm_start_idx < VAR_13)
 {
  int VAR_18 = VAR_10->prewarm_start_idx;
  Oid VAR_19 = VAR_15[VAR_18].database;





  VAR_18++;
  while (VAR_18 < VAR_13)
  {
   if (VAR_19 != VAR_15[VAR_18].database)
   {




    if (VAR_19 != VAR_4)
     break;
    VAR_19 = VAR_15[VAR_18].database;
   }

   VAR_18++;
  }






  if (VAR_19 == VAR_4)
   break;


  VAR_10->prewarm_stop_idx = VAR_18;
  VAR_10->database = VAR_19;
  FUNC_1(VAR_10->prewarm_start_idx < VAR_10->prewarm_stop_idx);


  if (!FUNC_14())
   break;





  FUNC_5();


  VAR_10->prewarm_start_idx = VAR_10->prewarm_stop_idx;
 }


 FUNC_7(VAR_16);
 FUNC_3(&VAR_10->lock, VAR_7);
 VAR_10->block_info_handle = VAR_1;
 VAR_10->pid_using_dumpfile = VAR_5;
 FUNC_4(&VAR_10->lock);


 FUNC_10(VAR_6,
   (FUNC_12("autoprewarm successfully prewarmed %d of %d previously-loaded blocks",
     VAR_10->prewarmed_blocks, VAR_13)));
}
