
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int plug_irq; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ,struct snd_soc_component*) ;
 struct twl6040_data* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_0)
{
 struct twl6040_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->plug_irq, VAR_0);
}
