
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int sysclk; int asyncclk; int* aif_async; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 () ;
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
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,char*,int) ;
 struct wm5100_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int) ;
 int FUNC_7 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_10, int VAR_11,
        int VAR_12, unsigned int VAR_13, int VAR_14)
{
 struct wm5100_priv *VAR_15 = FUNC_4(VAR_10);
 int *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 switch (VAR_11) {
 case 128:
  VAR_20 = VAR_3;
  VAR_16 = &VAR_15->sysclk;
  break;
 case 130:
  VAR_20 = VAR_4;
  VAR_16 = &VAR_15->asyncclk;
  break;
 case 134:

  switch (VAR_12) {
  case 137:
  case 136:
  case 135:
   FUNC_5(VAR_10, VAR_2,
         VAR_1,
         VAR_12);
   break;
  default:
   return -VAR_0;
  }
  return 0;

 case 133:
 case 132:
 case 131:

  switch (VAR_12) {
  case 135:
   VAR_15->aif_async[VAR_11 - 1] = 0;
   break;
  case 138:
   VAR_15->aif_async[VAR_11 - 1] = 1;
   break;
  default:
   FUNC_2(VAR_10->dev, "Invalid source %d\n", VAR_12);
   return -VAR_0;
  }
  return 0;

 case 129:
  switch (VAR_13) {
  case 5644800:
  case 6144000:
   FUNC_5(VAR_10, VAR_5,
         VAR_6, 0);
   break;
  case 11289600:
  case 12288000:
   FUNC_5(VAR_10, VAR_5,
         VAR_6, 0);
   break;
  case 22579200:
  case 24576000:
   FUNC_5(VAR_10, VAR_5,
         VAR_6, 0);
   break;
  default:
   FUNC_2(VAR_10->dev, "Unsupported OPCLK %dHz\n",
    VAR_13);
   return -VAR_0;
  }
  return 0;

 default:
  FUNC_2(VAR_10->dev, "Unknown clock %d\n", VAR_11);
  return -VAR_0;
 }

 switch (VAR_12) {
 case 135:
 case 138:
  FUNC_2(VAR_10->dev, "Invalid source %d\n", VAR_12);
  return -VAR_0;
 }

 switch (VAR_13) {
 case 5644800:
 case 6144000:
  VAR_17 = 0;
  break;
 case 11289600:
 case 12288000:
  VAR_17 = 1;
  break;
 case 22579200:
 case 24576000:
  VAR_17 = 2;
  break;
 default:
  FUNC_2(VAR_10->dev, "Invalid clock rate: %d\n", VAR_13);
  return -VAR_0;
 }

 switch (VAR_13) {
 case 5644800:
 case 11289600:
 case 22579200:
  VAR_18 = 44100;
  break;

 case 6144000:
 case 12288000:
 case 24576000:
  VAR_18 = 48000;
  break;

 default:
  FUNC_0();
  VAR_18 = 0;
  break;
 }





 FUNC_5(VAR_10, VAR_20, VAR_7 |
       VAR_9,
       VAR_17 << VAR_8 | VAR_12);





 if (VAR_11 == 128) {
  FUNC_1(VAR_10->dev, "Setting primary audio rate to %dHz",
   VAR_18);
  if (0 && *VAR_16)
   FUNC_7(VAR_10, VAR_18);
  VAR_19 = FUNC_6(VAR_10, VAR_18);
  if (VAR_19 != 0)
   FUNC_3(VAR_10->dev, "Primary audio slot is %d\n",
     VAR_19);
 }

 *VAR_16 = VAR_13;

 return 0;
}
