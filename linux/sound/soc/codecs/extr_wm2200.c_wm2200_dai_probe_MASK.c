
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2200_priv {int symmetric_rates; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm2200_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct wm2200_priv *VAR_6 = FUNC_1(VAR_5);
 unsigned int VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5, VAR_3);
 if (VAR_8 >= 0) {
  if ((VAR_8 & VAR_2) != 0) {
   VAR_6->symmetric_rates = 1;
   VAR_7 = VAR_0;
  }
 } else {
  FUNC_0(VAR_5->dev, "Failed to read GPIO 1 config: %d\n", VAR_8);
 }

 FUNC_3(VAR_5, VAR_1,
       VAR_0, VAR_7);

 return 0;
}
