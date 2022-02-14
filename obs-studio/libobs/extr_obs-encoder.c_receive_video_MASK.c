
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {scalar_t__ timestamp; int * linesize; int * data; } ;
struct obs_encoder {scalar_t__ first_raw_ts; scalar_t__ start_ts; scalar_t__ timebase_num; int cur_pts; int pause; int first_received; struct obs_encoder* paired_encoder; } ;
struct encoder_frame {int frames; int pts; int * linesize; int * data; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct obs_encoder*,struct encoder_frame*) ;
 int FUNC_1 (struct encoder_frame*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, struct video_data *VAR_3)
{
 FUNC_3(VAR_1);

 struct obs_encoder *VAR_4 = VAR_2;
 struct obs_encoder *VAR_5 = VAR_4->paired_encoder;
 struct encoder_frame VAR_6;

 if (!VAR_4->first_received && VAR_5) {
  if (!VAR_5->first_received ||
      VAR_5->first_raw_ts > VAR_3->timestamp) {
   goto wait_for_audio;
  }
 }

 if (FUNC_4(&VAR_4->pause, VAR_3->timestamp))
  goto wait_for_audio;

 FUNC_1(&VAR_6, 0, sizeof(struct encoder_frame));

 for (size_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6.data[VAR_7] = VAR_3->data[VAR_7];
  VAR_6.linesize[VAR_7] = VAR_3->linesize[VAR_7];
 }

 if (!VAR_4->start_ts)
  VAR_4->start_ts = VAR_3->timestamp;

 VAR_6.frames = 1;
 VAR_6.pts = VAR_4->cur_pts;

 if (FUNC_0(VAR_4, &VAR_6))
  VAR_4->cur_pts += VAR_4->timebase_num;

wait_for_audio:
 FUNC_2(VAR_1);
}
