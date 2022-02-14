
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct bar_progress_hist {scalar_t__ total_time; scalar_t__* times; size_t pos; scalar_t__* bytes; int total_bytes; } ;
struct bar_progress {scalar_t__ recent_start; scalar_t__ recent_bytes; scalar_t__ stalled; struct bar_progress_hist hist; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bar_progress_hist*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bar_progress* VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 struct bar_progress_hist* VAR_8 = &VAR_5->hist;
 uint64_t VAR_9 = VAR_7 - VAR_5->recent_start;


 VAR_5->recent_bytes += VAR_6;




 if (VAR_9 < VAR_2)
  return;

 if (VAR_6 == 0) {




  if (VAR_9 >= VAR_3) {



   VAR_5->stalled = VAR_4;
   FUNC_0(VAR_8, 0, sizeof(struct bar_progress_hist));
   VAR_5->recent_bytes = 0;
  }
  return;
 }




 if (VAR_5->stalled) {
  VAR_5->stalled = VAR_0;





  VAR_9 = 1000;
 }





 VAR_8->total_time -= VAR_8->times[VAR_8->pos];
 VAR_8->total_bytes -= VAR_8->bytes[VAR_8->pos];


 VAR_8->times[VAR_8->pos] = VAR_9;
 VAR_8->bytes[VAR_8->pos] = VAR_5->recent_bytes;
 VAR_8->total_time += VAR_9;
 VAR_8->total_bytes += VAR_5->recent_bytes;


 VAR_5->recent_start = VAR_7;
 VAR_5->recent_bytes = 0;


 if (++VAR_8->pos == VAR_1)
  VAR_8->pos = 0;
}
