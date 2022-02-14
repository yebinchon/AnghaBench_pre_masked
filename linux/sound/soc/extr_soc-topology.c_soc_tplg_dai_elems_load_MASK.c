
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {scalar_t__ pass; int dev; scalar_t__ pos; } ;
struct snd_soc_tplg_hdr {int count; } ;
struct TYPE_2__ {int size; } ;
struct snd_soc_tplg_dai {TYPE_1__ priv; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct soc_tplg*,struct snd_soc_tplg_dai*) ;

__attribute__((used)) static int FUNC_4(struct soc_tplg *VAR_2,
       struct snd_soc_tplg_hdr *VAR_3)
{
 struct snd_soc_tplg_dai *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3->count);

 if (VAR_2->pass != VAR_1)
  return 0;


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4 = (struct snd_soc_tplg_dai *)VAR_2->pos;
  if (FUNC_2(VAR_4->size) != sizeof(*VAR_4)) {
   FUNC_1(VAR_2->dev, "ASoC: invalid physical DAI size\n");
   return -VAR_0;
  }

  FUNC_3(VAR_2, VAR_4);
  VAR_2->pos += (sizeof(*VAR_4) + FUNC_2(VAR_4->priv.size));
 }

 FUNC_0(VAR_2->dev, "ASoC: Configure %d BE DAIs\n", VAR_5);
 return 0;
}
