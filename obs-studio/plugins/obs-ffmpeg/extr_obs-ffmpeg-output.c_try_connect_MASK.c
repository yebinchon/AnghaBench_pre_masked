
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_t ;
struct video_output_info {scalar_t__ range; scalar_t__ colorspace; int format; } ;
struct TYPE_4__ {int audio_format; scalar_t__ last_error; } ;
struct ffmpeg_output {int active; int write_thread_active; int output; TYPE_1__ ff_data; int write_thread; } ;
struct ffmpeg_cfg {int video_bitrate; int audio_bitrate; int gop_size; int video_encoder_id; int audio_encoder_id; int scale_width; int scale_height; int width; int height; scalar_t__ format; int audio_tracks; int color_space; int color_range; int audio_mix_count; void* audio_settings; void* video_settings; void* audio_encoder; void* video_encoder; void* muxer_settings; void* format_mime_type; void* format_name; void* url; } ;
struct audio_convert_info {int format; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct ffmpeg_cfg*) ;
 int FUNC_3 (int ,TYPE_1__*,char*) ;
 int FUNC_4 (struct ffmpeg_output*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 void* FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int * FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,struct audio_convert_info*) ;
 int FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (int ,int *) ;
 int * FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int *,int *,int ,struct ffmpeg_output*) ;
 int FUNC_24 (int *) ;
 struct video_output_info* FUNC_25 (int *) ;
 int VAR_11 ;

__attribute__((used)) static bool FUNC_26(struct ffmpeg_output *VAR_12)
{
 video_t *VAR_13 = FUNC_21(VAR_12->output);
 const struct video_output_info *VAR_14 = FUNC_25(VAR_13);
 struct ffmpeg_cfg VAR_15;
 obs_data_t *VAR_16;
 bool VAR_17;
 int VAR_18;

 VAR_16 = FUNC_16(VAR_12->output);

 FUNC_11(VAR_16, "gop_size", 120);

 VAR_15.url = FUNC_9(VAR_16, "url");
 VAR_15.format_name = FUNC_7(VAR_16, "format_name");
 VAR_15.format_mime_type =
  FUNC_7(VAR_16, "format_mime_type");
 VAR_15.muxer_settings = FUNC_9(VAR_16, "muxer_settings");
 VAR_15.video_bitrate = (int)FUNC_8(VAR_16, "video_bitrate");
 VAR_15.audio_bitrate = (int)FUNC_8(VAR_16, "audio_bitrate");
 VAR_15.gop_size = (int)FUNC_8(VAR_16, "gop_size");
 VAR_15.video_encoder = FUNC_7(VAR_16, "video_encoder");
 VAR_15.video_encoder_id =
  (int)FUNC_8(VAR_16, "video_encoder_id");
 VAR_15.audio_encoder = FUNC_7(VAR_16, "audio_encoder");
 VAR_15.audio_encoder_id =
  (int)FUNC_8(VAR_16, "audio_encoder_id");
 VAR_15.video_settings = FUNC_9(VAR_16, "video_settings");
 VAR_15.audio_settings = FUNC_9(VAR_16, "audio_settings");
 VAR_15.scale_width = (int)FUNC_8(VAR_16, "scale_width");
 VAR_15.scale_height = (int)FUNC_8(VAR_16, "scale_height");
 VAR_15.width = (int)FUNC_17(VAR_12->output);
 VAR_15.height = (int)FUNC_14(VAR_12->output);
 VAR_15.format =
  FUNC_22(FUNC_24(VAR_13));
 VAR_15.audio_tracks = (int)FUNC_15(VAR_12->output);
 VAR_15.audio_mix_count = FUNC_6(VAR_15.audio_tracks);

 if (FUNC_5(VAR_14->format)) {
  VAR_15.color_range = VAR_14->range == VAR_10
          ? VAR_0
          : VAR_1;
  VAR_15.color_space = VAR_14->colorspace == VAR_9
          ? VAR_4
          : VAR_3;
 } else {
  VAR_15.color_range = VAR_2;
  VAR_15.color_space = VAR_5;
 }

 if (VAR_15.format == VAR_6) {
  FUNC_0(VAR_7, "invalid pixel format used for FFmpeg output");
  return 0;
 }

 if (!VAR_15.scale_width)
  VAR_15.scale_width = VAR_15.width;
 if (!VAR_15.scale_height)
  VAR_15.scale_height = VAR_15.height;

 VAR_17 = FUNC_2(&VAR_12->ff_data, &VAR_15);
 FUNC_10(VAR_16);

 if (!VAR_17) {
  if (VAR_12->ff_data.last_error) {
   FUNC_19(VAR_12->output,
        VAR_12->ff_data.last_error);
  }
  FUNC_1(&VAR_12->ff_data);
  return 0;
 }

 struct audio_convert_info VAR_19 = {.format =
       VAR_12->ff_data.audio_format};

 VAR_12->active = 1;

 if (!FUNC_13(VAR_12->output, 0))
  return 0;

 VAR_18 = FUNC_23(&VAR_12->write_thread, ((void*)0), VAR_11, VAR_12);
 if (VAR_18 != 0) {
  FUNC_3(VAR_8, &VAR_12->ff_data,
     "ffmpeg_output_start: failed to create write "
     "thread.");
  FUNC_4(VAR_12);
  return 0;
 }

 FUNC_20(VAR_12->output, ((void*)0));
 FUNC_18(VAR_12->output, &VAR_19);
 FUNC_12(VAR_12->output, 0);
 VAR_12->write_thread_active = 1;
 return 1;
}
