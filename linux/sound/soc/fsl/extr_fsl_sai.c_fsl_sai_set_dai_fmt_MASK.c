
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "Cannot set tx format: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_0);
 if (VAR_4)
  FUNC_0(VAR_2->dev, "Cannot set rx format: %d\n", VAR_4);

 return VAR_4;
}
