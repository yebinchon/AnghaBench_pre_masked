
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int device; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_6__ {struct snd_kcontrol* stream_ctl; } ;
struct snd_ice1712 {TYPE_3__ spdif; TYPE_2__* pcm_pro; int card; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (int *,struct snd_ice1712*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(struct snd_ice1712 *VAR_5)
{
 int VAR_6;
 struct snd_kcontrol *VAR_7;

 if (FUNC_0(!VAR_5->pcm_pro))
  return -VAR_0;
 VAR_6 = FUNC_1(VAR_5->card, VAR_7 = FUNC_2(&VAR_1, VAR_5));
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7->id.device = VAR_5->pcm_pro->device;
 VAR_6 = FUNC_1(VAR_5->card, VAR_7 = FUNC_2(&VAR_2, VAR_5));
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7->id.device = VAR_5->pcm_pro->device;
 VAR_6 = FUNC_1(VAR_5->card, VAR_7 = FUNC_2(&VAR_3, VAR_5));
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7->id.device = VAR_5->pcm_pro->device;
 VAR_6 = FUNC_1(VAR_5->card, VAR_7 = FUNC_2(&VAR_4, VAR_5));
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7->id.device = VAR_5->pcm_pro->device;
 VAR_5->spdif.stream_ctl = VAR_7;
 return 0;
}
