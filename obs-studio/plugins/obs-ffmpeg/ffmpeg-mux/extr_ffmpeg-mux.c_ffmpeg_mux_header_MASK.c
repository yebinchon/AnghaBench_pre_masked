
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ffmpeg_mux {int * audio_header; int video_header; } ;
struct ffm_packet_info {scalar_t__ type; size_t index; scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_1(struct ffmpeg_mux *VAR_1, uint8_t *VAR_2,
         struct ffm_packet_info *VAR_3)
{
 if (VAR_3->type == VAR_0) {
  FUNC_0(&VAR_1->video_header, VAR_2, (size_t)VAR_3->size);
 } else {
  FUNC_0(&VAR_1->audio_header[VAR_3->index], VAR_2,
      (size_t)VAR_3->size);
 }
}
