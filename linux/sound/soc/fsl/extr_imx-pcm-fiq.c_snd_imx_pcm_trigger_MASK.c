
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct imx_pcm_runtime_data* private_data; } ;
struct imx_pcm_runtime_data {int capturing; int playing; int poll_time_ns; int hrt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct imx_pcm_runtime_data *VAR_7 = VAR_6->private_data;

 switch (VAR_5) {
 case 130:
 case 131:
 case 132:
  if (VAR_4->stream == VAR_2)
   FUNC_1(&VAR_7->playing, 1);
  else
   FUNC_1(&VAR_7->capturing, 1);
  FUNC_4(&VAR_7->hrt, FUNC_5(VAR_7->poll_time_ns),
        VAR_1);
  FUNC_3(VAR_3);
  break;

 case 129:
 case 128:
 case 133:
  if (VAR_4->stream == VAR_2)
   FUNC_1(&VAR_7->playing, 0);
  else
   FUNC_1(&VAR_7->capturing, 0);
  if (!FUNC_0(&VAR_7->playing) &&
    !FUNC_0(&VAR_7->capturing))
   FUNC_2(VAR_3);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
