
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct max98088_priv {unsigned int sysclk; int mclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char*,int,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 struct max98088_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_dai *VAR_4,
                                  int VAR_5, unsigned int VAR_6, int VAR_7)
{
       struct snd_soc_component *VAR_8 = VAR_4->component;
       struct max98088_priv *VAR_9 = FUNC_5(VAR_8);


       if (VAR_6 == VAR_9->sysclk)
               return 0;

 if (!FUNC_0(VAR_9->mclk)) {
  VAR_6 = FUNC_1(VAR_9->mclk, VAR_6);
  FUNC_2(VAR_9->mclk, VAR_6);
 }





       if ((VAR_6 >= 10000000) && (VAR_6 < 20000000)) {
               FUNC_8(VAR_8, VAR_1, 0x10);
       } else if ((VAR_6 >= 20000000) && (VAR_6 < 30000000)) {
               FUNC_8(VAR_8, VAR_1, 0x20);
       } else {
               FUNC_4(VAR_8->dev, "Invalid master clock frequency\n");
               return -VAR_0;
       }

       if (FUNC_6(VAR_8, VAR_2) & VAR_3) {
               FUNC_7(VAR_8, VAR_2,
                       VAR_3, 0);
               FUNC_7(VAR_8, VAR_2,
                       VAR_3, VAR_3);
       }

       FUNC_3(VAR_4->dev, "Clock source is %d at %uHz\n", VAR_5, VAR_6);

       VAR_9->sysclk = VAR_6;
       return 0;
}
