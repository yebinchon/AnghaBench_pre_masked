
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_2)
{
 int VAR_3 = 60;
 u8 VAR_4;

 do {
  FUNC_2(1000, 2000);
  FUNC_0(VAR_2, VAR_0, &VAR_4);
 } while (((VAR_4 & 0x03) != VAR_1) && VAR_3--);
 if ((VAR_4 & 0x03) != VAR_1)
  FUNC_1(VAR_2->dev,
   "internal oscillator calibration failed\n");
}
