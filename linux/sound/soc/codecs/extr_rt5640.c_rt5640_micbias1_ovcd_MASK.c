
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;

__attribute__((used)) static bool FUNC_2(struct snd_soc_component *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_2->dev, "irq ctrl2 %#04x\n", VAR_3);

 return (VAR_3 & VAR_1);
}
