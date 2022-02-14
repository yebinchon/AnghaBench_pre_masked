
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int pgssJumbleState ;
struct TYPE_11__ {scalar_t__ queryid; int dbid; int userid; } ;
typedef TYPE_2__ pgssHashKey ;
struct TYPE_10__ {int calls; double total_time; double min_time; double max_time; double mean_time; double sum_var_time; int usage; int blk_write_time; int blk_read_time; int temp_blks_written; int temp_blks_read; int local_blks_written; int local_blks_dirtied; int local_blks_read; int local_blks_hit; int shared_blks_written; int shared_blks_dirtied; int shared_blks_read; int shared_blks_hit; int rows; } ;
struct TYPE_12__ {int mutex; TYPE_1__ counters; } ;
typedef TYPE_3__ pgssEntry ;
struct TYPE_14__ {int gc_count; int lock; } ;
struct TYPE_13__ {int blk_write_time; int blk_read_time; scalar_t__ temp_blks_written; scalar_t__ temp_blks_read; scalar_t__ local_blks_written; scalar_t__ local_blks_dirtied; scalar_t__ local_blks_read; scalar_t__ local_blks_hit; scalar_t__ shared_blks_written; scalar_t__ shared_blks_dirtied; scalar_t__ shared_blks_read; scalar_t__ shared_blks_hit; } ;
typedef int Size ;
typedef TYPE_4__ BufferUsage ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (double) ;
 int VAR_4 ;
 TYPE_3__* FUNC_10 (TYPE_2__*,int ,int,int,int ) ;
 int FUNC_11 () ;
 char* FUNC_12 (int *,char const*,int,int*,int) ;
 scalar_t__ FUNC_13 (int ,TYPE_2__*,int ,int *) ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 TYPE_6__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_16 (char const*,int) ;
 int FUNC_17 (char*,int,int *,int*) ;
 scalar_t__ FUNC_18 (char const) ;
 int FUNC_19 (char const*) ;

__attribute__((used)) static void
FUNC_20(const char *VAR_7, uint64 VAR_8,
     int VAR_9, int VAR_10,
     double VAR_11, uint64 VAR_12,
     const BufferUsage *VAR_13,
     pgssJumbleState *VAR_14)
{
 pgssHashKey VAR_15;
 pgssEntry *VAR_16;
 char *VAR_17 = ((void*)0);
 int VAR_18 = FUNC_1();

 FUNC_0(VAR_7 != ((void*)0));


 if (!VAR_5 || !VAR_6)
  return;







 if (VAR_9 >= 0)
 {
  FUNC_0(VAR_9 <= FUNC_19(VAR_7));
  VAR_7 += VAR_9;

  if (VAR_10 <= 0)
   VAR_10 = FUNC_19(VAR_7);
  else
   FUNC_0(VAR_10 <= FUNC_19(VAR_7));
 }
 else
 {

  VAR_9 = 0;
  VAR_10 = FUNC_19(VAR_7);
 }





 while (VAR_10 > 0 && FUNC_18(VAR_7[0]))
  VAR_7++, VAR_9++, VAR_10--;
 while (VAR_10 > 0 && FUNC_18(VAR_7[VAR_10 - 1]))
  VAR_10--;




 if (VAR_8 == FUNC_8(0))
 {
  VAR_8 = FUNC_16(VAR_7, VAR_10);






  if (VAR_8 == FUNC_8(0))
   VAR_8 = FUNC_8(2);
 }


 VAR_15.userid = FUNC_2();
 VAR_15.dbid = VAR_3;
 VAR_15.queryid = VAR_8;


 FUNC_4(VAR_5->lock, VAR_2);

 VAR_16 = (pgssEntry *) FUNC_13(VAR_6, &VAR_15, VAR_0, ((void*)0));


 if (!VAR_16)
 {
  Size VAR_19;
  int VAR_20;
  bool VAR_21;
  bool VAR_22;
  if (VAR_14)
  {
   FUNC_5(VAR_5->lock);
   VAR_17 = FUNC_12(VAR_14, VAR_7,
               VAR_9,
               &VAR_10,
               VAR_18);
   FUNC_4(VAR_5->lock, VAR_2);
  }


  VAR_21 = FUNC_17(VAR_17 ? VAR_17 : VAR_7, VAR_10,
        &VAR_19, &VAR_20);






  VAR_22 = FUNC_14();


  FUNC_5(VAR_5->lock);
  FUNC_4(VAR_5->lock, VAR_1);
  if (!VAR_21 || VAR_5->gc_count != VAR_20)
   VAR_21 = FUNC_17(VAR_17 ? VAR_17 : VAR_7, VAR_10,
         &VAR_19, ((void*)0));


  if (!VAR_21)
   goto done;


  VAR_16 = FUNC_10(&VAR_15, VAR_19, VAR_10, VAR_18,
       VAR_14 != ((void*)0));


  if (VAR_22)
   FUNC_11();
 }


 if (!VAR_14)
 {




  volatile pgssEntry *VAR_23 = (volatile pgssEntry *) VAR_16;

  FUNC_6(&VAR_23->mutex);


  if (VAR_23->counters.calls == 0)
   VAR_23->counters.usage = VAR_4;

  VAR_23->counters.calls += 1;
  VAR_23->counters.total_time += VAR_11;
  if (VAR_23->counters.calls == 1)
  {
   VAR_23->counters.min_time = VAR_11;
   VAR_23->counters.max_time = VAR_11;
   VAR_23->counters.mean_time = VAR_11;
  }
  else
  {




   double VAR_24 = VAR_23->counters.mean_time;

   VAR_23->counters.mean_time +=
    (VAR_11 - VAR_24) / VAR_23->counters.calls;
   VAR_23->counters.sum_var_time +=
    (VAR_11 - VAR_24) * (VAR_11 - VAR_23->counters.mean_time);


   if (VAR_23->counters.min_time > VAR_11)
    VAR_23->counters.min_time = VAR_11;
   if (VAR_23->counters.max_time < VAR_11)
    VAR_23->counters.max_time = VAR_11;
  }
  VAR_23->counters.rows += VAR_12;
  VAR_23->counters.shared_blks_hit += VAR_13->shared_blks_hit;
  VAR_23->counters.shared_blks_read += VAR_13->shared_blks_read;
  VAR_23->counters.shared_blks_dirtied += VAR_13->shared_blks_dirtied;
  VAR_23->counters.shared_blks_written += VAR_13->shared_blks_written;
  VAR_23->counters.local_blks_hit += VAR_13->local_blks_hit;
  VAR_23->counters.local_blks_read += VAR_13->local_blks_read;
  VAR_23->counters.local_blks_dirtied += VAR_13->local_blks_dirtied;
  VAR_23->counters.local_blks_written += VAR_13->local_blks_written;
  VAR_23->counters.temp_blks_read += VAR_13->temp_blks_read;
  VAR_23->counters.temp_blks_written += VAR_13->temp_blks_written;
  VAR_23->counters.blk_read_time += FUNC_3(VAR_13->blk_read_time);
  VAR_23->counters.blk_write_time += FUNC_3(VAR_13->blk_write_time);
  VAR_23->counters.usage += FUNC_9(VAR_11);

  FUNC_7(&VAR_23->mutex);
 }

done:
 FUNC_5(VAR_5->lock);


 if (VAR_17)
  FUNC_15(VAR_17);
}
