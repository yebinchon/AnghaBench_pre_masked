
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef float uint32_t ;
typedef int ts ;
struct TYPE_8__ {float* array; } ;
struct TYPE_9__ {scalar_t__ size; } ;
struct audio_monitor {int channels; int last_recv_time; int prev_video_ts; int time_since_prev; TYPE_2__ buf; TYPE_3__ delay_buffer; scalar_t__ sample_rate; TYPE_1__* source; } ;
struct TYPE_7__ {int last_frame_ts; scalar_t__ sync_offset; } ;
typedef TYPE_1__ obs_source_t ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int*,int) ;
 int FUNC_3 (TYPE_3__*,float*,size_t) ;
 int FUNC_4 (TYPE_3__*,...) ;
 int FUNC_5 (TYPE_2__,size_t) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static bool FUNC_8(struct audio_monitor *VAR_1, float **VAR_2,
    uint32_t *VAR_3, uint64_t VAR_4, uint32_t VAR_5)
{
 obs_source_t *VAR_6 = VAR_1->source;
 uint64_t VAR_7 = VAR_6->last_frame_ts;
 uint64_t VAR_8 = FUNC_7();
 uint64_t VAR_9;
 uint64_t VAR_10;
 int64_t VAR_11;
 uint32_t VAR_12 = VAR_1->channels * sizeof(float);


 if (VAR_8 - VAR_1->last_recv_time > 1000000000)
  FUNC_1(&VAR_1->delay_buffer);
 VAR_1->last_recv_time = VAR_8;

 VAR_4 += VAR_1->source->sync_offset;

 FUNC_4(&VAR_1->delay_buffer, &VAR_4, sizeof(VAR_4));
 FUNC_4(&VAR_1->delay_buffer, VAR_3, sizeof(*VAR_3));
 FUNC_4(&VAR_1->delay_buffer, *VAR_2, *VAR_3 * VAR_12);

 if (!VAR_1->prev_video_ts) {
  VAR_1->prev_video_ts = VAR_7;

 } else if (VAR_1->prev_video_ts == VAR_7) {
  VAR_1->time_since_prev += (uint64_t)*VAR_3 * 1000000000ULL /
         (uint64_t)VAR_1->sample_rate;
 } else {
  VAR_1->time_since_prev = 0;
 }

 while (VAR_1->delay_buffer.size != 0) {
  size_t VAR_13;
  bool VAR_14;

  FUNC_2(&VAR_1->delay_buffer, &VAR_10,
         sizeof(VAR_4));
  VAR_9 = VAR_10 - ((uint64_t)VAR_5 * 1000000000ULL /
         (uint64_t)VAR_1->sample_rate);
  VAR_11 = (int64_t)VAR_9 - (int64_t)VAR_7;
  VAR_14 = !VAR_7 || FUNC_6(VAR_11) > 5000000000 ||
      VAR_1->time_since_prev > 100000000ULL;


  if (!VAR_14 && VAR_11 > 75000000) {
   return 0;
  }

  FUNC_3(&VAR_1->delay_buffer, ((void*)0), sizeof(VAR_4));
  FUNC_3(&VAR_1->delay_buffer, VAR_3,
        sizeof(*VAR_3));

  VAR_13 = *VAR_3 * VAR_12;
  FUNC_5(VAR_1->buf, VAR_13);
  FUNC_3(&VAR_1->delay_buffer, VAR_1->buf.array,
        VAR_13);


  if (!VAR_14 && VAR_11 < -75000000 &&
      VAR_1->delay_buffer.size > 0) {
   continue;
  }

  *VAR_2 = VAR_1->buf.array;
  return 1;
 }

 return 0;
}
