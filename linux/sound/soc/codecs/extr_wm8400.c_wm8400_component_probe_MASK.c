
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8400_priv {struct wm8400* wm8400; } ;
struct wm8400 {int dev; int regmap; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 struct wm8400* FUNC_2 (int ) ;
 struct wm8400_priv* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int * VAR_9 ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,struct wm8400_priv*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;
 int FUNC_9 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_10)
{
 struct wm8400 *VAR_11 = FUNC_2(VAR_10->dev);
 struct wm8400_priv *VAR_12;
 int VAR_13;
 u16 VAR_14;

 VAR_12 = FUNC_3(VAR_10->dev, sizeof(struct wm8400_priv),
       VAR_1);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 FUNC_5(VAR_10, VAR_11->regmap);
 FUNC_7(VAR_10, VAR_12);
 VAR_12->wm8400 = VAR_11;

 VAR_13 = FUNC_4(VAR_11->dev,
     FUNC_0(VAR_9), &VAR_9[0]);
 if (VAR_13 != 0) {
  FUNC_1(VAR_10->dev, "Failed to get regulators: %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_9(VAR_10);

 VAR_14 = FUNC_6(VAR_10, VAR_6);
 FUNC_8(VAR_10, VAR_6, VAR_14 | VAR_2);


 VAR_14 = FUNC_6(VAR_10, VAR_4);
 FUNC_8(VAR_10, VAR_4,
       VAR_14 & VAR_3);
 VAR_14 = FUNC_6(VAR_10, VAR_7);
 FUNC_8(VAR_10, VAR_7,
       VAR_14 & VAR_3);

 FUNC_8(VAR_10, VAR_5, 0x50 | (1<<8));
 FUNC_8(VAR_10, VAR_8, 0x50 | (1<<8));

 return 0;
}
