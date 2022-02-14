
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct dw_i2s_dev {int i2s_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct dw_i2s_dev* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct dw_i2s_dev *VAR_5 = FUNC_1(VAR_4);

 if (VAR_3->stream == VAR_1)
  FUNC_0(VAR_5->i2s_base, VAR_2, 1);
 else
  FUNC_0(VAR_5->i2s_base, VAR_0, 1);

 return 0;
}
