
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_retune_configs; } ;
struct wm9081_priv {TYPE_1__ pdata; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct wm9081_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_5)
{
 struct wm9081_priv *VAR_6 = FUNC_3(VAR_5);


 FUNC_4(VAR_5, VAR_0,
       VAR_2, VAR_2);
 FUNC_4(VAR_5, VAR_1,
       VAR_3, VAR_3);

 if (!VAR_6->pdata.num_retune_configs) {
  FUNC_1(VAR_5->dev,
   "No ReTune Mobile data, using normal EQ\n");
  FUNC_2(VAR_5, VAR_4,
         FUNC_0(VAR_4));
 }

 return 0;
}
