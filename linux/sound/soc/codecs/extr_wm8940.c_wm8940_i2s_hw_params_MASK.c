
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
    struct snd_pcm_hw_params *VAR_5,
    struct snd_soc_dai *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6->component;
 u16 VAR_8 = FUNC_3(VAR_7, VAR_3) & 0xFD9F;
 u16 VAR_9 = FUNC_3(VAR_7, VAR_1) & 0xFFF1;
 u16 VAR_10 = FUNC_3(VAR_7,
      VAR_2) & 0xFFDF;
 int VAR_11;


 if (VAR_4->stream == VAR_0
     && FUNC_0(VAR_5) == 2)
  VAR_8 |= (1 << 9);

 switch (FUNC_1(VAR_5)) {
 case 8000:
  VAR_9 |= (0x5 << 1);
  break;
 case 11025:
  VAR_9 |= (0x4 << 1);
  break;
 case 16000:
  VAR_9 |= (0x3 << 1);
  break;
 case 22050:
  VAR_9 |= (0x2 << 1);
  break;
 case 32000:
  VAR_9 |= (0x1 << 1);
  break;
 case 44100:
 case 48000:
  break;
 }
 VAR_11 = FUNC_4(VAR_7, VAR_1, VAR_9);
 if (VAR_11)
  goto error_ret;

 switch (FUNC_2(VAR_5)) {
 case 8:
  VAR_10 = VAR_10 | (1 << 5);
  break;
 case 16:
  break;
 case 20:
  VAR_8 |= (1 << 5);
  break;
 case 24:
  VAR_8 |= (2 << 5);
  break;
 case 32:
  VAR_8 |= (3 << 5);
  break;
 }
 VAR_11 = FUNC_4(VAR_7, VAR_2, VAR_10);
 if (VAR_11)
  goto error_ret;
 VAR_11 = FUNC_4(VAR_7, VAR_3, VAR_8);

error_ret:
 return VAR_11;
}
