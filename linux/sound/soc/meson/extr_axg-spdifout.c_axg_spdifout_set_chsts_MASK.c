
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct axg_spdifout {int map; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int,int) ;
 int FUNC_3 (struct snd_pcm_hw_params*,int*,int) ;
 struct axg_spdifout* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_hw_params *VAR_6,
      struct snd_soc_dai *VAR_7)
{
 struct axg_spdifout *VAR_8 = FUNC_4(VAR_7);
 unsigned int VAR_9;
 int VAR_10;
 u8 VAR_11[4];
 u32 VAR_12;

 VAR_10 = FUNC_3(VAR_6, VAR_11, 4);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7->dev, "Creating IEC958 channel status failed %d\n",
   VAR_10);
  return VAR_10;
 }
 VAR_12 = VAR_11[0] | VAR_11[1] << 8 | VAR_11[2] << 16 | VAR_11[3] << 24;


 FUNC_2(VAR_8->map, VAR_0, VAR_12);


 for (VAR_9 = VAR_1; VAR_9 <= VAR_2;
      VAR_9 += FUNC_1(VAR_8->map))
  FUNC_2(VAR_8->map, VAR_9, 0);


 FUNC_2(VAR_8->map, VAR_3, VAR_12);


 for (VAR_9 = VAR_4; VAR_9 <= VAR_5;
      VAR_9 += FUNC_1(VAR_8->map))
  FUNC_2(VAR_8->map, VAR_9, 0);

 return 0;
}
