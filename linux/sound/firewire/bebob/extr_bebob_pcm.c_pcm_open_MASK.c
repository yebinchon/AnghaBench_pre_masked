
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_4__* runtime; struct snd_bebob* private_data; } ;
struct snd_bebob_rate_spec {int (* get ) (struct snd_bebob*,unsigned int*) ;} ;
struct snd_bebob {TYPE_2__* unit; int rx_stream; int tx_stream; TYPE_1__* spec; } ;
typedef enum snd_bebob_clock_type { ____Placeholder_snd_bebob_clock_type } snd_bebob_clock_type ;
struct TYPE_7__ {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_8__ {TYPE_3__ hw; } ;
struct TYPE_6__ {int device; } ;
struct TYPE_5__ {struct snd_bebob_rate_spec* rate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct snd_bebob*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_bebob*,int*) ;
 int FUNC_4 (struct snd_bebob*) ;
 int FUNC_5 (struct snd_bebob*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct snd_bebob*,unsigned int*) ;

__attribute__((used)) static int
FUNC_8(struct snd_pcm_substream *VAR_1)
{
 struct snd_bebob *VAR_2 = VAR_1->private_data;
 const struct snd_bebob_rate_spec *VAR_3 = VAR_2->spec->rate;
 unsigned int VAR_4;
 enum snd_bebob_clock_type VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6 < 0)
  goto end;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (VAR_6 < 0)
  goto err_locked;

 VAR_6 = FUNC_3(VAR_2, &VAR_5);
 if (VAR_6 < 0)
  goto err_locked;





 if (VAR_5 == VAR_0 ||
     FUNC_0(&VAR_2->tx_stream) ||
     FUNC_0(&VAR_2->rx_stream)) {
  VAR_6 = VAR_3->get(VAR_2, &VAR_4);
  if (VAR_6 < 0) {
   FUNC_1(&VAR_2->unit->device,
    "fail to get sampling rate: %d\n", VAR_6);
   goto err_locked;
  }

  VAR_1->runtime->hw.rate_min = VAR_4;
  VAR_1->runtime->hw.rate_max = VAR_4;
 }

 FUNC_6(VAR_1);
end:
 return VAR_6;
err_locked:
 FUNC_4(VAR_2);
 return VAR_6;
}
