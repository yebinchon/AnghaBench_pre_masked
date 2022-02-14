
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5677_priv {int dsp_cmd_lock; int regmap_physical; struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct rt5677_priv *VAR_5,
  unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_5->component;
 int VAR_10;

 FUNC_1(&VAR_5->dsp_cmd_lock);

 VAR_10 = FUNC_3(VAR_5->regmap_physical, VAR_1,
  VAR_6 >> 16);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "Failed to set addr msb value: %d\n", VAR_10);
  goto err;
 }

 VAR_10 = FUNC_3(VAR_5->regmap_physical, VAR_0,
  VAR_6 & 0xffff);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "Failed to set addr lsb value: %d\n", VAR_10);
  goto err;
 }

 VAR_10 = FUNC_3(VAR_5->regmap_physical, VAR_3,
  VAR_7 >> 16);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "Failed to set data msb value: %d\n", VAR_10);
  goto err;
 }

 VAR_10 = FUNC_3(VAR_5->regmap_physical, VAR_2,
  VAR_7 & 0xffff);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "Failed to set data lsb value: %d\n", VAR_10);
  goto err;
 }

 VAR_10 = FUNC_3(VAR_5->regmap_physical, VAR_4,
  VAR_8);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9->dev, "Failed to set op code value: %d\n", VAR_10);
  goto err;
 }

err:
 FUNC_2(&VAR_5->dsp_cmd_lock);

 return VAR_10;
}
