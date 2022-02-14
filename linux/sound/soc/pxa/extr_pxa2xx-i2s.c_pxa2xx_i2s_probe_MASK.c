
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_11)
{
 VAR_8 = FUNC_2(VAR_11->dev, "I2SCLK");
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);







 VAR_0 = VAR_1;
 VAR_0 = 0;

 VAR_2 = VAR_4 | VAR_3;

 VAR_5 &= ~(VAR_6 | VAR_7);

 FUNC_3(VAR_11, &VAR_10,
  &VAR_9);

 return 0;
}
