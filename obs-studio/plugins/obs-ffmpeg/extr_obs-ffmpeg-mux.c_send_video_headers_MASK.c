
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int output; } ;
struct encoder_packet {int timebase_den; int size; int data; int type; } ;
typedef int obs_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct ffmpeg_muxer*,struct encoder_packet*) ;

__attribute__((used)) static bool FUNC_3(struct ffmpeg_muxer *VAR_1)
{
 obs_encoder_t *VAR_2 = FUNC_1(VAR_1->output);

 struct encoder_packet VAR_3 = {.type = VAR_0,
     .timebase_den = 1};

 FUNC_0(VAR_2, &VAR_3.data, &VAR_3.size);
 return FUNC_2(VAR_1, &VAR_3);
}
