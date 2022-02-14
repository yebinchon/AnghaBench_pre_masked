
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5682_priv {int jack_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 struct rt5682_priv* FUNC_2 (struct snd_soc_component*) ;
 unsigned int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_14,
  int VAR_15)
{
 struct rt5682_priv *VAR_16 = FUNC_2(VAR_14);
 unsigned int VAR_17, VAR_18;

 if (VAR_15) {

  FUNC_4(VAR_14, VAR_3,
   VAR_8 | VAR_7,
   VAR_8 | VAR_7);
  FUNC_4(VAR_14,
    VAR_3, VAR_6, 0);
  FUNC_5(15000, 20000);
  FUNC_4(VAR_14,
    VAR_3, VAR_6, VAR_6);
  FUNC_4(VAR_14, VAR_4,
   VAR_5, VAR_5);

  FUNC_4(VAR_14, VAR_0,
   VAR_11, VAR_9);

  VAR_18 = 0;
  VAR_17 = FUNC_3(VAR_14, VAR_1)
   & VAR_2;
  while (VAR_17 == 0 && VAR_18 < 50) {
   FUNC_5(10000, 15000);
   VAR_17 = FUNC_3(VAR_14,
    VAR_1) & VAR_2;
   VAR_18++;
  }

  switch (VAR_17) {
  case 0x1:
  case 0x2:
   VAR_16->jack_type = VAR_13;
   FUNC_1(VAR_14, 1);
   break;
  default:
   VAR_16->jack_type = VAR_12;
  }

 } else {
  FUNC_1(VAR_14, 0);
  FUNC_4(VAR_14, VAR_0,
   VAR_11, VAR_10);
  FUNC_4(VAR_14, VAR_3,
   VAR_8 | VAR_7, 0);
  FUNC_4(VAR_14, VAR_4,
   VAR_5, 0);

  VAR_16->jack_type = 0;
 }

 FUNC_0(VAR_14->dev, "jack_type = %d\n", VAR_16->jack_type);
 return VAR_16->jack_type;
}
