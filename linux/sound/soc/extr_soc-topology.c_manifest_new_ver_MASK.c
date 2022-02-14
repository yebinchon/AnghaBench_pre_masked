
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_tplg {int dev; } ;
struct TYPE_4__ {int size; int data; } ;
struct snd_soc_tplg_manifest_v4 {TYPE_2__ priv; int dai_link_elems; int pcm_elems; int graph_elems; int widget_elems; int control_elems; } ;
struct TYPE_3__ {int size; int data; } ;
struct snd_soc_tplg_manifest {int size; TYPE_1__ priv; int dai_link_elems; int pcm_elems; int graph_elems; int widget_elems; int control_elems; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 struct snd_soc_tplg_manifest* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct soc_tplg *VAR_3,
       struct snd_soc_tplg_manifest *VAR_4,
       struct snd_soc_tplg_manifest **VAR_5)
{
 struct snd_soc_tplg_manifest *VAR_6;
 struct snd_soc_tplg_manifest_v4 *VAR_7;
 int VAR_8;

 *VAR_5 = ((void*)0);

 VAR_8 = FUNC_3(VAR_4->size);
 if (VAR_8 != sizeof(*VAR_7)) {
  FUNC_1(VAR_3->dev, "ASoC: invalid manifest size %d\n",
    VAR_8);
  if (VAR_8)
   return -VAR_0;
  VAR_4->size = FUNC_0(sizeof(*VAR_7));
 }

 FUNC_1(VAR_3->dev, "ASoC: old version of manifest\n");

 VAR_7 = (struct snd_soc_tplg_manifest_v4 *)VAR_4;
 VAR_6 = FUNC_2(sizeof(*VAR_6) + FUNC_3(VAR_7->priv.size),
         VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->size = FUNC_0(sizeof(*VAR_6));
 VAR_6->control_elems = VAR_7->control_elems;
 VAR_6->widget_elems = VAR_7->widget_elems;
 VAR_6->graph_elems = VAR_7->graph_elems;
 VAR_6->pcm_elems = VAR_7->pcm_elems;
 VAR_6->dai_link_elems = VAR_7->dai_link_elems;
 VAR_6->priv.size = VAR_7->priv.size;
 if (VAR_6->priv.size)
  FUNC_4(VAR_6->priv.data, VAR_7->priv.data,
         FUNC_3(VAR_7->priv.size));

 *VAR_5 = VAR_6;
 return 0;
}
