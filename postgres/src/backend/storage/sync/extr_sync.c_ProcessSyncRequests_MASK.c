
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int instr_time ;
struct TYPE_9__ {int ckpt_sync_rels; scalar_t__ ckpt_agg_sync_time; scalar_t__ ckpt_longest_sync; } ;
struct TYPE_8__ {size_t handler; } ;
struct TYPE_7__ {scalar_t__ (* sync_syncfiletag ) (TYPE_3__*,char*) ;} ;
struct TYPE_6__ {scalar_t__ cycle_ctr; TYPE_3__ tag; int canceled; } ;
typedef TYPE_1__ PendingFsyncEntry ;
typedef int HASH_SEQ_STATUS ;
typedef scalar_t__ CycleCtr ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 int VAR_7 ;
 int * FUNC_11 (int ,TYPE_3__*,int ,int *) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (TYPE_3__*,char*) ;
 scalar_t__ VAR_10 ;
 TYPE_2__* VAR_11 ;

void
FUNC_15(void)
{
 static bool VAR_12 = 0;

 HASH_SEQ_STATUS VAR_13;
 PendingFsyncEntry *VAR_14;
 int VAR_15;


 int VAR_16 = 0;
 instr_time VAR_17,
    VAR_18,
    VAR_19;
 uint64 VAR_20;
 uint64 VAR_21 = 0;
 uint64 VAR_22 = 0;





 if (!VAR_9)
  FUNC_7(VAR_2, "cannot sync without a pendingOps table");
 FUNC_0();
 if (VAR_12)
 {

  FUNC_12(&VAR_13, VAR_9);
  while ((VAR_14 = (PendingFsyncEntry *) FUNC_13(&VAR_13)) != ((void*)0))
  {
   VAR_14->cycle_ctr = VAR_10;
  }
 }


 VAR_10++;


 VAR_12 = 1;


 VAR_15 = VAR_3;
 FUNC_12(&VAR_13, VAR_9);
 while ((VAR_14 = (PendingFsyncEntry *) FUNC_13(&VAR_13)) != ((void*)0))
 {
  int VAR_23;






  if (!VAR_6)
   continue;






  if (VAR_14->cycle_ctr == VAR_10)
   continue;


  FUNC_1((CycleCtr) (VAR_14->cycle_ctr + 1) == VAR_10);
  if (--VAR_15 <= 0)
  {
   FUNC_0();
   VAR_15 = VAR_3;
  }
  for (VAR_23 = 0; !VAR_14->canceled; VAR_23++)
  {
   char VAR_24[VAR_5];

   FUNC_4(VAR_17);
   if (VAR_11[VAR_14->tag.handler].sync_syncfiletag(&VAR_14->tag,
               VAR_24) == 0)
   {

    FUNC_4(VAR_18);
    VAR_19 = VAR_18;
    FUNC_5(VAR_19, VAR_17);
    VAR_20 = FUNC_3(VAR_19);
    if (VAR_20 > VAR_21)
     VAR_21 = VAR_20;
    VAR_22 += VAR_20;
    VAR_16++;

    if (VAR_8)
     FUNC_7(VAR_1, "checkpoint sync: number=%d file=%s time=%.3f msec",
       VAR_16,
       VAR_24,
       (double) VAR_20 / 1000);

    break;
   }






   if (!FUNC_2(VAR_7) || VAR_23 > 0)
    FUNC_8(FUNC_6(VAR_2),
      (FUNC_9(),
       FUNC_10("could not fsync file \"%s\": %m",
        VAR_24)));
   else
    FUNC_8(VAR_1,
      (FUNC_9(),
       FUNC_10("could not fsync file \"%s\" but retrying: %m",
        VAR_24)));





   FUNC_0();
   VAR_15 = VAR_3;
  }


  if (FUNC_11(VAR_9, &VAR_14->tag, VAR_4, ((void*)0)) == ((void*)0))
   FUNC_7(VAR_2, "pendingOps corrupted");
 }


 VAR_0.ckpt_sync_rels = VAR_16;
 VAR_0.ckpt_longest_sync = VAR_21;
 VAR_0.ckpt_agg_sync_time = VAR_22;


 VAR_12 = 0;
}
