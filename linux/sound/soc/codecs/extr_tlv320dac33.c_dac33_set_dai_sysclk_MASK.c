
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlv320dac33_priv {unsigned int refclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct tlv320dac33_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_4,
  int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_4->component;
 struct tlv320dac33_priv *VAR_9 = FUNC_3(VAR_8);
 u8 VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_8, VAR_1);
 VAR_11 = FUNC_0(VAR_8, VAR_0);
 switch (VAR_5) {
 case 129:
  VAR_10 |= VAR_2;
  VAR_11 |= VAR_3;
  break;
 case 128:
  VAR_10 &= ~VAR_2;
  VAR_11 &= ~VAR_3;
  break;
 default:
  FUNC_2(VAR_8->dev, "Invalid clock ID (%d)\n", VAR_5);
  break;
 }
 VAR_9->refclk = VAR_6;

 FUNC_1(VAR_8, VAR_1, VAR_10);
 FUNC_1(VAR_8, VAR_0, VAR_11);

 return 0;
}
