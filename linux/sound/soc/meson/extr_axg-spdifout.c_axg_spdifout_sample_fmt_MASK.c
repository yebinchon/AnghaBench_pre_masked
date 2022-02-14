
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_spdifout {int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 unsigned int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (int ,int ,int,unsigned int) ;
 struct axg_spdifout* FUNC_8 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_hw_params *VAR_8,
       struct snd_soc_dai *VAR_9)
{
 struct axg_spdifout *VAR_10 = FUNC_8(VAR_9);
 unsigned int VAR_11;


 switch (FUNC_4(VAR_8)) {
 case 1:
  VAR_11 = FUNC_0(0x1);
  break;
 case 2:
  VAR_11 = FUNC_0(0x3);
  break;
 default:
  FUNC_3(VAR_9->dev, "too many channels for spdif dai: %u\n",
   FUNC_4(VAR_8));
  return -VAR_0;
 }

 FUNC_7(VAR_10->map, VAR_1,
      VAR_3, VAR_11);


 switch (FUNC_5(VAR_8)) {
 case 8:

  VAR_11 = FUNC_2(0);
  break;
 case 16:

  VAR_11 = FUNC_2(2);
  break;
 case 32:

  VAR_11 = FUNC_2(4);
  break;
 default:
  FUNC_3(VAR_9->dev, "Unsupported physical width: %u\n",
   FUNC_5(VAR_8));
  return -VAR_0;
 }


 VAR_11 |= FUNC_1(FUNC_6(VAR_8) - 1);

 FUNC_7(VAR_10->map, VAR_5,
      VAR_6 |
      VAR_7, VAR_11);

 FUNC_7(VAR_10->map, VAR_1,
      VAR_4 | VAR_2,
      0);

 return 0;
}
