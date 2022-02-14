
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int pcm; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int buffer_bytes_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_soc_pcm_runtime*,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_3,
            VAR_0);
 FUNC_0(VAR_3->pcm,
   VAR_1, VAR_4->dev,
   VAR_2.buffer_bytes_max,
   VAR_2.buffer_bytes_max);
 return 0;
}
