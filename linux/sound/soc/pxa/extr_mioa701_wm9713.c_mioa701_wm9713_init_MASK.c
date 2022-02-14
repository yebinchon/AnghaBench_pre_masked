
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* codec_dai; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_pcm_runtime *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->codec_dai->component;


 FUNC_0(VAR_3, VAR_1, 0x100, 0x100);


 FUNC_0(VAR_3, VAR_0, 0xc000, 0xc000);

 return 0;
}
