
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct samsung_i2s_priv {TYPE_1__* variant_regs; scalar_t__ addr; } ;
struct i2s_dai {int dummy; } ;
typedef int snd_pcm_sframes_t ;
struct TYPE_2__ {int ftx0cnt_off; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct i2s_dai*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 struct samsung_i2s_priv* FUNC_6 (struct snd_soc_dai*) ;
 struct i2s_dai* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static snd_pcm_sframes_t
FUNC_8(struct snd_pcm_substream *VAR_3, struct snd_soc_dai *VAR_4)
{
 struct samsung_i2s_priv *VAR_5 = FUNC_6(VAR_4);
 struct i2s_dai *VAR_6 = FUNC_7(VAR_4);
 u32 VAR_7 = FUNC_5(VAR_5->addr + VAR_0);
 snd_pcm_sframes_t VAR_8;

 FUNC_2(!FUNC_4(VAR_4->dev));

 if (VAR_3->stream == VAR_2)
  VAR_8 = FUNC_1(VAR_7);
 else if (FUNC_3(VAR_6))
  VAR_8 = FUNC_0(FUNC_5(VAR_5->addr + VAR_1));
 else
  VAR_8 = (VAR_7 >> VAR_5->variant_regs->ftx0cnt_off) & 0x7f;

 return VAR_8;
}
