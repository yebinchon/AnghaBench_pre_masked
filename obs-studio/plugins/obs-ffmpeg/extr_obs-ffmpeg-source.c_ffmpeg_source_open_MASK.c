
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_media_info {int buffering; int is_local_file; int hardware_decoding; int force_range; int speed; int format; scalar_t__* path; int stop_cb; int a_cb; int v_preload_cb; int v_cb; struct ffmpeg_source* opaque; } ;
struct ffmpeg_source {int buffering_mb; int media; int media_valid; int seekable; int is_local_file; int is_hw_decoding; int range; int speed_percent; int input_format; scalar_t__* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct mp_media_info*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ffmpeg_source *VAR_4)
{
 if (VAR_4->input && *VAR_4->input) {
  struct mp_media_info VAR_5 = {
   .opaque = VAR_4,
   .v_cb = VAR_1,
   .v_preload_cb = VAR_3,
   .a_cb = VAR_0,
   .stop_cb = VAR_2,
   .path = VAR_4->input,
   .format = VAR_4->input_format,
   .buffering = VAR_4->buffering_mb * 1024 * 1024,
   .speed = VAR_4->speed_percent,
   .force_range = VAR_4->range,
   .hardware_decoding = VAR_4->is_hw_decoding,
   .is_local_file = VAR_4->is_local_file || VAR_4->seekable};

  VAR_4->media_valid = FUNC_0(&VAR_4->media, &VAR_5);
 }
}
