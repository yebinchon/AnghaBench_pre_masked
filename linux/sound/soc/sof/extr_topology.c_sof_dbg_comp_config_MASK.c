
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_ipc_comp_config {int frame_fmt; int periods_source; int periods_sink; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 struct snd_sof_dev* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_0,
    struct sof_ipc_comp_config *VAR_1)
{
 struct snd_sof_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->dev, " config: periods snk %d src %d fmt %d\n",
  VAR_1->periods_sink, VAR_1->periods_source,
  VAR_1->frame_fmt);
}
