
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tdm_info {int dummy; } ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;






 struct zx_tdm_info* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct zx_tdm_info*,int ) ;
 int FUNC_2 (struct zx_tdm_info*,int) ;
 int FUNC_3 (struct zx_tdm_info*,int) ;
 int FUNC_4 (struct zx_tdm_info*,int) ;
 int FUNC_5 (struct zx_tdm_info*,int) ;
 int FUNC_6 (struct zx_tdm_info*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_6, int VAR_7,
     struct snd_soc_dai *VAR_8)
{
 int VAR_9 = (VAR_6->stream == VAR_5);
 struct zx_tdm_info *VAR_10 = FUNC_0(VAR_8->dev);
 unsigned int VAR_11;
 int VAR_12 = 0;

 switch (VAR_7) {
 case 130:
  if (VAR_9) {
   VAR_11 = FUNC_1(VAR_10, VAR_3);
   VAR_11 |= VAR_1;
   FUNC_6(VAR_10, VAR_3, VAR_11);

   FUNC_2(VAR_10, 1);
  } else {
   VAR_11 = FUNC_1(VAR_10, VAR_4);
   VAR_11 |= VAR_2;
   FUNC_6(VAR_10, VAR_4, VAR_11);

   FUNC_4(VAR_10, 1);
  }
  break;
 case 131:
 case 132:
  if (VAR_9)
   FUNC_3(VAR_10, 1);
  else
   FUNC_5(VAR_10, 1);
  break;
 case 129:
  if (VAR_9)
   FUNC_2(VAR_10, 0);
  else
   FUNC_4(VAR_10, 0);
  break;
 case 128:
 case 133:
  if (VAR_9)
   FUNC_3(VAR_10, 0);
  else
   FUNC_5(VAR_10, 0);
  break;
 default:
  VAR_12 = -VAR_0;
  break;
 }

 return VAR_12;
}
