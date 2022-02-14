
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5631_priv {int codec_version; scalar_t__ dmic_used_flag; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct rt5631_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_17)
{
 struct rt5631_priv *VAR_18 = FUNC_3(VAR_17);
 unsigned int VAR_19;

 VAR_19 = FUNC_1(VAR_17, VAR_0);
 if (VAR_19 & 0x0002)
  VAR_18->codec_version = 1;
 else
  VAR_18->codec_version = 0;

 FUNC_2(VAR_17);
 FUNC_5(VAR_17, VAR_14,
  VAR_15 | VAR_13,
  VAR_15 | VAR_13);
 FUNC_0(80);
 FUNC_5(VAR_17, VAR_14,
  VAR_12, VAR_12);

 FUNC_6(VAR_17, VAR_11, 0x0f18);

 if (VAR_18->codec_version)
  FUNC_5(VAR_17, VAR_11,
     0x2000, 0x2000);
 else
  FUNC_5(VAR_17, VAR_11,
     0x2000, 0);

 if (VAR_18->dmic_used_flag) {
  FUNC_5(VAR_17, VAR_6,
   VAR_10 |
   VAR_8,
   VAR_9 |
   VAR_7);
  FUNC_5(VAR_17, VAR_1,
   VAR_3 |
   VAR_4,
   VAR_2 |
   VAR_5);
 }

 FUNC_4(VAR_17, VAR_16);

 return 0;
}
