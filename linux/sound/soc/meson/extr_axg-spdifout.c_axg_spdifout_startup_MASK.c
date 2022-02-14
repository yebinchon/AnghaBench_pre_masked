
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_spdifout {int map; int pclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct axg_spdifout* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_8,
    struct snd_soc_dai *VAR_9)
{
 struct axg_spdifout *VAR_10 = FUNC_5(VAR_9);
 int VAR_11;


 VAR_11 = FUNC_1(VAR_10->pclk);
 if (VAR_11) {
  FUNC_2(VAR_9->dev, "failed to enable pclk\n");
  return VAR_11;
 }


 FUNC_0(VAR_10->map);


 FUNC_3(VAR_10->map, VAR_0,
      VAR_3 | VAR_2,
      0);


 FUNC_3(VAR_10->map, VAR_0,
      VAR_1 | VAR_6 |
      VAR_4 | VAR_5,
      0);


 FUNC_4(VAR_10->map, VAR_7, 0x10);

 return 0;
}
