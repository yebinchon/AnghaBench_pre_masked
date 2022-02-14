
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct es7134_data {struct es7134_chip* chip; } ;
struct es7134_chip {scalar_t__ extra_route_num; int extra_routes; scalar_t__ extra_widget_num; int extra_widgets; } ;


 int FUNC_0 (int ,char*) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct es7134_data* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int ,scalar_t__) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_0)
{
 struct snd_soc_dapm_context *VAR_1 = FUNC_1(VAR_0);
 struct es7134_data *VAR_2 = FUNC_2(VAR_0);
 const struct es7134_chip *VAR_3 = VAR_2->chip;
 int VAR_4;

 if (VAR_3->extra_widget_num) {
  VAR_4 = FUNC_4(VAR_1, VAR_3->extra_widgets,
      VAR_3->extra_widget_num);
  if (VAR_4) {
   FUNC_0(VAR_0->dev, "failed to add extra widgets\n");
   return VAR_4;
  }
 }

 if (VAR_3->extra_route_num) {
  VAR_4 = FUNC_3(VAR_1, VAR_3->extra_routes,
           VAR_3->extra_route_num);
  if (VAR_4) {
   FUNC_0(VAR_0->dev, "failed to add extra routes\n");
   return VAR_4;
  }
 }

 return 0;
}
