
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8996_priv {unsigned int sysclk; int sysclk_src; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct wm8996_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_13,
  int VAR_14, unsigned int VAR_15, int VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_13->component;
 struct wm8996_priv *VAR_18 = FUNC_2(VAR_17);
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = VAR_6;
 int VAR_22;
 int VAR_23;

 if (VAR_15 == VAR_18->sysclk && VAR_14 == VAR_18->sysclk_src)
  return 0;


 VAR_23 = FUNC_3(VAR_17, VAR_1) & VAR_9;
 FUNC_4(VAR_17, VAR_1,
       VAR_9, 0);

 switch (VAR_14) {
 case 129:
  VAR_18->sysclk = VAR_15;
  VAR_22 = 0;
  break;
 case 128:
  VAR_18->sysclk = VAR_15;
  VAR_22 = 1;
  break;
 case 130:
  VAR_18->sysclk = VAR_15;
  VAR_22 = 2;
  break;
 default:
  FUNC_0(VAR_17->dev, "Unsupported clock source %d\n", VAR_14);
  return -VAR_0;
 }

 switch (VAR_18->sysclk) {
 case 5644800:
 case 6144000:
  FUNC_4(VAR_17, VAR_2,
        VAR_10, 0);
  break;
 case 22579200:
 case 24576000:
  VAR_20 = VAR_7;
  VAR_18->sysclk /= 2;

 case 11289600:
 case 12288000:
  FUNC_4(VAR_17, VAR_2,
        VAR_10, VAR_10);
  break;
 case 32000:
 case 32768:
  VAR_19 = VAR_5;
  VAR_21 = 0;
  break;
 default:
  FUNC_1(VAR_17->dev, "Unsupported clock rate %dHz\n",
    VAR_18->sysclk);
  return -VAR_0;
 }

 FUNC_5(VAR_17);

 FUNC_4(VAR_17, VAR_1,
       VAR_11 | VAR_8,
       VAR_22 << VAR_12 | VAR_20);
 FUNC_4(VAR_17, VAR_3, VAR_5, VAR_19);
 FUNC_4(VAR_17, VAR_4,
       VAR_6, VAR_21);
 FUNC_4(VAR_17, VAR_1,
       VAR_9, VAR_23);

 VAR_18->sysclk_src = VAR_14;

 return 0;
}
