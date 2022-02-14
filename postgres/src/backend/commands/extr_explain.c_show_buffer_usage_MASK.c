
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ shared_blks_hit; scalar_t__ shared_blks_read; scalar_t__ shared_blks_dirtied; scalar_t__ shared_blks_written; scalar_t__ local_blks_hit; scalar_t__ local_blks_read; scalar_t__ local_blks_dirtied; scalar_t__ local_blks_written; scalar_t__ temp_blks_read; scalar_t__ temp_blks_written; int blk_write_time; int blk_read_time; } ;
struct TYPE_7__ {scalar_t__ format; int indent; int str; } ;
typedef TYPE_1__ ExplainState ;
typedef TYPE_2__ BufferUsage ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__,int,TYPE_1__*) ;
 int FUNC_1 (char*,int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int ,char) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_8(ExplainState *VAR_2, const BufferUsage *VAR_3)
{
 if (VAR_2->format == VAR_0)
 {
  bool VAR_4 = (VAR_3->shared_blks_hit > 0 ||
          VAR_3->shared_blks_read > 0 ||
          VAR_3->shared_blks_dirtied > 0 ||
          VAR_3->shared_blks_written > 0);
  bool VAR_5 = (VAR_3->local_blks_hit > 0 ||
         VAR_3->local_blks_read > 0 ||
         VAR_3->local_blks_dirtied > 0 ||
         VAR_3->local_blks_written > 0);
  bool VAR_6 = (VAR_3->temp_blks_read > 0 ||
        VAR_3->temp_blks_written > 0);
  bool VAR_7 = (!FUNC_3(VAR_3->blk_read_time) ||
          !FUNC_3(VAR_3->blk_write_time));


  if (VAR_4 || VAR_5 || VAR_6)
  {
   FUNC_6(VAR_2->str, VAR_2->indent * 2);
   FUNC_7(VAR_2->str, "Buffers:");

   if (VAR_4)
   {
    FUNC_7(VAR_2->str, " shared");
    if (VAR_3->shared_blks_hit > 0)
     FUNC_4(VAR_2->str, " hit=%ld",
          VAR_3->shared_blks_hit);
    if (VAR_3->shared_blks_read > 0)
     FUNC_4(VAR_2->str, " read=%ld",
          VAR_3->shared_blks_read);
    if (VAR_3->shared_blks_dirtied > 0)
     FUNC_4(VAR_2->str, " dirtied=%ld",
          VAR_3->shared_blks_dirtied);
    if (VAR_3->shared_blks_written > 0)
     FUNC_4(VAR_2->str, " written=%ld",
          VAR_3->shared_blks_written);
    if (VAR_5 || VAR_6)
     FUNC_5(VAR_2->str, ',');
   }
   if (VAR_5)
   {
    FUNC_7(VAR_2->str, " local");
    if (VAR_3->local_blks_hit > 0)
     FUNC_4(VAR_2->str, " hit=%ld",
          VAR_3->local_blks_hit);
    if (VAR_3->local_blks_read > 0)
     FUNC_4(VAR_2->str, " read=%ld",
          VAR_3->local_blks_read);
    if (VAR_3->local_blks_dirtied > 0)
     FUNC_4(VAR_2->str, " dirtied=%ld",
          VAR_3->local_blks_dirtied);
    if (VAR_3->local_blks_written > 0)
     FUNC_4(VAR_2->str, " written=%ld",
          VAR_3->local_blks_written);
    if (VAR_6)
     FUNC_5(VAR_2->str, ',');
   }
   if (VAR_6)
   {
    FUNC_7(VAR_2->str, " temp");
    if (VAR_3->temp_blks_read > 0)
     FUNC_4(VAR_2->str, " read=%ld",
          VAR_3->temp_blks_read);
    if (VAR_3->temp_blks_written > 0)
     FUNC_4(VAR_2->str, " written=%ld",
          VAR_3->temp_blks_written);
   }
   FUNC_5(VAR_2->str, '\n');
  }


  if (VAR_7)
  {
   FUNC_6(VAR_2->str, VAR_2->indent * 2);
   FUNC_7(VAR_2->str, "I/O Timings:");
   if (!FUNC_3(VAR_3->blk_read_time))
    FUNC_4(VAR_2->str, " read=%0.3f",
         FUNC_2(VAR_3->blk_read_time));
   if (!FUNC_3(VAR_3->blk_write_time))
    FUNC_4(VAR_2->str, " write=%0.3f",
         FUNC_2(VAR_3->blk_write_time));
   FUNC_5(VAR_2->str, '\n');
  }
 }
 else
 {
  FUNC_1("Shared Hit Blocks", ((void*)0),
          VAR_3->shared_blks_hit, VAR_2);
  FUNC_1("Shared Read Blocks", ((void*)0),
          VAR_3->shared_blks_read, VAR_2);
  FUNC_1("Shared Dirtied Blocks", ((void*)0),
          VAR_3->shared_blks_dirtied, VAR_2);
  FUNC_1("Shared Written Blocks", ((void*)0),
          VAR_3->shared_blks_written, VAR_2);
  FUNC_1("Local Hit Blocks", ((void*)0),
          VAR_3->local_blks_hit, VAR_2);
  FUNC_1("Local Read Blocks", ((void*)0),
          VAR_3->local_blks_read, VAR_2);
  FUNC_1("Local Dirtied Blocks", ((void*)0),
          VAR_3->local_blks_dirtied, VAR_2);
  FUNC_1("Local Written Blocks", ((void*)0),
          VAR_3->local_blks_written, VAR_2);
  FUNC_1("Temp Read Blocks", ((void*)0),
          VAR_3->temp_blks_read, VAR_2);
  FUNC_1("Temp Written Blocks", ((void*)0),
          VAR_3->temp_blks_written, VAR_2);
  if (VAR_1)
  {
   FUNC_0("I/O Read Time", "ms",
         FUNC_2(VAR_3->blk_read_time),
         3, VAR_2);
   FUNC_0("I/O Write Time", "ms",
         FUNC_2(VAR_3->blk_write_time),
         3, VAR_2);
  }
 }
}
