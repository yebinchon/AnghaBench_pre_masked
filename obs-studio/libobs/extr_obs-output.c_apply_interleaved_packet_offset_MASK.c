
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {scalar_t__* audio_offsets; scalar_t__ video_offset; } ;
struct encoder_packet {scalar_t__ type; size_t track_idx; int dts_usec; int pts; int dts; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct encoder_packet*) ;

__attribute__((used)) static inline void FUNC_1(struct obs_output *VAR_1,
         struct encoder_packet *VAR_2)
{
 int64_t VAR_3;





 VAR_3 = (VAR_2->type == VAR_0)
    ? VAR_1->video_offset
    : VAR_1->audio_offsets[VAR_2->track_idx];

 VAR_2->dts -= VAR_3;
 VAR_2->pts -= VAR_3;







 VAR_2->dts_usec = FUNC_0(VAR_2);
}
