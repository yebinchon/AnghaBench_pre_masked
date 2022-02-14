
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_bebob* private_data; } ;
struct snd_bebob {int tx_stream; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_bebob*) ;

__attribute__((used)) static int
FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_bebob *VAR_1 = VAR_0->private_data;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 >= 0)
  FUNC_0(&VAR_1->tx_stream);

 return VAR_2;
}
