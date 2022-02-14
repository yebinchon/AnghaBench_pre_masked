
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_card_asihpi_pcm {int h_stream; } ;
struct TYPE_2__ {struct snd_card_asihpi_pcm* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_card_asihpi_pcm *VAR_1 = VAR_0->runtime->private_data;

 FUNC_0(FUNC_1(VAR_1->h_stream));
 return 0;
}
