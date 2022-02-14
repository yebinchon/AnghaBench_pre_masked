
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct s3c_pcm_info {int sclk_per_fs; } ;


 int VAR_0 ;

 struct s3c_pcm_info* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
      int VAR_2, int VAR_3)
{
 struct s3c_pcm_info *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  VAR_4->sclk_per_fs = VAR_3;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
