
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_3,
  int VAR_4, unsigned int VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_6 == VAR_2)
  return 0;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_3->dev, "Cannot set tx sysclk: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_0);
 if (VAR_7)
  FUNC_0(VAR_3->dev, "Cannot set rx sysclk: %d\n", VAR_7);

 return VAR_7;
}
