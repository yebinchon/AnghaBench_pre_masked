
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; int dev; } ;
struct q6afe_i2s_cfg {unsigned int fmt; } ;
struct q6afe_dai_data {TYPE_1__* port_config; } ;
struct TYPE_2__ {struct q6afe_i2s_cfg i2s_cfg; } ;


 struct q6afe_dai_data* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0, unsigned int VAR_1)
{
 struct q6afe_dai_data *VAR_2 = FUNC_0(VAR_0->dev);
 struct q6afe_i2s_cfg *VAR_3 = &VAR_2->port_config[VAR_0->id].i2s_cfg;

 VAR_3->fmt = VAR_1;

 return 0;
}
