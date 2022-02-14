
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; TYPE_2__* card; } ;
struct snd_pcm {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int buffer_bytes_max; } ;
struct TYPE_5__ {TYPE_1__* snd_card; } ;
struct TYPE_4__ {struct device* dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct snd_pcm*,int ,struct device*,int ,int ) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_2)
{
 struct device *VAR_3 = VAR_2->card->snd_card->dev;
 struct snd_pcm *VAR_4 = VAR_2->pcm;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, FUNC_0(33));
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_4,
  VAR_0, VAR_3,
  VAR_1.buffer_bytes_max,
  VAR_1.buffer_bytes_max);
 return 0;
}
