
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int chip_power; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 struct tlv320dac33_priv* FUNC_3 (struct snd_soc_component*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_14)
{
 struct tlv320dac33_priv *VAR_15 = FUNC_3(VAR_14);

 if (FUNC_4(!VAR_15->chip_power))
  return;


 FUNC_2(VAR_14, VAR_3, FUNC_0(0));

 FUNC_2(VAR_14, VAR_4, VAR_2 |
          VAR_1);

 FUNC_2(VAR_14, VAR_5, 0x00);



 FUNC_2(VAR_14, VAR_0, VAR_13);


 FUNC_2(VAR_14, VAR_6,
      FUNC_1(VAR_14, VAR_6));
 FUNC_2(VAR_14, VAR_11,
      FUNC_1(VAR_14, VAR_11));

 FUNC_2(VAR_14, VAR_8,
      FUNC_1(VAR_14, VAR_8));
 FUNC_2(VAR_14, VAR_9,
      FUNC_1(VAR_14, VAR_9));

 FUNC_2(VAR_14, VAR_10,
      FUNC_1(VAR_14, VAR_10));

 FUNC_2(VAR_14, VAR_7,
      FUNC_1(VAR_14, VAR_7));
 FUNC_2(VAR_14, VAR_12,
      FUNC_1(VAR_14, VAR_12));
}
