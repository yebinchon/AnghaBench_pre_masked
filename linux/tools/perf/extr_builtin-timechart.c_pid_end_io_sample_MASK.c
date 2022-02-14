
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u64 ;
struct timechart {scalar_t__ min_time; scalar_t__ merge_dist; int io_events; } ;
struct per_pidcomm {long max_bytes; long total_bytes; struct io_sample* io_samples; } ;
struct per_pid {long total_bytes; struct per_pidcomm* current; } ;
struct io_sample {long end_time; int type; scalar_t__ start_time; long err; long bytes; scalar_t__ fd; struct io_sample* next; scalar_t__ merges; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct per_pid* FUNC_0 (struct timechart*,int) ;
 int FUNC_1 (struct io_sample*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct timechart *VAR_4, int VAR_5, int VAR_6,
        u64 VAR_7, long VAR_8)
{
 struct per_pid *VAR_9 = FUNC_0(VAR_4, VAR_5);
 struct per_pidcomm *VAR_10 = VAR_9->current;
 struct io_sample *VAR_11, *VAR_12;

 if (!VAR_10) {
  FUNC_2("Invalid pidcomm!\n");
  return -1;
 }

 VAR_11 = VAR_10->io_samples;

 if (!VAR_11)
  return 0;

 if (VAR_11->end_time) {
  FUNC_2("Skip invalid end event: "
      "previous event already ended!\n");
  return 0;
 }

 if (VAR_11->type != VAR_6) {
  FUNC_2("Skip invalid end event: invalid event type!\n");
  return 0;
 }

 VAR_11->end_time = VAR_7;
 VAR_12 = VAR_11->next;



 if (VAR_11->end_time - VAR_11->start_time < VAR_4->min_time)
  VAR_11->end_time = VAR_11->start_time + VAR_4->min_time;
 if (VAR_12 && VAR_11->start_time < VAR_12->end_time) {
  if (VAR_12->err)
   VAR_11->start_time = VAR_12->end_time;
  else
   VAR_12->end_time = VAR_11->start_time;
 }

 if (VAR_8 < 0) {
  VAR_11->err = VAR_8;
 } else if (VAR_6 == VAR_0 || VAR_6 == VAR_3 ||
     VAR_6 == VAR_2 || VAR_6 == VAR_1) {

  if ((u64)VAR_8 > VAR_10->max_bytes)
   VAR_10->max_bytes = VAR_8;

  VAR_10->total_bytes += VAR_8;
  VAR_9->total_bytes += VAR_8;
  VAR_11->bytes = VAR_8;
 }


 if (VAR_12 &&
     VAR_12->type == VAR_11->type &&
     VAR_12->err == VAR_11->err &&
     VAR_12->fd == VAR_11->fd &&
     VAR_12->end_time + VAR_4->merge_dist >= VAR_11->start_time) {

  VAR_11->bytes += VAR_12->bytes;
  VAR_11->merges += VAR_12->merges + 1;

  VAR_11->start_time = VAR_12->start_time;
  VAR_11->next = VAR_12->next;
  FUNC_1(VAR_12);

  if (!VAR_11->err && VAR_11->bytes > VAR_10->max_bytes)
   VAR_10->max_bytes = VAR_11->bytes;
 }

 VAR_4->io_events++;

 return 0;
}
