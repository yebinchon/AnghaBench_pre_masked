
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_motu* private_data; } ;
struct snd_motu {int tx_stream; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_motu*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_motu *VAR_1 = VAR_0->private_data;
 int VAR_2;

 FUNC_1(&VAR_1->mutex);
 VAR_2 = FUNC_3(VAR_1);
 FUNC_2(&VAR_1->mutex);
 if (VAR_2 >= 0)
  FUNC_0(&VAR_1->tx_stream);

 return 0;
}
