
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_fifo {int map; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,int,int) ;
 struct axg_fifo* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7,
       struct snd_soc_dai *VAR_8)
{
 struct axg_fifo *VAR_9 = FUNC_6(VAR_8);
 unsigned int VAR_10, VAR_11;

 switch (FUNC_3(VAR_7)) {
 case 8:
  VAR_10 = 0;
  break;
 case 16:
  VAR_10 = 2;
  break;
 case 32:
  VAR_10 = 4;
  break;
 default:
  return -VAR_3;
 }

 VAR_11 = FUNC_4(VAR_7);

 FUNC_5(VAR_9->map, VAR_4,
      VAR_2 |
      VAR_1 |
      VAR_0,
      FUNC_2(VAR_10) |
      FUNC_1(VAR_5) |
      FUNC_0(VAR_5 - (VAR_11 - 1)));

 return 0;
}
