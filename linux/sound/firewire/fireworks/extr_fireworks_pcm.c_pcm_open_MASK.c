
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; struct snd_efw* private_data; } ;
struct snd_efw {int rx_stream; int tx_stream; } ;
typedef enum snd_efw_clock_source { ____Placeholder_snd_efw_clock_source } snd_efw_clock_source ;
struct TYPE_3__ {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_efw*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_efw*,int*) ;
 int FUNC_3 (struct snd_efw*,unsigned int*) ;
 int FUNC_4 (struct snd_efw*) ;
 int FUNC_5 (struct snd_efw*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct snd_efw *VAR_2 = VAR_1->private_data;
 unsigned int VAR_3;
 enum snd_efw_clock_source VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5 < 0)
  goto end;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5 < 0)
  goto err_locked;

 VAR_5 = FUNC_2(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  goto err_locked;





 if ((VAR_4 != VAR_0) ||
     FUNC_0(&VAR_2->tx_stream) ||
     FUNC_0(&VAR_2->rx_stream)) {
  VAR_5 = FUNC_3(VAR_2, &VAR_3);
  if (VAR_5 < 0)
   goto err_locked;
  VAR_1->runtime->hw.rate_min = VAR_3;
  VAR_1->runtime->hw.rate_max = VAR_3;
 }

 FUNC_6(VAR_1);
end:
 return VAR_5;
err_locked:
 FUNC_4(VAR_2);
 return VAR_5;
}
