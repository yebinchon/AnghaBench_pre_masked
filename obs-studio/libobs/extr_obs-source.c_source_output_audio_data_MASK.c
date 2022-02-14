
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct audio_data {scalar_t__ timestamp; int frames; } ;
struct TYPE_12__ {scalar_t__ timing_adjust; int timing_set; scalar_t__ next_audio_ts_min; scalar_t__ last_audio_ts; scalar_t__ next_audio_sys_ts_min; scalar_t__ sync_offset; scalar_t__ resample_offset; scalar_t__ last_sync_offset; scalar_t__ monitoring_type; int audio_buf_mutex; scalar_t__ audio_ts; scalar_t__ async_decoupled; scalar_t__ async_unbuffered; } ;
typedef TYPE_2__ obs_source_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {int audio; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_9__* VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,struct audio_data*) ;
 int FUNC_9 (TYPE_2__*,struct audio_data*) ;
 int FUNC_10 (TYPE_2__*,struct audio_data const*,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_12(obs_source_t *VAR_4,
         const struct audio_data *VAR_5)
{
 size_t VAR_6 = FUNC_0(VAR_3->audio.audio);
 struct audio_data VAR_7 = *VAR_5;
 uint64_t VAR_8;
 uint64_t VAR_9 = FUNC_3();
 int64_t VAR_10;
 bool VAR_11 = 0;
 bool VAR_12 = 0;



 if (FUNC_11(VAR_7.timestamp, VAR_9) < VAR_0) {
  VAR_4->timing_adjust = 0;
  VAR_4->timing_set = 1;
  VAR_11 = 1;
 }

 if (!VAR_4->timing_set) {
  FUNC_6(VAR_4, VAR_7.timestamp, VAR_9);

 } else if (VAR_4->next_audio_ts_min != 0) {
  VAR_8 = FUNC_11(VAR_4->next_audio_ts_min, VAR_7.timestamp);


  if (VAR_8 > VAR_0 && !VAR_11)
   FUNC_2(VAR_4, VAR_4->next_audio_ts_min,
           VAR_7.timestamp, VAR_8, VAR_9);
  else if (VAR_8 < VAR_2) {
   if (VAR_4->async_unbuffered && VAR_4->async_decoupled)
    VAR_4->timing_adjust = VAR_9 - VAR_7.timestamp;
   VAR_7.timestamp = VAR_4->next_audio_ts_min;
  }
 }

 VAR_4->last_audio_ts = VAR_7.timestamp;
 VAR_4->next_audio_ts_min =
  VAR_7.timestamp + FUNC_1(VAR_6, VAR_7.frames);

 VAR_7.timestamp += VAR_4->timing_adjust;

 FUNC_4(&VAR_4->audio_buf_mutex);

 if (VAR_4->next_audio_sys_ts_min == VAR_7.timestamp) {
  VAR_12 = 1;

 } else if (VAR_4->next_audio_sys_ts_min) {
  VAR_8 = FUNC_11(VAR_4->next_audio_sys_ts_min, VAR_7.timestamp);

  if (VAR_8 < VAR_2) {
   VAR_12 = 1;







  } else if (VAR_8 > VAR_0) {
   FUNC_6(VAR_4, VAR_5->timestamp, VAR_9);
   VAR_7.timestamp = VAR_5->timestamp + VAR_4->timing_adjust;
  }
 }

 VAR_10 = VAR_4->sync_offset;
 VAR_7.timestamp += VAR_10;
 VAR_7.timestamp -= VAR_4->resample_offset;

 VAR_4->next_audio_sys_ts_min =
  VAR_4->next_audio_ts_min + VAR_4->timing_adjust;

 if (VAR_4->last_sync_offset != VAR_10) {
  if (VAR_4->last_sync_offset)
   VAR_12 = 0;
  VAR_4->last_sync_offset = VAR_10;
 }

 if (VAR_4->monitoring_type != VAR_1) {
  if (VAR_12 && VAR_4->audio_ts)
   FUNC_9(VAR_4, &VAR_7);
  else
   FUNC_8(VAR_4, &VAR_7);
 }

 FUNC_5(&VAR_4->audio_buf_mutex);

 FUNC_10(VAR_4, VAR_5, FUNC_7(VAR_4, VAR_9));
}
