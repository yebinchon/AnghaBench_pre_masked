
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2->dev, "Failed to issue reset: %d\n", VAR_3);
  return VAR_3;
 }



 FUNC_1(VAR_2, VAR_1, 0x100, 0x100);
 FUNC_1(VAR_2, VAR_0, 0x100, 0x100);

 return VAR_3;
}
