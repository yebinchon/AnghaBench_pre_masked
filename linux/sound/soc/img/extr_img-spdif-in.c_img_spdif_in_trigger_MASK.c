
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct img_spdif_in {int active; int lock; int multi_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;






 unsigned long FUNC_0 (struct img_spdif_in*,int ) ;
 int FUNC_1 (struct img_spdif_in*,unsigned long,int ) ;
 struct img_spdif_in* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_5, int VAR_6,
 struct snd_soc_dai *VAR_7)
{
 unsigned long VAR_8;
 struct img_spdif_in *VAR_9 = FUNC_2(VAR_7);
 int VAR_10 = 0;
 u32 VAR_11;

 FUNC_3(&VAR_9->lock, VAR_8);

 switch (VAR_6) {
 case 130:
 case 131:
 case 132:
  VAR_11 = FUNC_0(VAR_9, VAR_1);
  if (VAR_9->multi_freq)
   VAR_11 &= ~VAR_2;
  else
   VAR_11 |= (1UL << VAR_3);
  VAR_11 |= VAR_4;
  FUNC_1(VAR_9, VAR_11, VAR_1);
  VAR_9->active = 1;
  break;
 case 129:
 case 128:
 case 133:
  VAR_11 = FUNC_0(VAR_9, VAR_1);
  VAR_11 &= ~VAR_4;
  FUNC_1(VAR_9, VAR_11, VAR_1);
  VAR_9->active = 0;
  break;
 default:
  VAR_10 = -VAR_0;
 }

 FUNC_4(&VAR_9->lock, VAR_8);

 return VAR_10;
}
