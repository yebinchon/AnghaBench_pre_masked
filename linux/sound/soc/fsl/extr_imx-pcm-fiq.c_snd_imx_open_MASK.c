
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct imx_pcm_runtime_data* private_data; } ;
struct TYPE_2__ {int function; } ;
struct imx_pcm_runtime_data {TYPE_1__ hrt; int capturing; int playing; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (struct imx_pcm_runtime_data*) ;
 struct imx_pcm_runtime_data* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct snd_pcm_runtime*,int ) ;
 int FUNC_5 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct imx_pcm_runtime_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_8->private_data = VAR_9;

 VAR_9->substream = VAR_7;

 FUNC_0(&VAR_9->playing, 0);
 FUNC_0(&VAR_9->capturing, 0);
 FUNC_1(&VAR_9->hrt, VAR_0, VAR_3);
 VAR_9->hrt.function = VAR_5;

 VAR_10 = FUNC_4(VAR_7->runtime,
   VAR_4);
 if (VAR_10 < 0) {
  FUNC_2(VAR_9);
  return VAR_10;
 }

 FUNC_5(VAR_7, &VAR_6);
 return 0;
}
