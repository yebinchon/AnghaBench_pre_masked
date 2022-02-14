
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct nm256_stream* private_data; } ;
struct nm256_stream {scalar_t__ bufptr; } ;


 int FUNC_0 (scalar_t__,int ,unsigned long) ;

__attribute__((used)) static int
FUNC_1(struct snd_pcm_substream *VAR_0,
      int VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_0->runtime;
 struct nm256_stream *VAR_5 = VAR_4->private_data;

 FUNC_0(VAR_5->bufptr + VAR_2, 0, VAR_3);
 return 0;
}
