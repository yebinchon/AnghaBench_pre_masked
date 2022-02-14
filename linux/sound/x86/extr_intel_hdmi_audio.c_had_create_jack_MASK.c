
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {int device; } ;
struct snd_intelhad {TYPE_2__* jack; TYPE_1__* card_ctx; } ;
typedef int hdmi_str ;
struct TYPE_4__ {struct snd_intelhad* private_data; } ;
struct TYPE_3__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,TYPE_2__**,int,int) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_intelhad *VAR_1,
      struct snd_pcm *VAR_2)
{
 char VAR_3[32];
 int VAR_4;

 FUNC_1(VAR_3, sizeof(VAR_3),
   "HDMI/DP,pcm=%d", VAR_2->device);

 VAR_4 = FUNC_0(VAR_1->card_ctx->card, VAR_3,
      VAR_0, &VAR_1->jack,
      1, 0);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_1->jack->private_data = VAR_1;
 return 0;
}
