
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int instr_time ;
struct TYPE_9__ {int blk_write_time; int blk_read_time; scalar_t__ temp_blks_written; scalar_t__ temp_blks_read; scalar_t__ local_blks_written; scalar_t__ local_blks_dirtied; scalar_t__ local_blks_read; scalar_t__ local_blks_hit; scalar_t__ shared_blks_written; scalar_t__ shared_blks_dirtied; scalar_t__ shared_blks_read; scalar_t__ shared_blks_hit; } ;
struct TYPE_8__ {int stmt_len; int stmt_location; int * utilityStmt; } ;
typedef int QueryEnvironment ;
typedef int ProcessUtilityContext ;
typedef TYPE_1__ PlannedStmt ;
typedef int ParamListInfo ;
typedef int Node ;
typedef int DestReceiver ;
typedef TYPE_2__ BufferUsage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_7 (char*,int *,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char const*,int ,int ,int ,int ,scalar_t__,TYPE_2__*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (TYPE_1__*,char const*,int ,int ,int *,int *,char*) ;
 int FUNC_11 (TYPE_1__*,char const*,int ,int ,int *,int *,char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_13(PlannedStmt *VAR_6, const char *VAR_7,
     ProcessUtilityContext VAR_8,
     ParamListInfo VAR_9, QueryEnvironment *VAR_10,
     DestReceiver *VAR_11, char *VAR_12)
{
 Node *VAR_13 = VAR_6->utilityStmt;
 if (VAR_5 && FUNC_8() &&
  !FUNC_3(VAR_13, VAR_1) &&
  !FUNC_3(VAR_13, VAR_2) &&
  !FUNC_3(VAR_13, VAR_0))
 {
  instr_time VAR_14;
  instr_time VAR_15;
  uint64 VAR_16;
  BufferUsage VAR_17,
     VAR_18;

  VAR_17 = VAR_4;
  FUNC_1(VAR_14);

  VAR_3++;
  FUNC_6();
  {
   if (&FUNC_10)
    FUNC_10(VAR_6, VAR_7,
         VAR_8, VAR_9, VAR_10,
         VAR_11, VAR_12);
   else
    FUNC_11(VAR_6, VAR_7,
          VAR_8, VAR_9, VAR_10,
          VAR_11, VAR_12);
  }
  FUNC_5();
  {
   VAR_3--;
  }
  FUNC_4();

  FUNC_1(VAR_15);
  FUNC_2(VAR_15, VAR_14);


  if (VAR_12 &&
   FUNC_12(VAR_12, "COPY ", 5) == 0)
   VAR_16 = FUNC_7(VAR_12 + 5, ((void*)0), 10);
  else
   VAR_16 = 0;


  VAR_18.shared_blks_hit =
   VAR_4.shared_blks_hit - VAR_17.shared_blks_hit;
  VAR_18.shared_blks_read =
   VAR_4.shared_blks_read - VAR_17.shared_blks_read;
  VAR_18.shared_blks_dirtied =
   VAR_4.shared_blks_dirtied - VAR_17.shared_blks_dirtied;
  VAR_18.shared_blks_written =
   VAR_4.shared_blks_written - VAR_17.shared_blks_written;
  VAR_18.local_blks_hit =
   VAR_4.local_blks_hit - VAR_17.local_blks_hit;
  VAR_18.local_blks_read =
   VAR_4.local_blks_read - VAR_17.local_blks_read;
  VAR_18.local_blks_dirtied =
   VAR_4.local_blks_dirtied - VAR_17.local_blks_dirtied;
  VAR_18.local_blks_written =
   VAR_4.local_blks_written - VAR_17.local_blks_written;
  VAR_18.temp_blks_read =
   VAR_4.temp_blks_read - VAR_17.temp_blks_read;
  VAR_18.temp_blks_written =
   VAR_4.temp_blks_written - VAR_17.temp_blks_written;
  VAR_18.blk_read_time = VAR_4.blk_read_time;
  FUNC_2(VAR_18.blk_read_time, VAR_17.blk_read_time);
  VAR_18.blk_write_time = VAR_4.blk_write_time;
  FUNC_2(VAR_18.blk_write_time, VAR_17.blk_write_time);

  FUNC_9(VAR_7,
       0,
       VAR_6->stmt_location,
       VAR_6->stmt_len,
       FUNC_0(VAR_15),
       VAR_16,
       &VAR_18,
       ((void*)0));
 }
 else
 {
  if (&FUNC_10)
   FUNC_10(VAR_6, VAR_7,
        VAR_8, VAR_9, VAR_10,
        VAR_11, VAR_12);
  else
   FUNC_11(VAR_6, VAR_7,
         VAR_8, VAR_9, VAR_10,
         VAR_11, VAR_12);
 }
}
