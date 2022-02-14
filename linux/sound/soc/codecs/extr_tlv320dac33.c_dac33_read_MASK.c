
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlv320dac33_priv {int i2c; scalar_t__ chip_power; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (struct snd_soc_component*,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int) ;
 struct tlv320dac33_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_0, unsigned int VAR_1,
        u8 *VAR_2)
{
 struct tlv320dac33_priv *VAR_3 = FUNC_4(VAR_0);
 int VAR_4, VAR_5 = 0;

 *VAR_2 = VAR_1 & 0xff;


 if (VAR_3->chip_power) {
  VAR_4 = FUNC_3(VAR_3->i2c, VAR_2[0]);
  if (VAR_4 < 0) {
   FUNC_2(VAR_0->dev, "Read failed (%d)\n", VAR_4);
   VAR_2[0] = FUNC_0(VAR_0, VAR_1);
   VAR_5 = VAR_4;
  } else {
   VAR_2[0] = VAR_4;
   FUNC_1(VAR_0, VAR_1, VAR_4);
  }
 } else {
  VAR_2[0] = FUNC_0(VAR_0, VAR_1);
 }

 return VAR_5;
}
