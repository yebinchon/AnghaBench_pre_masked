
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct fsi_stream {int dummy; } ;
struct fsi_priv {struct fsi_stream capture; struct fsi_stream playback; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static inline struct fsi_stream *FUNC_1(struct fsi_priv *VAR_0,
     struct snd_pcm_substream *VAR_1)
{
 return FUNC_0(VAR_1) ? &VAR_0->playback : &VAR_0->capture;
}
