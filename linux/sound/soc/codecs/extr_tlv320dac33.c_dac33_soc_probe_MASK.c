
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int irq; int work; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct snd_soc_component*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct snd_soc_component*) ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int,int ,int ,int ,struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ) ;
 struct tlv320dac33_priv* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_5)
{
 struct tlv320dac33_priv *VAR_6 = FUNC_7(VAR_5);
 int VAR_7 = 0;

 VAR_6->component = VAR_5;


 VAR_7 = FUNC_2(VAR_5, 1);
 if (VAR_7 != 0) {
  FUNC_4(VAR_5->dev, "Failed to power up component: %d\n", VAR_7);
  goto err_power;
 }
 VAR_7 = FUNC_3(VAR_5);
 FUNC_2(VAR_5, 0);

 if (VAR_7 < 0) {
  FUNC_4(VAR_5->dev, "Failed to read chip ID: %d\n", VAR_7);
  VAR_7 = -VAR_0;
  goto err_power;
 }


 if (VAR_6->irq >= 0) {
  VAR_7 = FUNC_5(VAR_6->irq, VAR_2,
      VAR_1,
      VAR_5->name, VAR_5);
  if (VAR_7 < 0) {
   FUNC_4(VAR_5->dev, "Could not request IRQ%d (%d)\n",
      VAR_6->irq, VAR_7);
   VAR_6->irq = -1;
  }
  if (VAR_6->irq != -1) {
   FUNC_1(&VAR_6->work, VAR_4);
  }
 }


 if (VAR_6->irq >= 0)
  FUNC_6(VAR_5, VAR_3,
         FUNC_0(VAR_3));

err_power:
 return VAR_7;
}
