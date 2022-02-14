
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_1)
{
 int VAR_2 = 0;


 VAR_2 = FUNC_1(VAR_1, VAR_0, 0x0);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "Failed to cfg auto detect %d\n", VAR_2);
  return VAR_2;
 }

 return VAR_2;
}
