
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int pcm; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct device*,int ,int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_1(VAR_4,
            VAR_0);
 struct device *VAR_6 = VAR_5->dev->parent;
 FUNC_0(VAR_4->pcm, VAR_3,
           VAR_6, VAR_2, VAR_1);
 return 0;
}
