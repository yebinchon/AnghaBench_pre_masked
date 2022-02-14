
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdif_in_dev {scalar_t__ io_base; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct spdif_in_dev* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_2,
  struct snd_soc_dai *VAR_3)
{
 struct spdif_in_dev *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2->stream != VAR_0)
  return;

 FUNC_1(0x0, VAR_4->io_base + VAR_1);
}
