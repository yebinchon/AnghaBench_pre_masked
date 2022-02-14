
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct audio_output_data {struct audio_output_data** data; } ;
struct audio_output {int block_size; size_t planes; int (* input_cb ) (int ,int ,int ,int *,int,struct audio_output_data*) ;int input_param; struct audio_mix* mixes; int input_mutex; } ;
struct TYPE_2__ {scalar_t__ num; } ;
struct audio_mix {struct audio_output_data** buffer; TYPE_1__ inputs; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,size_t) ;
 int FUNC_1 (struct audio_output*,size_t) ;
 int FUNC_2 (struct audio_output*,size_t,int ,int) ;
 int FUNC_3 (struct audio_output_data*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int *,int,struct audio_output_data*) ;

__attribute__((used)) static void FUNC_7(struct audio_output *VAR_4, uint64_t VAR_5,
        uint64_t VAR_6)
{
 size_t VAR_7 = VAR_0 * VAR_4->block_size;
 struct audio_output_data VAR_8[VAR_3];
 uint32_t VAR_9 = 0;
 uint64_t VAR_10 = 0;
 bool VAR_11;

 FUNC_3(VAR_8, 0, sizeof(VAR_8));







 FUNC_4(&VAR_4->input_mutex);
 for (size_t VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_4->mixes[VAR_12].inputs.num)
   VAR_9 |= (1 << VAR_12);
 }
 FUNC_5(&VAR_4->input_mutex);


 for (size_t VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  struct audio_mix *VAR_14 = &VAR_4->mixes[VAR_13];

  FUNC_3(VAR_14->buffer[0], 0,
         VAR_0 * VAR_2 *
          sizeof(float));

  for (size_t VAR_15 = 0; VAR_15 < VAR_4->planes; VAR_15++)
   VAR_8[VAR_13].data[VAR_15] = VAR_14->buffer[VAR_15];
 }


 VAR_11 = VAR_4->input_cb(VAR_4->input_param, VAR_6, VAR_5,
      &VAR_10, VAR_9, VAR_8);
 if (!VAR_11)
  return;


 FUNC_1(VAR_4, VAR_7);


 for (size_t VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
  FUNC_2(VAR_4, VAR_16, VAR_10, VAR_0);
}
