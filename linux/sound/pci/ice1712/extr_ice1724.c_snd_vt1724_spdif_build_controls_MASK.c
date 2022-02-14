
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
struct snd_ice1712 {TYPE_3__ spdif; TYPE_2__* pcm; int card; int own_routing; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (int *,struct snd_ice1712*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_7)
{
 int VAR_8;
 struct snd_kcontrol *VAR_9;

 if (FUNC_0(!VAR_7->pcm))
  return -VAR_0;

 if (!VAR_7->own_routing) {
  VAR_8 = FUNC_1(VAR_7->card,
   FUNC_2(&VAR_1, VAR_7));
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_7->card, FUNC_2(&VAR_6, VAR_7));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_7->card, VAR_9 = FUNC_2(&VAR_2, VAR_7));
 if (VAR_8 < 0)
  return VAR_8;
 VAR_9->id.device = VAR_7->pcm->device;
 VAR_8 = FUNC_1(VAR_7->card, VAR_9 = FUNC_2(&VAR_3, VAR_7));
 if (VAR_8 < 0)
  return VAR_8;
 VAR_9->id.device = VAR_7->pcm->device;
 VAR_8 = FUNC_1(VAR_7->card, VAR_9 = FUNC_2(&VAR_4, VAR_7));
 if (VAR_8 < 0)
  return VAR_8;
 VAR_9->id.device = VAR_7->pcm->device;







 return 0;
}
