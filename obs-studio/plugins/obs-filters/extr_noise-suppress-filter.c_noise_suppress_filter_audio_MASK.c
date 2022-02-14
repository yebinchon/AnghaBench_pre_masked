
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ng_audio_info {int frames; scalar_t__ timestamp; } ;
typedef struct ng_audio_info uint8_t ;
struct obs_audio_data {int frames; scalar_t__ timestamp; struct ng_audio_info** data; } ;
struct TYPE_5__ {int * array; } ;
struct TYPE_6__ {size_t size; } ;
struct noise_suppress_data {int frames; size_t channels; struct obs_audio_data output_audio; TYPE_2__* output_buffers; TYPE_1__ output_data; TYPE_2__ info_buffer; TYPE_2__* input_buffers; scalar_t__ last_timestamp; int * states; } ;
typedef long long int64_t ;
typedef int info ;


 int FUNC_0 (TYPE_2__*,struct ng_audio_info*,int) ;
 int FUNC_1 (TYPE_2__*,struct ng_audio_info*,size_t) ;
 int FUNC_2 (TYPE_2__*,struct ng_audio_info*,int) ;
 int FUNC_3 (TYPE_1__,size_t) ;
 long long FUNC_4 (long long) ;
 int FUNC_5 (struct ng_audio_info*,int ,int) ;
 int FUNC_6 (struct noise_suppress_data*) ;
 int FUNC_7 (struct noise_suppress_data*) ;

__attribute__((used)) static struct obs_audio_data *
FUNC_8(void *VAR_0, struct obs_audio_data *VAR_1)
{
 struct noise_suppress_data *VAR_2 = VAR_0;
 struct ng_audio_info VAR_3;
 size_t VAR_4 = VAR_2->frames * sizeof(float);
 size_t VAR_5;

 if (!VAR_2->states[0])
  return VAR_1;





 if (VAR_2->last_timestamp) {
  int64_t VAR_6 = FUNC_4((int64_t)VAR_2->last_timestamp -
         (int64_t)VAR_1->timestamp);

  if (VAR_6 > 1000000000LL)
   FUNC_7(VAR_2);
 }

 VAR_2->last_timestamp = VAR_1->timestamp;



 VAR_3.frames = VAR_1->frames;
 VAR_3.timestamp = VAR_1->timestamp;
 FUNC_2(&VAR_2->info_buffer, &VAR_3, sizeof(VAR_3));



 for (size_t VAR_7 = 0; VAR_7 < VAR_2->channels; VAR_7++)
  FUNC_2(&VAR_2->input_buffers[VAR_7], VAR_1->data[VAR_7],
        VAR_1->frames * sizeof(float));



 while (VAR_2->input_buffers[0].size >= VAR_4)
  FUNC_6(VAR_2);




 FUNC_5(&VAR_3, 0, sizeof(VAR_3));
 FUNC_0(&VAR_2->info_buffer, &VAR_3, sizeof(VAR_3));
 VAR_5 = VAR_3.frames * sizeof(float);

 if (VAR_2->output_buffers[0].size < VAR_5)
  return ((void*)0);




 FUNC_1(&VAR_2->info_buffer, ((void*)0), sizeof(VAR_3));
 FUNC_3(VAR_2->output_data, VAR_5 * VAR_2->channels);

 for (size_t VAR_8 = 0; VAR_8 < VAR_2->channels; VAR_8++) {
  VAR_2->output_audio.data[VAR_8] =
   (uint8_t *)&VAR_2->output_data.array[VAR_8 * VAR_5];

  FUNC_1(&VAR_2->output_buffers[VAR_8],
        VAR_2->output_audio.data[VAR_8], VAR_5);
 }

 VAR_2->output_audio.frames = VAR_3.frames;
 VAR_2->output_audio.timestamp = VAR_3.timestamp;
 return &VAR_2->output_audio;
}
