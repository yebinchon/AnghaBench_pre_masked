
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int rate; } ;
struct TYPE_6__ {int hw_buffer_size; int sw_buffer_size; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_4__ {int shift; TYPE_3__ pcm_rec; TYPE_2__ hw_buf; } ;
struct snd_cs46xx {TYPE_1__ capt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (struct snd_cs46xx*,int ,int ) ;
 int FUNC_2 (struct snd_cs46xx*,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_cs46xx* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2)
{
 struct snd_cs46xx *VAR_3 = FUNC_4(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;

 FUNC_1(VAR_3, VAR_0, VAR_3->capt.hw_buf.addr);
 VAR_3->capt.shift = 2;
 FUNC_0(&VAR_3->capt.pcm_rec, 0, sizeof(VAR_3->capt.pcm_rec));
 VAR_3->capt.pcm_rec.sw_buffer_size = FUNC_3(VAR_2);
 VAR_3->capt.pcm_rec.hw_buffer_size = VAR_4->period_size * VAR_1 << 2;
 FUNC_2(VAR_3, VAR_4->rate);

 return 0;
}
