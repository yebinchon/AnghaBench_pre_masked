
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct nm256_stream {unsigned long dma_size; scalar_t__ buf; } ;
struct nm256 {int dummy; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {struct nm256_stream* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned long FUNC_2 (struct nm256*,int ) ;
 struct nm256* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct nm256 *VAR_2 = FUNC_3(VAR_1);
 struct nm256_stream *VAR_3 = VAR_1->runtime->private_data;
 unsigned long VAR_4;

 if (FUNC_1(!VAR_3))
  return 0;
 VAR_4 = FUNC_2(VAR_2, VAR_0) - (unsigned long)VAR_3->buf;
 VAR_4 %= VAR_3->dma_size;
 return FUNC_0(VAR_1->runtime, VAR_4);
}
