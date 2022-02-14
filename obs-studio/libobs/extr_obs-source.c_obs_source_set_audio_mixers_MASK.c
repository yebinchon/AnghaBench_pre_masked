
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct calldata {int dummy; } ;
typedef int stack ;
struct TYPE_7__ {int signals; } ;
struct TYPE_8__ {int output_flags; } ;
struct TYPE_9__ {scalar_t__ audio_mixers; TYPE_1__ context; TYPE_2__ info; } ;
typedef TYPE_3__ obs_source_t ;


 int VAR_0 ;
 int FUNC_0 (struct calldata*,int *,int) ;
 scalar_t__ FUNC_1 (struct calldata*,char*) ;
 int FUNC_2 (struct calldata*,char*,scalar_t__) ;
 int FUNC_3 (struct calldata*,char*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (int ,char*,struct calldata*) ;

void FUNC_6(obs_source_t *VAR_1, uint32_t VAR_2)
{
 struct calldata VAR_3;
 uint8_t VAR_4[128];

 if (!FUNC_4(VAR_1, "obs_source_set_audio_mixers"))
  return;
 if ((VAR_1->info.output_flags & VAR_0) == 0)
  return;

 if (VAR_1->audio_mixers == VAR_2)
  return;

 FUNC_0(&VAR_3, VAR_4, sizeof(VAR_4));
 FUNC_3(&VAR_3, "source", VAR_1);
 FUNC_2(&VAR_3, "mixers", VAR_2);

 FUNC_5(VAR_1->context.signals, "audio_mixers", &VAR_3);

 VAR_2 = (uint32_t)FUNC_1(&VAR_3, "mixers");

 VAR_1->audio_mixers = VAR_2;
}
