
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; struct snd_dg00x* private_data; } ;
struct snd_dg00x {int tx_stream; int rx_stream; } ;
typedef enum snd_dg00x_clock { ____Placeholder_snd_dg00x_clock } snd_dg00x_clock ;
struct TYPE_3__ {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_dg00x*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_dg00x*,int*) ;
 int FUNC_3 (struct snd_dg00x*,int*) ;
 int FUNC_4 (struct snd_dg00x*,unsigned int*) ;
 int FUNC_5 (struct snd_dg00x*) ;
 int FUNC_6 (struct snd_dg00x*) ;
 int FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_2)
{
 struct snd_dg00x *VAR_3 = VAR_2->private_data;
 enum snd_dg00x_clock VAR_4;
 bool VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7 < 0)
  goto end;

 VAR_7 = FUNC_1(VAR_3, VAR_2);
 if (VAR_7 < 0)
  goto err_locked;


 VAR_7 = FUNC_3(VAR_3, &VAR_4);
 if (VAR_7 < 0)
  goto err_locked;
 if (VAR_4 != VAR_1) {
  VAR_7 = FUNC_2(VAR_3, &VAR_5);
  if (VAR_7 < 0)
   goto err_locked;
  if (!VAR_5) {
   VAR_7 = -VAR_0;
   goto err_locked;
  }
 }

 if ((VAR_4 != VAR_1) ||
     FUNC_0(&VAR_3->rx_stream) ||
     FUNC_0(&VAR_3->tx_stream)) {
  VAR_7 = FUNC_4(VAR_3, &VAR_6);
  if (VAR_7 < 0)
   goto err_locked;
  VAR_2->runtime->hw.rate_min = VAR_6;
  VAR_2->runtime->hw.rate_max = VAR_6;
 }

 FUNC_7(VAR_2);
end:
 return VAR_7;
err_locked:
 FUNC_5(VAR_3);
 return VAR_7;
}
