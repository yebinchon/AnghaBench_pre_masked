
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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;

__attribute__((used)) static bool FUNC_2(struct snd_soc_component *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_1(VAR_6, VAR_4);
 if (!(VAR_7 & VAR_0)) {
  if (VAR_7 & ~VAR_1) {
   FUNC_0(VAR_6->dev, "Analogue paths connected: %x\n",
     VAR_7 & ~VAR_0);
   return 0;
  } else {
   FUNC_0(VAR_6->dev, "HPL connected to mixer\n");
  }
 } else {
  FUNC_0(VAR_6->dev, "HPL connected to DAC\n");
 }

 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (!(VAR_7 & VAR_2)) {
  if (VAR_7 & ~VAR_3) {
   FUNC_0(VAR_6->dev, "Analogue paths connected: %x\n",
     VAR_7 & ~VAR_2);
   return 0;
  } else {
   FUNC_0(VAR_6->dev, "HPR connected to mixer\n");
  }
 } else {
  FUNC_0(VAR_6->dev, "HPR connected to DAC\n");
 }

 return 1;
}
