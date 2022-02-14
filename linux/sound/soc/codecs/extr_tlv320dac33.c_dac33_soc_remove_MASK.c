
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {scalar_t__ irq; int work; int component; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct tlv320dac33_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_0)
{
 struct tlv320dac33_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->irq >= 0) {
  FUNC_1(VAR_1->irq, VAR_1->component);
  FUNC_0(&VAR_1->work);
 }
}
