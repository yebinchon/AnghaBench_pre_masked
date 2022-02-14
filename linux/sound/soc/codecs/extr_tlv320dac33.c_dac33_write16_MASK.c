
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlv320dac33_priv {int i2c; scalar_t__ chip_power; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int*,int) ;
 struct tlv320dac33_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1, unsigned int VAR_2,
         unsigned int VAR_3)
{
 struct tlv320dac33_priv *VAR_4 = FUNC_3(VAR_1);
 u8 VAR_5[3];
 int VAR_6 = 0;







 VAR_5[0] = VAR_2 & 0xff;
 VAR_5[1] = (VAR_3 >> 8) & 0xff;
 VAR_5[2] = VAR_3 & 0xff;

 FUNC_0(VAR_1, VAR_5[0], VAR_5[1]);
 FUNC_0(VAR_1, VAR_5[0] + 1, VAR_5[2]);

 if (VAR_4->chip_power) {

  VAR_5[0] |= VAR_0;
  VAR_6 = FUNC_2(VAR_4->i2c, VAR_5, 3);
  if (VAR_6 != 3)
   FUNC_1(VAR_1->dev, "Write failed (%d)\n", VAR_6);
  else
   VAR_6 = 0;
 }

 return VAR_6;
}
