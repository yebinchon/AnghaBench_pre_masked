
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int speakers; } ;
struct TYPE_6__ {TYPE_1__ sample_info; } ;
typedef TYPE_2__ obs_source_t ;
typedef enum speaker_layout { ____Placeholder_speaker_layout } speaker_layout ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;

enum speaker_layout FUNC_1(obs_source_t *VAR_1)
{
 if (!FUNC_0(VAR_1, "obs_source_get_audio_channels"))
  return VAR_0;

 return VAR_1->sample_info.speakers;
}
