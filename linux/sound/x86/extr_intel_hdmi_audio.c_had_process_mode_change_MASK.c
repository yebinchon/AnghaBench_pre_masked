
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_intelhad {int link_rate; scalar_t__ dp_output; int dev; int tmds_clock_speed; } ;
struct TYPE_2__ {int rate; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_intelhad*,int) ;
 int FUNC_2 (int ,int ,int ,int ,struct snd_intelhad*) ;
 int FUNC_3 (int ,int *,struct snd_intelhad*) ;
 struct snd_pcm_substream* FUNC_4 (struct snd_intelhad*) ;
 int FUNC_5 (struct snd_intelhad*) ;

__attribute__((used)) static int FUNC_6(struct snd_intelhad *VAR_0)
{
 struct snd_pcm_substream *VAR_1;
 int VAR_2 = 0;
 u32 VAR_3, VAR_4;
 u32 VAR_5 = 0;

 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  return 0;


 FUNC_1(VAR_0, 0);


 VAR_3 = VAR_0->tmds_clock_speed;

 VAR_2 = FUNC_3(VAR_1->runtime->rate, &VAR_4, VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_0->dev,
   "programming N value failed %#x\n", VAR_2);
  goto out;
 }

 if (VAR_0->dp_output)
  VAR_5 = VAR_0->link_rate;

 FUNC_2(VAR_1->runtime->rate, VAR_3, VAR_5,
       VAR_4, VAR_0);


 FUNC_1(VAR_0, 1);

out:
 FUNC_5(VAR_0);
 return VAR_2;
}
