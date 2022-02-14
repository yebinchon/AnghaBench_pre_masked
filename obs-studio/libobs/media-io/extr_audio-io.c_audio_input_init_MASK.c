
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resample_info {scalar_t__ format; scalar_t__ samples_per_sec; scalar_t__ speakers; } ;
struct TYPE_3__ {scalar_t__ format; scalar_t__ samples_per_sec; scalar_t__ speakers; } ;
struct audio_output {TYPE_1__ info; } ;
struct TYPE_4__ {scalar_t__ format; scalar_t__ samples_per_sec; scalar_t__ speakers; } ;
struct audio_input {int * resampler; TYPE_2__ conversion; } ;


 int VAR_0 ;
 int * FUNC_0 (struct resample_info*,struct resample_info*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static inline bool FUNC_2(struct audio_input *VAR_1,
        struct audio_output *VAR_2)
{
 if (VAR_1->conversion.format != VAR_2->info.format ||
     VAR_1->conversion.samples_per_sec != VAR_2->info.samples_per_sec ||
     VAR_1->conversion.speakers != VAR_2->info.speakers) {
  struct resample_info VAR_3 = {
   .format = VAR_2->info.format,
   .samples_per_sec = VAR_2->info.samples_per_sec,
   .speakers = VAR_2->info.speakers};

  struct resample_info VAR_4 = {
   .format = VAR_1->conversion.format,
   .samples_per_sec = VAR_1->conversion.samples_per_sec,
   .speakers = VAR_1->conversion.speakers};

  VAR_1->resampler = FUNC_0(&VAR_4, &VAR_3);
  if (!VAR_1->resampler) {
   FUNC_1(VAR_0, "audio_input_init: Failed to "
     "create resampler");
   return 0;
  }
 } else {
  VAR_1->resampler = ((void*)0);
 }

 return 1;
}
