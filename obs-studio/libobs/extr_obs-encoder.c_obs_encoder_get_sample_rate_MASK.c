
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {scalar_t__ samplerate; int media; TYPE_1__ info; } ;
typedef TYPE_2__ obs_encoder_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*,char*) ;

uint32_t FUNC_4(const obs_encoder_t *VAR_2)
{
 if (!FUNC_3(VAR_2, "obs_encoder_get_sample_rate"))
  return 0;
 if (VAR_2->info.type != VAR_1) {
  FUNC_1(VAR_0,
       "obs_encoder_get_sample_rate: "
       "encoder '%s' is not an audio encoder",
       FUNC_2(VAR_2));
  return 0;
 }
 if (!VAR_2->media)
  return 0;

 return VAR_2->samplerate != 0
         ? VAR_2->samplerate
         : FUNC_0(VAR_2->media);
}
