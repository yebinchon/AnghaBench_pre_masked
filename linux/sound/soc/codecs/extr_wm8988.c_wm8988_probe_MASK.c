
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_5)
{
 int VAR_6 = 0;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5->dev, "Failed to issue reset\n");
  return VAR_6;
 }


 FUNC_1(VAR_5, VAR_0, 0x0100, 0x0100);
 FUNC_1(VAR_5, VAR_1, 0x0100, 0x0100);
 FUNC_1(VAR_5, VAR_3, 0x0100, 0x0100);
 FUNC_1(VAR_5, VAR_4, 0x0100, 0x0100);
 FUNC_1(VAR_5, VAR_2, 0x0100, 0x0100);

 return 0;
}
