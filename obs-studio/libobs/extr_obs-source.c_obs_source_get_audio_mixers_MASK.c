
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int output_flags; } ;
struct TYPE_6__ {int audio_mixers; TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,char*) ;

uint32_t FUNC_1(const obs_source_t *VAR_1)
{
 if (!FUNC_0(VAR_1, "obs_source_get_audio_mixers"))
  return 0;
 if ((VAR_1->info.output_flags & VAR_0) == 0)
  return 0;

 return VAR_1->audio_mixers;
}
