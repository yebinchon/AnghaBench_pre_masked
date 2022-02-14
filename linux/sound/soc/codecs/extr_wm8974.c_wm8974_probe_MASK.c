
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(VAR_0->dev, "Failed to issue reset\n");
  return VAR_1;
 }

 return 0;
}
