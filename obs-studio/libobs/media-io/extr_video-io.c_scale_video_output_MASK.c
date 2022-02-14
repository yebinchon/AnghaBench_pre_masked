
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct video_input {scalar_t__ cur_frame; scalar_t__ scaler; struct video_frame* frame; } ;
struct video_frame {int * linesize; int * data; } ;
struct video_data {int * linesize; int * data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int *,int *,int const* const*,int *) ;

__attribute__((used)) static inline bool FUNC_2(struct video_input *VAR_3,
          struct video_data *VAR_4)
{
 bool VAR_5 = 1;

 if (VAR_3->scaler) {
  struct video_frame *VAR_6;

  if (++VAR_3->cur_frame == VAR_2)
   VAR_3->cur_frame = 0;

  VAR_6 = &VAR_3->frame[VAR_3->cur_frame];

  VAR_5 = FUNC_1(VAR_3->scaler, VAR_6->data,
          VAR_6->linesize,
          (const uint8_t *const *)VAR_4->data,
          VAR_4->linesize);

  if (VAR_5) {
   for (size_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    VAR_4->data[VAR_7] = VAR_6->data[VAR_7];
    VAR_4->linesize[VAR_7] = VAR_6->linesize[VAR_7];
   }
  } else {
   FUNC_0(VAR_0, "video-io: Could not scale frame!");
  }
 }

 return VAR_5;
}
