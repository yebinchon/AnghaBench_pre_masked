
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_tplg {TYPE_2__* comp; int ops; int index; int dev; } ;
struct snd_soc_tplg_link_config {char* name; char* stream_name; scalar_t__ flags; scalar_t__ flag_mask; scalar_t__ num_hw_configs; scalar_t__ id; } ;
struct TYPE_3__ {int list; int type; int ops; int index; } ;
struct snd_soc_dai_link {TYPE_1__ dobj; } ;
struct TYPE_4__ {int dobj_list; int card; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct snd_soc_dai_link*,int ,int ) ;
 int FUNC_4 (struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*) ;
 struct snd_soc_dai_link* FUNC_5 (int ,int ,char const*,char const*) ;
 int FUNC_6 (struct soc_tplg*,struct snd_soc_dai_link*,struct snd_soc_tplg_link_config*) ;
 size_t FUNC_7 (char*,size_t) ;

__attribute__((used)) static int FUNC_8(struct soc_tplg *VAR_3,
 struct snd_soc_tplg_link_config *VAR_4)
{
 struct snd_soc_dai_link *VAR_5;
 const char *VAR_6, *VAR_7;
 size_t VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(VAR_4->name, VAR_1);
 if (VAR_8 == VAR_1)
  return -VAR_0;
 else if (VAR_8)
  VAR_6 = VAR_4->name;
 else
  VAR_6 = ((void*)0);

 VAR_8 = FUNC_7(VAR_4->stream_name, VAR_1);
 if (VAR_8 == VAR_1)
  return -VAR_0;
 else if (VAR_8)
  VAR_7 = VAR_4->stream_name;
 else
  VAR_7 = ((void*)0);

 VAR_5 = FUNC_5(VAR_3->comp->card, FUNC_1(VAR_4->id),
         VAR_6, VAR_7);
 if (!VAR_5) {
  FUNC_0(VAR_3->dev, "ASoC: physical link %s (id %d) not exist\n",
   VAR_6, VAR_4->id);
  return -VAR_0;
 }


 if (VAR_4->num_hw_configs)
  FUNC_4(VAR_5, VAR_4);


 if (VAR_4->flag_mask)
  FUNC_3(VAR_5,
          FUNC_1(VAR_4->flag_mask),
          FUNC_1(VAR_4->flags));


 VAR_9 = FUNC_6(VAR_3, VAR_5, VAR_4);
 if (VAR_9 < 0) {
  FUNC_0(VAR_3->dev, "ASoC: physical link loading failed\n");
  return VAR_9;
 }


 VAR_5->dobj.index = VAR_3->index;
 VAR_5->dobj.ops = VAR_3->ops;
 VAR_5->dobj.type = VAR_2;
 FUNC_2(&VAR_5->dobj.list, &VAR_3->comp->dobj_list);

 return 0;
}
