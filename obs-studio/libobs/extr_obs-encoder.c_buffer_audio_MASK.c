
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct obs_encoder {size_t blocksize; unsigned long long start_ts; TYPE_1__* paired_encoder; scalar_t__ samplerate; } ;
struct audio_data {size_t frames; unsigned long long timestamp; } ;
struct TYPE_2__ {unsigned long long start_ts; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct obs_encoder*,unsigned long long,unsigned long long) ;
 int FUNC_1 (struct obs_encoder*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct obs_encoder*,struct audio_data*,size_t,size_t) ;
 int FUNC_5 (struct obs_encoder*,unsigned long long) ;

__attribute__((used)) static bool FUNC_6(struct obs_encoder *VAR_1, struct audio_data *VAR_2)
{
 FUNC_3(VAR_0);

 size_t VAR_3 = VAR_2->frames * VAR_1->blocksize;
 size_t VAR_4 = 0;
 bool VAR_5 = 1;

 if (!VAR_1->start_ts && VAR_1->paired_encoder) {
  uint64_t VAR_6 = VAR_2->timestamp;
  uint64_t VAR_7 = VAR_1->paired_encoder->start_ts;


  if (!VAR_7) {
   VAR_5 = 0;
   goto fail;
  }



  VAR_6 += (uint64_t)VAR_2->frames * 1000000000ULL /
     (uint64_t)VAR_1->samplerate;
  if (VAR_6 <= VAR_7) {
   VAR_5 = 0;
   goto fail;
  }


  if (VAR_2->timestamp < VAR_7)
   VAR_4 = FUNC_0(VAR_1, VAR_7,
             VAR_2->timestamp);
  if (VAR_2->timestamp <= VAR_7)
   FUNC_1(VAR_1);

  VAR_1->start_ts = VAR_7;


  if (VAR_7 < VAR_2->timestamp) {
   FUNC_5(VAR_1, VAR_7);
  }

 } else if (!VAR_1->start_ts && !VAR_1->paired_encoder) {
  VAR_1->start_ts = VAR_2->timestamp;
 }

fail:
 FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_0);
 return VAR_5;
}
