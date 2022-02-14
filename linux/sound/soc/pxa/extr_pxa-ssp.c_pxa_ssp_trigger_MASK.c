
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_priv {struct ssp_device* ssp; } ;
struct ssp_device {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct ssp_device*) ;
 int FUNC_1 (struct ssp_device*) ;
 int FUNC_2 (struct ssp_device*) ;
 int FUNC_3 (struct ssp_device*,int ) ;
 int FUNC_4 (struct snd_pcm_substream*,struct ssp_device*,int) ;
 int FUNC_5 (struct ssp_device*,int ,int) ;
 struct ssp_priv* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2, int VAR_3,
      struct snd_soc_dai *VAR_4)
{
 int VAR_5 = 0;
 struct ssp_priv *VAR_6 = FUNC_6(VAR_4);
 struct ssp_device *VAR_7 = VAR_6->ssp;
 int VAR_8;

 switch (VAR_3) {
 case 131:
  FUNC_2(VAR_7);
  break;
 case 132:
  FUNC_4(VAR_2, VAR_7, 1);
  VAR_8 = FUNC_3(VAR_7, VAR_1);
  FUNC_5(VAR_7, VAR_1, VAR_8);
  break;
 case 130:
  FUNC_4(VAR_2, VAR_7, 1);
  break;
 case 129:
  FUNC_4(VAR_2, VAR_7, 0);
  break;
 case 128:
  FUNC_1(VAR_7);
  break;
 case 133:
  FUNC_4(VAR_2, VAR_7, 0);
  break;

 default:
  VAR_5 = -VAR_0;
 }

 FUNC_0(VAR_7);

 return VAR_5;
}
