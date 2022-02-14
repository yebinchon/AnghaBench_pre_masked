
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct ffmpeg_mux {int output; } ;
struct ffm_packet_info {scalar_t__ keyframe; int dts; int pts; scalar_t__ size; } ;
struct TYPE_4__ {int size; int stream_index; int flags; void* dts; void* pts; int * data; int member_0; } ;
typedef TYPE_1__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct ffmpeg_mux*,struct ffm_packet_info*) ;
 void* FUNC_3 (struct ffmpeg_mux*,int ,int) ;

__attribute__((used)) static inline bool FUNC_4(struct ffmpeg_mux *VAR_1, uint8_t *VAR_2,
         struct ffm_packet_info *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1, VAR_3);
 AVPacket VAR_5 = {0};


 if (VAR_4 == -1) {
  return 1;
 }

 FUNC_0(&VAR_5);

 VAR_5.data = VAR_2;
 VAR_5.size = (int)VAR_3->size;
 VAR_5.stream_index = VAR_4;
 VAR_5.pts = FUNC_3(VAR_1, VAR_3->pts, VAR_4);
 VAR_5.dts = FUNC_3(VAR_1, VAR_3->dts, VAR_4);

 if (VAR_3->keyframe)
  VAR_5.flags = VAR_0;

 return FUNC_1(VAR_1->output, &VAR_5) >= 0;
}
