
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; struct snd_dice* private_data; } ;
struct snd_dice {int * rx_stream; int * tx_stream; } ;
struct TYPE_3__ {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_dice*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_dice*) ;
 int FUNC_3 (struct snd_dice*) ;
 int FUNC_4 (struct snd_dice*,unsigned int*) ;
 int FUNC_5 (struct snd_dice*,unsigned int*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0)
{
 struct snd_dice *VAR_1 = VAR_0->private_data;
 unsigned int VAR_2;
 bool VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4 < 0)
  goto end;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_4 < 0)
  goto err_locked;

 VAR_4 = FUNC_4(VAR_1, &VAR_2);
 if (VAR_4 < 0)
  goto err_locked;
 switch (VAR_2) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 135:
 case 129:
 case 128:
  VAR_3 = 0;
  break;
 default:
  VAR_3 = 1;
  break;
 }





 if (!VAR_3 ||
     FUNC_0(&VAR_1->tx_stream[0]) ||
     FUNC_0(&VAR_1->tx_stream[1]) ||
     FUNC_0(&VAR_1->rx_stream[0]) ||
     FUNC_0(&VAR_1->rx_stream[1])) {
  unsigned int VAR_5;

  VAR_4 = FUNC_5(VAR_1, &VAR_5);
  if (VAR_4 < 0)
   goto err_locked;
  VAR_0->runtime->hw.rate_min = VAR_5;
  VAR_0->runtime->hw.rate_max = VAR_5;
 }

 FUNC_6(VAR_0);
end:
 return VAR_4;
err_locked:
 FUNC_2(VAR_1);
 return VAR_4;
}
