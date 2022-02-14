
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int id; } ;
struct snd_pcm_substream {size_t stream; } ;
struct mtk_base_afe {struct mt2701_afe_private* platform_priv; } ;
struct mt2701_i2s_path {scalar_t__* occupied; } ;
struct mt2701_afe_private {struct mt2701_i2s_path* i2s_path; TYPE_1__* soc; } ;
struct TYPE_2__ {int has_one_heart_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_base_afe*,int) ;
 int FUNC_1 (struct mtk_base_afe*,struct mt2701_i2s_path*,int) ;
 int FUNC_2 (struct mtk_base_afe*,int ) ;
 struct mtk_base_afe* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_1,
        struct snd_soc_dai *VAR_2)
{
 struct mtk_base_afe *VAR_3 = FUNC_3(VAR_2);
 struct mt2701_afe_private *VAR_4 = VAR_3->platform_priv;
 int VAR_5 = FUNC_2(VAR_3, VAR_2->id);
 struct mt2701_i2s_path *VAR_6;
 bool VAR_7 = VAR_4->soc->has_one_heart_mode;

 if (VAR_5 < 0)
  return;

 VAR_6 = &VAR_4->i2s_path[VAR_5];

 if (VAR_6->occupied[VAR_1->stream])
  VAR_6->occupied[VAR_1->stream] = 0;
 else
  goto exit;

 FUNC_1(VAR_3, VAR_6, VAR_1->stream);


 if (VAR_1->stream == VAR_0)
  FUNC_1(VAR_3, VAR_6, !VAR_1->stream);

exit:

 FUNC_0(VAR_3, VAR_7 ? 1 : VAR_5);
}
