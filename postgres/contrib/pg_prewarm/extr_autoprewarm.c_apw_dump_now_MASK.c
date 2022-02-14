
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ pid_t ;
struct TYPE_14__ {scalar_t__ pid_using_dumpfile; int lock; } ;
struct TYPE_13__ {int database; int tablespace; int filenode; int blocknum; scalar_t__ forknum; } ;
struct TYPE_10__ {int dbNode; int spcNode; int relNode; } ;
struct TYPE_11__ {int blockNum; scalar_t__ forkNum; TYPE_1__ rnode; } ;
struct TYPE_12__ {TYPE_2__ tag; } ;
typedef int FILE ;
typedef TYPE_3__ BufferDesc ;
typedef TYPE_4__ BlockInfoRecord ;


 char* VAR_0 ;
 int * FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_3__*,int) ;
 TYPE_6__* VAR_11 ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,...) ;
 int VAR_12 ;
 int FUNC_12 (int *,char*,int,...) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (char*,int,char*,char*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(bool VAR_13, bool VAR_14)
{
 int VAR_15;
 int VAR_16;
 int VAR_17;
 BlockInfoRecord *VAR_18;
 BufferDesc *VAR_19;
 FILE *VAR_20;
 char VAR_21[VAR_8];
 pid_t VAR_22;

 FUNC_4(&VAR_11->lock, VAR_7);
 VAR_22 = VAR_11->pid_using_dumpfile;
 if (VAR_11->pid_using_dumpfile == VAR_5)
  VAR_11->pid_using_dumpfile = VAR_9;
 FUNC_5(&VAR_11->lock);

 if (VAR_22 != VAR_5)
 {
  if (!VAR_13)
   FUNC_9(VAR_4,
     (FUNC_11("could not perform block dump because dump file is being used by PID %lu",
       (unsigned long) VAR_11->pid_using_dumpfile)));

  FUNC_9(VAR_6,
    (FUNC_11("skipping block dump because it is already being performed by PID %lu",
      (unsigned long) VAR_11->pid_using_dumpfile)));
  return 0;
 }

 VAR_18 =
  (BlockInfoRecord *) FUNC_13(sizeof(BlockInfoRecord) * VAR_10);

 for (VAR_15 = 0, VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
 {
  uint32 VAR_23;

  FUNC_1();

  VAR_19 = FUNC_3(VAR_16);


  VAR_23 = FUNC_6(VAR_19);






  if (VAR_23 & VAR_2 &&
   ((VAR_23 & VAR_1) || VAR_14))
  {
   VAR_18[VAR_15].database = VAR_19->tag.rnode.dbNode;
   VAR_18[VAR_15].tablespace = VAR_19->tag.rnode.spcNode;
   VAR_18[VAR_15].filenode = VAR_19->tag.rnode.relNode;
   VAR_18[VAR_15].forknum = VAR_19->tag.forkNum;
   VAR_18[VAR_15].blocknum = VAR_19->tag.blockNum;
   ++VAR_15;
  }

  FUNC_7(VAR_19, VAR_23);
 }

 FUNC_15(VAR_21, VAR_8, "%s.tmp", VAR_0);
 VAR_20 = FUNC_0(VAR_21, "w");
 if (!VAR_20)
  FUNC_9(VAR_4,
    (FUNC_10(),
     FUNC_11("could not open file \"%s\": %m",
      VAR_21)));

 VAR_17 = FUNC_12(VAR_20, "<<%d>>\n", VAR_15);
 if (VAR_17 < 0)
 {
  int VAR_24 = VAR_12;

  FUNC_2(VAR_20);
  FUNC_16(VAR_21);
  VAR_12 = VAR_24;
  FUNC_9(VAR_4,
    (FUNC_10(),
     FUNC_11("could not write to file \"%s\": %m",
      VAR_21)));
 }

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
 {
  FUNC_1();

  VAR_17 = FUNC_12(VAR_20, "%u,%u,%u,%u,%u\n",
       VAR_18[VAR_16].database,
       VAR_18[VAR_16].tablespace,
       VAR_18[VAR_16].filenode,
       (uint32) VAR_18[VAR_16].forknum,
       VAR_18[VAR_16].blocknum);
  if (VAR_17 < 0)
  {
   int VAR_25 = VAR_12;

   FUNC_2(VAR_20);
   FUNC_16(VAR_21);
   VAR_12 = VAR_25;
   FUNC_9(VAR_4,
     (FUNC_10(),
      FUNC_11("could not write to file \"%s\": %m",
       VAR_21)));
  }
 }

 FUNC_14(VAR_18);





 VAR_17 = FUNC_2(VAR_20);
 if (VAR_17 != 0)
 {
  int VAR_26 = VAR_12;

  FUNC_16(VAR_21);
  VAR_12 = VAR_26;
  FUNC_9(VAR_4,
    (FUNC_10(),
     FUNC_11("could not close file \"%s\": %m",
      VAR_21)));
 }

 (void) FUNC_8(VAR_21, VAR_0, VAR_4);
 VAR_11->pid_using_dumpfile = VAR_5;

 FUNC_9(VAR_3,
   (FUNC_11("wrote block details for %d blocks", VAR_15)));
 return VAR_15;
}
