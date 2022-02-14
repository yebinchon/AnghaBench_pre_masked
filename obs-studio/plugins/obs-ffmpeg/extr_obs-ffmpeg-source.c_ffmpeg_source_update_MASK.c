
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_source {int is_looping; int close_when_inactive; int range; int buffering_mb; int speed_percent; int is_local_file; int media_valid; void* restart_on_activate; int source; int media; void* seekable; void* is_clear_on_media_end; void* is_hw_decoding; int * input_format; int * input; } ;
typedef int obs_data_t ;
typedef enum video_range_type { ____Placeholder_video_range_type } video_range_type ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (struct ffmpeg_source*,char*,char*) ;
 int FUNC_3 (struct ffmpeg_source*) ;
 int FUNC_4 (struct ffmpeg_source*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_0, obs_data_t *VAR_1)
{
 struct ffmpeg_source *VAR_2 = VAR_0;

 bool VAR_3 = FUNC_6(VAR_1, "is_local_file");

 char *VAR_4;
 char *VAR_5;

 FUNC_0(VAR_2->input);
 FUNC_0(VAR_2->input_format);

 if (VAR_3) {
  VAR_4 = (char *)FUNC_8(VAR_1, "local_file");
  VAR_5 = ((void*)0);
  VAR_2->is_looping = FUNC_6(VAR_1, "looping");
  VAR_2->close_when_inactive =
   FUNC_6(VAR_1, "close_when_inactive");
 } else {
  VAR_4 = (char *)FUNC_8(VAR_1, "input");
  VAR_5 =
   (char *)FUNC_8(VAR_1, "input_format");
  VAR_2->is_looping = 0;
  VAR_2->close_when_inactive = 1;
 }

 VAR_2->input = VAR_4 ? FUNC_1(VAR_4) : ((void*)0);
 VAR_2->input_format = VAR_5 ? FUNC_1(VAR_5) : ((void*)0);

 VAR_2->is_hw_decoding = FUNC_6(VAR_1, "hw_decode");

 VAR_2->is_clear_on_media_end =
  FUNC_6(VAR_1, "clear_on_media_end");
 VAR_2->restart_on_activate =
  FUNC_6(VAR_1, "restart_on_activate");
 VAR_2->range = (enum video_range_type)FUNC_7(VAR_1,
          "color_range");
 VAR_2->buffering_mb = (int)FUNC_7(VAR_1, "buffering_mb");
 VAR_2->speed_percent = (int)FUNC_7(VAR_1, "speed_percent");
 VAR_2->is_local_file = VAR_3;
 VAR_2->seekable = FUNC_6(VAR_1, "seekable");

 if (VAR_2->speed_percent < 1 || VAR_2->speed_percent > 200)
  VAR_2->speed_percent = 100;

 if (VAR_2->media_valid) {
  FUNC_5(&VAR_2->media);
  VAR_2->media_valid = 0;
 }

 bool VAR_6 = FUNC_9(VAR_2->source);
 if (!VAR_2->close_when_inactive || VAR_6)
  FUNC_3(VAR_2);

 FUNC_2(VAR_2, VAR_4, VAR_5);
 if (!VAR_2->restart_on_activate || VAR_6)
  FUNC_4(VAR_2);
}
