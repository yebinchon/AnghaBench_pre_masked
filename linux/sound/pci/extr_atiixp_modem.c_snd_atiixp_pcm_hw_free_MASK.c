
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atiixp_modem {int dummy; } ;
struct atiixp_dma {int dummy; } ;
struct TYPE_2__ {struct atiixp_dma* private_data; } ;


 int FUNC_0 (struct atiixp_modem*,struct atiixp_dma*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct atiixp_modem* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct atiixp_modem *VAR_1 = FUNC_2(VAR_0);
 struct atiixp_dma *VAR_2 = VAR_0->runtime->private_data;

 FUNC_0(VAR_1, VAR_2, VAR_0);
 FUNC_1(VAR_0);
 return 0;
}
