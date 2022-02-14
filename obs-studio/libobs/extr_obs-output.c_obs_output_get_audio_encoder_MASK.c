
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {int ** audio_encoders; TYPE_1__ info; } ;
typedef TYPE_2__ obs_output_t ;
typedef int obs_encoder_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__ const*,char*) ;

obs_encoder_t *FUNC_1(const obs_output_t *VAR_2,
         size_t VAR_3)
{
 if (!FUNC_0(VAR_2, "obs_output_get_audio_encoder"))
  return ((void*)0);

 if ((VAR_2->info.flags & VAR_1) != 0) {
  if (VAR_3 >= VAR_0) {
   return ((void*)0);
  }
 } else {
  if (VAR_3 > 0) {
   return ((void*)0);
  }
 }

 return VAR_2->audio_encoders[VAR_3];
}
