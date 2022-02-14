
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {scalar_t__ dev_registered; int dev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_pcm_runtime *VAR_0)
{
 if (VAR_0->dev_registered) {

  FUNC_0(VAR_0->dev);
  VAR_0->dev_registered = 0;
 }
}
