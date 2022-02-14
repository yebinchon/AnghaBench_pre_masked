
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_ice1712 {int open_mutex; struct snd_pcm_substream** pcm_reserved; struct snd_pcm_substream** playback_con_substream_ds; struct snd_pcm_substream* playback_pro_substream; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct snd_ice1712* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct snd_ice1712*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1,
        struct snd_pcm_hw_params *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_6(VAR_1);
 int VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_2);
 FUNC_0(&VAR_3->open_mutex);

 if (VAR_1 == VAR_3->playback_pro_substream) {

  VAR_5 = VAR_5 / 2 - 1;
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   if (VAR_3->pcm_reserved[VAR_4] &&
       VAR_3->pcm_reserved[VAR_4] != VAR_1) {
    FUNC_1(&VAR_3->open_mutex);
    return -VAR_0;
   }
   VAR_3->pcm_reserved[VAR_4] = VAR_1;
  }
  for (; VAR_4 < 3; VAR_4++) {
   if (VAR_3->pcm_reserved[VAR_4] == VAR_1)
    VAR_3->pcm_reserved[VAR_4] = ((void*)0);
  }
 } else {
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {

   if (VAR_3->playback_con_substream_ds[VAR_4] == VAR_1) {
    if (VAR_3->pcm_reserved[VAR_4] &&
        VAR_3->pcm_reserved[VAR_4] != VAR_1) {
     FUNC_1(&VAR_3->open_mutex);
     return -VAR_0;
    }
    VAR_3->pcm_reserved[VAR_4] = VAR_1;
    break;
   }
  }
 }
 FUNC_1(&VAR_3->open_mutex);

 VAR_6 = FUNC_7(VAR_3, FUNC_4(VAR_2), 0);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_5(VAR_1, FUNC_2(VAR_2));
}
