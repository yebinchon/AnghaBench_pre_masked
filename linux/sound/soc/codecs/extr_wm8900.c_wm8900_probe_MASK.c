
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 int FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_14)
{
 int VAR_15;

 VAR_15 = FUNC_2(VAR_14, VAR_2);
 if (VAR_15 != 0x8900) {
  FUNC_0(VAR_14->dev, "Device is not a WM8900 - ID %x\n", VAR_15);
  return -VAR_0;
 }

 FUNC_5(VAR_14);


 FUNC_1(VAR_14, VAR_1);


 FUNC_3(VAR_14, VAR_5, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_11, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_6, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_12, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_7, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_13, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_4, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_10, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_3, 0x100, 0x100);
 FUNC_3(VAR_14, VAR_9, 0x100, 0x100);


 FUNC_4(VAR_14, VAR_8, 0x81);

 return 0;
}
