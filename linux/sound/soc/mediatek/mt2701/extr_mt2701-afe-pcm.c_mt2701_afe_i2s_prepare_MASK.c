
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int id; } ;
struct snd_pcm_substream {size_t stream; TYPE_2__* runtime; } ;
struct mtk_base_afe {struct mt2701_afe_private* platform_priv; } ;
struct mt2701_i2s_path {int* occupied; } ;
struct mt2701_afe_private {struct mt2701_i2s_path* i2s_path; TYPE_1__* soc; } ;
struct TYPE_4__ {int rate; } ;
struct TYPE_3__ {int has_one_heart_mode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mtk_base_afe*,int ) ;
 int FUNC_1 (struct mtk_base_afe*,struct mt2701_i2s_path*,int,int ) ;
 int FUNC_2 (struct mtk_base_afe*,int) ;
 struct mtk_base_afe* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct mtk_base_afe *VAR_4 = FUNC_3(VAR_3);
 struct mt2701_afe_private *VAR_5 = VAR_4->platform_priv;
 int VAR_6, VAR_7 = FUNC_0(VAR_4, VAR_3->id);
 struct mt2701_i2s_path *VAR_8;
 bool VAR_9 = VAR_5->soc->has_one_heart_mode;

 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = &VAR_5->i2s_path[VAR_7];

 if (VAR_8->occupied[VAR_2->stream])
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_9 ? 1 : VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_8->occupied[VAR_2->stream] = 1;


 if (VAR_2->stream == VAR_1)
  FUNC_1(VAR_4, VAR_8, !VAR_2->stream,
           VAR_2->runtime->rate);

 FUNC_1(VAR_4, VAR_8, VAR_2->stream,
          VAR_2->runtime->rate);

 return 0;
}
