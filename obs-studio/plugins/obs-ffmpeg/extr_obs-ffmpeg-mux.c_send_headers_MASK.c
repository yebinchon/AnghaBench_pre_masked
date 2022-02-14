
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_muxer {int output; } ;
typedef int obs_encoder_t ;


 int * FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct ffmpeg_muxer*,int *,size_t) ;
 int FUNC_2 (struct ffmpeg_muxer*) ;

__attribute__((used)) static bool FUNC_3(struct ffmpeg_muxer *VAR_0)
{
 obs_encoder_t *VAR_1;
 size_t VAR_2 = 0;

 if (!FUNC_2(VAR_0))
  return 0;

 do {
  VAR_1 = FUNC_0(VAR_0->output, VAR_2);
  if (VAR_1) {
   if (!FUNC_1(VAR_0, VAR_1, VAR_2)) {
    return 0;
   }
   VAR_2++;
  }
 } while (VAR_1);

 return 1;
}
