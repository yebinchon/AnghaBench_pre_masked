
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_tscm {int tx_stream; int rx_stream; } ;
struct snd_pcm_substream {TYPE_2__* runtime; struct snd_tscm* private_data; } ;
typedef enum snd_tscm_clock { ____Placeholder_snd_tscm_clock } snd_tscm_clock ;
struct TYPE_3__ {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_tscm*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_tscm*,int*) ;
 int FUNC_4 (struct snd_tscm*,unsigned int*) ;
 int FUNC_5 (struct snd_tscm*) ;
 int FUNC_6 (struct snd_tscm*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct snd_tscm *VAR_2 = VAR_1->private_data;
 enum snd_tscm_clock VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5 < 0)
  goto end;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5 < 0)
  goto err_locked;

 VAR_5 = FUNC_3(VAR_2, &VAR_3);
 if (VAR_5 < 0)
  goto err_locked;

 if (VAR_3 != VAR_0 ||
     FUNC_0(&VAR_2->rx_stream) ||
     FUNC_0(&VAR_2->tx_stream)) {
  VAR_5 = FUNC_4(VAR_2, &VAR_4);
  if (VAR_5 < 0)
   goto err_locked;
  VAR_1->runtime->hw.rate_min = VAR_4;
  VAR_1->runtime->hw.rate_max = VAR_4;
 }

 FUNC_2(VAR_1);
end:
 return VAR_5;
err_locked:
 FUNC_5(VAR_2);
 return VAR_5;
}
