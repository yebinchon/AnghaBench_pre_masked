
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {struct aaci* private_data; TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct aaci_runtime {int pcm_open; int cr; int fifo_bytes; TYPE_3__* pcm; } ;
struct aaci {int fifo_depth; } ;
struct TYPE_7__ {TYPE_2__* r; } ;
struct TYPE_6__ {int slots; } ;
struct TYPE_5__ {struct aaci_runtime* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int* VAR_4 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,unsigned int,unsigned int,int ) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5,
         struct snd_pcm_hw_params *VAR_6)
{
 struct aaci_runtime *VAR_7 = VAR_5->runtime->private_data;
 unsigned int VAR_8 = FUNC_2(VAR_6);
 unsigned int VAR_9 = FUNC_3(VAR_6);
 int VAR_10 = VAR_9 > 48000;
 int VAR_11;

 FUNC_0(VAR_5);
 if (VAR_7->pcm_open) {
  FUNC_4(VAR_7->pcm);
  VAR_7->pcm_open = 0;
 }


 if (VAR_10 && VAR_8 != 2)
  return -VAR_3;

 VAR_11 = FUNC_6(VAR_5,
           FUNC_1(VAR_6));
 if (VAR_11 >= 0) {
  struct aaci *VAR_12 = VAR_5->private_data;

  VAR_11 = FUNC_5(VAR_7->pcm, VAR_9, VAR_8,
     VAR_7->pcm->r[VAR_10].slots);

  VAR_7->pcm_open = VAR_11 == 0;
  VAR_7->cr = VAR_1 | VAR_0 | VAR_2;
  VAR_7->cr |= VAR_4[VAR_8 + VAR_10 * 2];






  VAR_7->fifo_bytes = VAR_12->fifo_depth * 4 / 2;
 }

 return VAR_11;
}
