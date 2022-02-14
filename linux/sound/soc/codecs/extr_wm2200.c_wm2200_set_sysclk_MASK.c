
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2200_priv {unsigned int sysclk; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct wm2200_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_5, int VAR_6,
        int VAR_7, unsigned int VAR_8, int VAR_9)
{
 struct wm2200_priv *VAR_10 = FUNC_1(VAR_5);
 int VAR_11;

 switch (VAR_6) {
 case 128:
  break;

 default:
  FUNC_0(VAR_5->dev, "Unknown clock %d\n", VAR_6);
  return -VAR_0;
 }

 switch (VAR_7) {
 case 130:
 case 129:
 case 131:
 case 132:
  break;
 default:
  FUNC_0(VAR_5->dev, "Invalid source %d\n", VAR_7);
  return -VAR_0;
 }

 switch (VAR_8) {
 case 22579200:
 case 24576000:
  VAR_11 = 2;
  break;
 default:
  FUNC_0(VAR_5->dev, "Invalid clock rate: %d\n", VAR_8);
  return -VAR_0;
 }





 FUNC_2(VAR_5, VAR_1, VAR_2 |
       VAR_4,
       VAR_11 << VAR_3 | VAR_7);

 VAR_10->sysclk = VAR_8;

 return 0;
}
