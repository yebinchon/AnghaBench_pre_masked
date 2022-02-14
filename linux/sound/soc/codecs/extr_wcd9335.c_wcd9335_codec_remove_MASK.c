
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int irq_data; int clsh_ctrl; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 struct wcd9335_codec* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct wcd9335_codec*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_1)
{
 struct wcd9335_codec *VAR_2 = FUNC_0(VAR_1->dev);

 FUNC_3(VAR_2->clsh_ctrl);
 FUNC_1(FUNC_2(VAR_2->irq_data, VAR_0), VAR_2);
}
