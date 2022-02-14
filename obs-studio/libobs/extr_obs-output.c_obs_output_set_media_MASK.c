
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_t ;
struct TYPE_4__ {int * audio; int * video; } ;
typedef TYPE_1__ obs_output_t ;
typedef int audio_t ;


 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(obs_output_t *VAR_0, video_t *VAR_1, audio_t *VAR_2)
{
 if (!FUNC_0(VAR_0, "obs_output_set_media"))
  return;

 VAR_0->video = VAR_1;
 VAR_0->audio = VAR_2;
}
