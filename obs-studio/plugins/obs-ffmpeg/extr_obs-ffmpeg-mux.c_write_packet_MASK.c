
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ffmpeg_muxer {size_t total_bytes; int pipe; } ;
struct ffm_packet_info {int index; int keyframe; int type; int size; int dts; int pts; } ;
struct encoder_packet {scalar_t__ type; int size; int const* data; int keyframe; scalar_t__ track_idx; int dts; int pts; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (struct ffmpeg_muxer*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(struct ffmpeg_muxer *VAR_3,
    struct encoder_packet *VAR_4)
{
 bool VAR_5 = VAR_4->type == VAR_2;
 size_t VAR_6;

 struct ffm_packet_info VAR_7 = {.pts = VAR_4->pts,
           .dts = VAR_4->dts,
           .size = (uint32_t)VAR_4->size,
           .index = (int)VAR_4->track_idx,
           .type = VAR_5 ? VAR_1
       : VAR_0,
           .keyframe = VAR_4->keyframe};

 VAR_6 = FUNC_0(VAR_3->pipe, (const uint8_t *)&VAR_7,
        sizeof(VAR_7));
 if (VAR_6 != sizeof(VAR_7)) {
  FUNC_2("os_process_pipe_write for info structure failed");
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_6 = FUNC_0(VAR_3->pipe, VAR_4->data, VAR_4->size);
 if (VAR_6 != VAR_4->size) {
  FUNC_2("os_process_pipe_write for packet data failed");
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_3->total_bytes += VAR_4->size;
 return 1;
}
