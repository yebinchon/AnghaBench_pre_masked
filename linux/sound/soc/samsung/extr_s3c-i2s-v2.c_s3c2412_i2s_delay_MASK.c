
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct s3c_i2sv2_info {scalar_t__ regs; } ;
typedef int snd_pcm_sframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 struct s3c_i2sv2_info* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_4(struct snd_pcm_substream *VAR_2,
        struct snd_soc_dai *VAR_3)
{
 struct s3c_i2sv2_info *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_4->regs + VAR_0);
 snd_pcm_sframes_t VAR_6;

 if (VAR_2->stream == VAR_1)
  VAR_6 = FUNC_1(VAR_5);
 else
  VAR_6 = FUNC_0(VAR_5);

 return VAR_6;
}
