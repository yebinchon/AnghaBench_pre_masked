
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int hw_buffer_size; int hw_queue_size; int sw_buffer_size; } ;
struct rme32 {int lock; scalar_t__ iobase; TYPE_1__ capture_pcm; scalar_t__ fullduplex_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct rme32* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2)
{
 struct rme32 *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(&VAR_3->lock);
 if (VAR_3->fullduplex_mode) {
  FUNC_0(&VAR_3->capture_pcm, 0, sizeof(VAR_3->capture_pcm));
  VAR_3->capture_pcm.hw_buffer_size = VAR_0;
  VAR_3->capture_pcm.hw_queue_size = VAR_0 / 2;
  VAR_3->capture_pcm.sw_buffer_size = FUNC_1(VAR_2);
 } else {
  FUNC_5(0, VAR_3->iobase + VAR_1);
 }
 FUNC_4(&VAR_3->lock);
 return 0;
}
