
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {scalar_t__ pass; scalar_t__ pos; int dev; } ;
struct snd_soc_tplg_link_config_v4 {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct snd_soc_tplg_link_config {TYPE_1__ priv; int size; } ;
struct snd_soc_tplg_hdr {int payload_size; int size; int count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_tplg_link_config*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct soc_tplg*,struct snd_soc_tplg_link_config*,struct snd_soc_tplg_link_config**) ;
 scalar_t__ FUNC_4 (struct soc_tplg*,int,int,int,char*) ;
 int FUNC_5 (struct soc_tplg*,struct snd_soc_tplg_link_config*) ;

__attribute__((used)) static int FUNC_6(struct soc_tplg *VAR_2,
 struct snd_soc_tplg_hdr *VAR_3)
{
 struct snd_soc_tplg_link_config *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8, VAR_9;
 bool VAR_10;

 VAR_6 = FUNC_2(VAR_3->count);

 if (VAR_2->pass != VAR_1) {
  VAR_2->pos += FUNC_2(VAR_3->size) +
   FUNC_2(VAR_3->payload_size);
  return 0;
 };


 VAR_4 = (struct snd_soc_tplg_link_config *)VAR_2->pos;
 VAR_7 = FUNC_2(VAR_4->size);
 if (VAR_7 > sizeof(struct snd_soc_tplg_link_config)
  || VAR_7 < sizeof(struct snd_soc_tplg_link_config_v4)) {
  FUNC_0(VAR_2->dev, "ASoC: invalid size %d for physical link elems\n",
   VAR_7);
  return -VAR_0;
 }

 if (FUNC_4(VAR_2,
          VAR_7, VAR_6,
          FUNC_2(VAR_3->payload_size),
          "physical link config")) {
  FUNC_0(VAR_2->dev, "ASoC: invalid count %d for physical link elems\n",
   VAR_6);
  return -VAR_0;
 }


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_4 = (struct snd_soc_tplg_link_config *)VAR_2->pos;
  VAR_7 = FUNC_2(VAR_4->size);
  if (VAR_7 == sizeof(*VAR_4)) {
   VAR_10 = 1;
   VAR_5 = VAR_4;
  } else {
   VAR_10 = 0;
   VAR_9 = FUNC_3(VAR_2, VAR_4, &VAR_5);
   if (VAR_9 < 0)
    return VAR_9;
  }

  VAR_9 = FUNC_5(VAR_2, VAR_5);
  if (VAR_9 < 0)
   return VAR_9;




  VAR_2->pos += VAR_7 + FUNC_2(VAR_5->priv.size);

  if (!VAR_10)
   FUNC_1(VAR_5);
 }

 return 0;
}
