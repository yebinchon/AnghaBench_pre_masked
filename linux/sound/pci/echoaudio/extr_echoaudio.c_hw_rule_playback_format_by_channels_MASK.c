
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int* bits; } ;
struct snd_interval {int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_mask*) ;
 int FUNC_3 (struct snd_mask*,struct snd_mask*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_hw_params *VAR_6,
            struct snd_pcm_hw_rule *VAR_7)
{
 struct snd_interval *VAR_8 = FUNC_0(VAR_6,
         VAR_4);
 struct snd_mask *VAR_9 = FUNC_1(VAR_6, VAR_5);
 struct snd_mask VAR_10;
 u64 VAR_11;
 FUNC_2(&VAR_10);

 VAR_11 = VAR_10.bits[0] + ((u64)VAR_10.bits[1] << 32);


 if (VAR_8->min > 2) {
  VAR_11 &= VAR_0 |
    VAR_1 |
    VAR_3;

 } else if (VAR_8->max == 1)
  VAR_11 &= VAR_3 | VAR_2;


 else if (VAR_8->min == 2 && VAR_8->max == 2)
  VAR_11 &= ~VAR_2;

 else
  return 0;

 VAR_10.bits[0] &= (u32)VAR_11;
 VAR_10.bits[1] &= (u32)(VAR_11 >> 32);
 return FUNC_3(VAR_9, &VAR_10);
}
