
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct imx_pcm_runtime_data* private_data; } ;
struct imx_pcm_runtime_data {int hrt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct imx_pcm_runtime_data*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct imx_pcm_runtime_data *VAR_2 = VAR_1->private_data;

 FUNC_0(&VAR_2->hrt);

 FUNC_1(VAR_2);

 return 0;
}
