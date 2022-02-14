
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcd9335_codec {TYPE_1__* dai; struct snd_soc_component* component; int hph_mode; int clsh_ctrl; int version; int regmap; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int slim_ch_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct wcd9335_codec* FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct wcd9335_codec*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_2)
{
 struct wcd9335_codec *VAR_3 = FUNC_3(VAR_2->dev);
 int VAR_4;

 FUNC_4(VAR_2, VAR_3->regmap);

 VAR_3->clsh_ctrl = FUNC_7(VAR_2, VAR_3->version);
 if (FUNC_1(VAR_3->clsh_ctrl))
  return FUNC_2(VAR_3->clsh_ctrl);


 VAR_3->hph_mode = VAR_0;
 VAR_3->component = VAR_2;

 FUNC_5(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(&VAR_3->dai[VAR_4].slim_ch_list);

 return FUNC_6(VAR_3);
}
