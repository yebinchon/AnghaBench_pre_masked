
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98088_priv {scalar_t__ digmic; struct max98088_cdata* dai; } ;
struct max98088_cdata {unsigned int fmt; } ;


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




 unsigned int VAR_11 ;



 unsigned int VAR_12 ;

 unsigned int VAR_13 ;


 int FUNC_0 (int ,char*) ;
 struct max98088_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_14,
                                unsigned int VAR_15)
{
       struct snd_soc_component *VAR_16 = VAR_14->component;
       struct max98088_priv *VAR_17 = FUNC_1(VAR_16);
       struct max98088_cdata *VAR_18;
       u8 VAR_19;
       u8 VAR_20 = 0;

       VAR_18 = &VAR_17->dai[0];

       if (VAR_15 != VAR_18->fmt) {
               VAR_18->fmt = VAR_15;

               switch (VAR_15 & VAR_13) {
               case 134:

                       FUNC_3(VAR_16, VAR_7,
                               0x80);
                       FUNC_3(VAR_16, VAR_8,
                               0x00);
                       break;
               case 137:

                       VAR_20 |= VAR_4;
                       break;
               case 135:
               case 136:
               default:
                       FUNC_0(VAR_16->dev, "Clock mode unsupported");
                       return -VAR_0;
               }

               switch (VAR_15 & VAR_11) {
               case 133:
                       VAR_20 |= VAR_3;
                       break;
               case 130:
                       break;
               default:
                       return -VAR_0;
               }

               switch (VAR_15 & VAR_12) {
               case 128:
                       break;
               case 129:
                       VAR_20 |= VAR_6;
                       break;
               case 131:
                       VAR_20 |= VAR_1;
                       break;
               case 132:
                       VAR_20 |= VAR_1|VAR_6;
                       break;
               default:
                       return -VAR_0;
               }

               FUNC_2(VAR_16, VAR_9,
                       VAR_4 | VAR_3 | VAR_1 |
                       VAR_6, VAR_20);

               VAR_19 = VAR_2;
               if (VAR_17->digmic)
                       VAR_19 |= VAR_5;
               FUNC_3(VAR_16, VAR_10, VAR_19);
       }

       return 0;
}
