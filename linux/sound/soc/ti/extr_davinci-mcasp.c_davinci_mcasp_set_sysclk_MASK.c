
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct davinci_mcasp {unsigned int sysclk_freq; int dev; int pdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct davinci_mcasp*,int ,int ) ;
 int FUNC_2 (struct davinci_mcasp*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 struct davinci_mcasp* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_6, int VAR_7,
        unsigned int VAR_8, int VAR_9)
{
 struct davinci_mcasp *VAR_10 = FUNC_6(VAR_6);

 FUNC_3(VAR_10->dev);
 if (VAR_9 == VAR_5) {
  FUNC_2(VAR_10, VAR_3, VAR_1);
  FUNC_2(VAR_10, VAR_2, VAR_0);
  FUNC_5(VAR_4, &VAR_10->pdir);
 } else {
  FUNC_1(VAR_10, VAR_3, VAR_1);
  FUNC_1(VAR_10, VAR_2, VAR_0);
  FUNC_0(VAR_4, &VAR_10->pdir);
 }

 VAR_10->sysclk_freq = VAR_8;

 FUNC_4(VAR_10->dev);
 return 0;
}
