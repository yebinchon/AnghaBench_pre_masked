
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_dg00x* private_data; } ;
struct snd_dg00x {int rx_stream; } ;


 int VAR_0 ;


 int FUNC_0 (int *,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_dg00x *VAR_3 = VAR_1->private_data;

 switch (VAR_2) {
 case 129:
  FUNC_0(&VAR_3->rx_stream, VAR_1);
  break;
 case 128:
  FUNC_0(&VAR_3->rx_stream, ((void*)0));
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
