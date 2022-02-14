
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sspa_priv {int running_cnt; struct ssp_device* sspa; } ;
struct ssp_device {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct ssp_device*) ;
 int FUNC_1 (struct ssp_device*) ;
 int FUNC_2 (struct ssp_device*) ;
 int FUNC_3 (struct ssp_device*) ;
 struct sspa_priv* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2, int VAR_3,
        struct snd_soc_dai *VAR_4)
{
 struct sspa_priv *VAR_5 = FUNC_4(VAR_4);
 struct ssp_device *VAR_6 = VAR_5->sspa;
 int VAR_7 = 0;

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:






  if (!VAR_5->running_cnt)
   FUNC_1(VAR_6);

  if (VAR_2->stream == VAR_1)
   FUNC_3(VAR_6);

  VAR_5->running_cnt++;
  break;

 case 129:
 case 128:
 case 133:
  VAR_5->running_cnt--;

  if (VAR_2->stream == VAR_1)
   FUNC_2(VAR_6);


  if (!VAR_5->running_cnt)
   FUNC_0(VAR_6);
  break;

 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
