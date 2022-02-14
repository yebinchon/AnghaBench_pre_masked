
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5663_priv {int codec_ver; } ;




 int VAR_0 ;
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
 int VAR_14 ;
 int FUNC_0 (int ,char*) ;
 struct rt5663_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_15,
 bool VAR_16)
{
 struct rt5663_priv *VAR_17 = FUNC_1(VAR_15);

 if (VAR_16) {
  FUNC_2(VAR_15, VAR_6,
   VAR_2, VAR_1);

  FUNC_2(VAR_15, VAR_6,
   VAR_9,
   VAR_11);
  FUNC_2(VAR_15, VAR_6,
   VAR_9,
   VAR_10);
  switch (VAR_17->codec_ver) {
  case 128:
   FUNC_2(VAR_15, VAR_8,
    VAR_13,
    VAR_14);
   break;
  case 129:
   FUNC_2(VAR_15, VAR_7,
    VAR_4,
    VAR_5);
   break;
  default:
   FUNC_0(VAR_15->dev, "Unknown CODEC Version\n");
  }
 } else {
  switch (VAR_17->codec_ver) {
  case 128:
   FUNC_2(VAR_15, VAR_8,
    VAR_13,
    VAR_12);
   break;
  case 129:
   FUNC_2(VAR_15, VAR_7,
    VAR_4,
    VAR_3);
   break;
  default:
   FUNC_0(VAR_15->dev, "Unknown CODEC Version\n");
  }
  FUNC_2(VAR_15, VAR_6,
   VAR_2, VAR_0);

  FUNC_2(VAR_15, VAR_6,
   VAR_9,
   VAR_11);
  FUNC_2(VAR_15, VAR_6,
   VAR_9,
   VAR_10);
 }
}
