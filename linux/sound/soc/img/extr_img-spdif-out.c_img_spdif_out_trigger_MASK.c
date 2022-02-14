
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct img_spdif_out {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (struct img_spdif_out*,int ) ;
 int FUNC_1 (struct img_spdif_out*) ;
 int FUNC_2 (struct img_spdif_out*,int ,int ) ;
 struct img_spdif_out* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3, int VAR_4,
   struct snd_soc_dai *VAR_5)
{
 struct img_spdif_out *VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7;
 unsigned long VAR_8;

 switch (VAR_4) {
 case 130:
 case 131:
 case 132:
  VAR_7 = FUNC_0(VAR_6, VAR_1);
  VAR_7 |= VAR_2;
  FUNC_2(VAR_6, VAR_7, VAR_1);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_4(&VAR_6->lock, VAR_8);
  FUNC_1(VAR_6);
  FUNC_5(&VAR_6->lock, VAR_8);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
