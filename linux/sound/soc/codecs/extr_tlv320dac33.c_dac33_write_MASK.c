
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct tlv320dac33_priv {int i2c; scalar_t__ chip_power; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (struct snd_soc_component*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,unsigned int*,int) ;
 struct tlv320dac33_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 struct tlv320dac33_priv *VAR_3 = FUNC_3(VAR_0);
 u8 VAR_4[2];
 int VAR_5 = 0;






 VAR_4[0] = VAR_1 & 0xff;
 VAR_4[1] = VAR_2 & 0xff;

 FUNC_0(VAR_0, VAR_4[0], VAR_4[1]);
 if (VAR_3->chip_power) {
  VAR_5 = FUNC_2(VAR_3->i2c, VAR_4, 2);
  if (VAR_5 != 2)
   FUNC_1(VAR_0->dev, "Write failed (%d)\n", VAR_5);
  else
   VAR_5 = 0;
 }

 return VAR_5;
}
