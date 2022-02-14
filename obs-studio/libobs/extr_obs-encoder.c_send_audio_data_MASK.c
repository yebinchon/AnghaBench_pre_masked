
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct obs_encoder {size_t planes; scalar_t__ framesize; int cur_pts; scalar_t__ framesize_bytes; int * audio_output_buffer; int * audio_input_buffer; } ;
struct encoder_frame {int pts; void* frames; void** linesize; int * data; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (struct obs_encoder*,struct encoder_frame*) ;
 int FUNC_2 (struct encoder_frame*,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct obs_encoder *VAR_0)
{
 struct encoder_frame VAR_1;

 FUNC_2(&VAR_1, 0, sizeof(struct encoder_frame));

 for (size_t VAR_2 = 0; VAR_2 < VAR_0->planes; VAR_2++) {
  FUNC_0(&VAR_0->audio_input_buffer[VAR_2],
        VAR_0->audio_output_buffer[VAR_2],
        VAR_0->framesize_bytes);

  VAR_1.data[VAR_2] = VAR_0->audio_output_buffer[VAR_2];
  VAR_1.linesize[VAR_2] = (uint32_t)VAR_0->framesize_bytes;
 }

 VAR_1.frames = (uint32_t)VAR_0->framesize;
 VAR_1.pts = VAR_0->cur_pts;

 if (!FUNC_1(VAR_0, &VAR_1))
  return 0;

 VAR_0->cur_pts += VAR_0->framesize;
 return 1;
}
