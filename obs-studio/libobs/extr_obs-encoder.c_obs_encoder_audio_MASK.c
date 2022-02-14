
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {int * media; TYPE_1__ info; } ;
typedef TYPE_2__ obs_encoder_t ;
typedef int audio_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*,char*) ;

audio_t *FUNC_3(const obs_encoder_t *VAR_2)
{
 if (!FUNC_2(VAR_2, "obs_encoder_audio"))
  return ((void*)0);
 if (VAR_2->info.type != VAR_1) {
  FUNC_0(VAR_0,
       "obs_encoder_set_audio: "
       "encoder '%s' is not an audio encoder",
       FUNC_1(VAR_2));
  return ((void*)0);
 }

 return VAR_2->media;
}
