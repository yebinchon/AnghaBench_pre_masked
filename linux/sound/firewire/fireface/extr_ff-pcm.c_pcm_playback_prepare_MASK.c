
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct snd_ff* private_data; } ;
struct snd_pcm_runtime {int rate; } ;
struct snd_ff {int mutex; int rx_stream; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_ff*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_ff *VAR_1 = VAR_0->private_data;
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 int VAR_3;

 FUNC_1(&VAR_1->mutex);

 VAR_3 = FUNC_3(VAR_1, VAR_2->rate);
 if (VAR_3 >= 0)
  FUNC_0(&VAR_1->rx_stream);

 FUNC_2(&VAR_1->mutex);

 return VAR_3;
}
