
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct imx_ssi {int flags; int base; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (int) ;
 struct imx_ssi* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_5,
        struct snd_pcm_hw_params *VAR_6,
        struct snd_soc_dai *VAR_7)
{
 struct imx_ssi *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9, VAR_10;


 if (VAR_5->stream == VAR_1)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_2;

 if (VAR_8->flags & VAR_0)
  VAR_9 = VAR_3;

 VAR_10 = FUNC_2(VAR_8->base + VAR_9) & ~VAR_4;


 switch (FUNC_1(VAR_6)) {
 case 130:
  VAR_10 |= FUNC_0(16);
  break;
 case 129:
  VAR_10 |= FUNC_0(20);
  break;
 case 128:
  VAR_10 |= FUNC_0(24);
  break;
 }

 FUNC_4(VAR_10, VAR_8->base + VAR_9);

 return 0;
}
