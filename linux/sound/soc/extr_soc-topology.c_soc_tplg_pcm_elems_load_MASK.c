
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {scalar_t__ pass; int dev; scalar_t__ pos; } ;
struct snd_soc_tplg_pcm_v4 {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct snd_soc_tplg_pcm {TYPE_1__ priv; int size; } ;
struct snd_soc_tplg_hdr {int payload_size; int count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_tplg_pcm*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct soc_tplg*,struct snd_soc_tplg_pcm*,struct snd_soc_tplg_pcm**) ;
 scalar_t__ FUNC_5 (struct soc_tplg*,int,int,int,char*) ;
 int FUNC_6 (struct soc_tplg*,struct snd_soc_tplg_pcm*) ;

__attribute__((used)) static int FUNC_7(struct soc_tplg *VAR_2,
 struct snd_soc_tplg_hdr *VAR_3)
{
 struct snd_soc_tplg_pcm *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 bool VAR_9;

 VAR_6 = FUNC_3(VAR_3->count);

 if (VAR_2->pass != VAR_1)
  return 0;


 VAR_4 = (struct snd_soc_tplg_pcm *)VAR_2->pos;
 VAR_7 = FUNC_3(VAR_4->size);
 if (VAR_7 > sizeof(struct snd_soc_tplg_pcm)
  || VAR_7 < sizeof(struct snd_soc_tplg_pcm_v4)) {
  FUNC_1(VAR_2->dev, "ASoC: invalid size %d for PCM elems\n",
   VAR_7);
  return -VAR_0;
 }

 if (FUNC_5(VAR_2,
          VAR_7, VAR_6,
          FUNC_3(VAR_3->payload_size),
          "PCM DAI")) {
  FUNC_1(VAR_2->dev, "ASoC: invalid count %d for PCM DAI elems\n",
   VAR_6);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_4 = (struct snd_soc_tplg_pcm *)VAR_2->pos;
  VAR_7 = FUNC_3(VAR_4->size);




  if (VAR_7 == sizeof(*VAR_4)) {
   VAR_9 = 1;
   VAR_5 = VAR_4;
  } else {
   VAR_9 = 0;
   FUNC_4(VAR_2, VAR_4, &VAR_5);
  }


  FUNC_6(VAR_2, VAR_5);




  VAR_2->pos += VAR_7 + FUNC_3(VAR_5->priv.size);

  if (!VAR_9)
   FUNC_2(VAR_5);
 }

 FUNC_0(VAR_2->dev, "ASoC: adding %d PCM DAIs\n", VAR_6);

 return 0;
}
