
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int buffer_bytes_max; int period_bytes_max; int rates; } ;
struct snd_pcm_runtime {struct ichdev* private_data; TYPE_2__ hw; } ;
struct intel8x0 {scalar_t__ device_type; } ;
struct ichdev {TYPE_1__* pcm; struct snd_pcm_substream* substream; } ;
struct TYPE_3__ {int rates; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 struct intel8x0* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3, struct ichdev *VAR_4)
{
 struct intel8x0 *VAR_5 = FUNC_2(VAR_3);
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;
 int VAR_7;

 VAR_4->substream = VAR_3;
 VAR_6->hw = VAR_2;
 VAR_6->hw.rates = VAR_4->pcm->rates;
 FUNC_1(VAR_6);
 if (VAR_5->device_type == VAR_0) {
  VAR_6->hw.buffer_bytes_max = 64*1024;
  VAR_6->hw.period_bytes_max = 64*1024;
 }
 if ((VAR_7 = FUNC_0(VAR_6, VAR_1)) < 0)
  return VAR_7;
 VAR_6->private_data = VAR_4;
 return 0;
}
