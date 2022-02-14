
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_dg00x* private_data; } ;
struct snd_dg00x {int rx_stream; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_dg00x *VAR_1 = VAR_0->private_data;

 return FUNC_0(&VAR_1->rx_stream);
}
